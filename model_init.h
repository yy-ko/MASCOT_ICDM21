#ifndef MODEL_INIT_H
#include "common_struct.h"
#define MODEL_INIT_H


void init_model_single(Mf_info *mf_info, SGD *sgd_info);
void init_features_single_on_device(float *d_feature_vec, unsigned int dim, unsigned int k);
void cpy2grouped_parameters(Mf_info *mf_info, SGD *sgd_info);
void cpy2grouped_parameters_gpu(Mf_info *mf_info, SGD *sgd_info);
void cpy2grouped_parameters_gpu_float_version(Mf_info *mf_info, SGD *sgd_info);
void cpy2grouped_parameters_gpu_for_comparison_indexing(Mf_info *mf_info, SGD *sgd_info);
void cpy2grouped_parameters_gpu_for_division_indexing(Mf_info *mf_info, SGD *sgd_info);
void transform_feature_vector_half2float(short *half_feature, float *float_feature, unsigned int dim, unsigned int k);
void conversion_features_half(short *feature_vec, float *feature_vec_from ,unsigned int dim, unsigned int k);
void cpy2grouped_parameters_gpu_for_division_indexing_float_version(Mf_info *mf_info, SGD *sgd_info);
void init_model_half(Mf_info *mf_info, SGD *sgd_info);
void transition_params_half2float(Mf_info *mf_info, SGD *sgd_info);
#endif