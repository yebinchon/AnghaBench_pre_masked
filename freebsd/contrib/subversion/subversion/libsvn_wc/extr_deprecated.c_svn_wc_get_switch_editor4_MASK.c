
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_external_update_t ;
typedef int svn_wc_dirents_func_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_conflict_resolver_func2_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int const**,void**,int *,int *,char const*,char const*,char const*,int *,int ,int ,int ,int ,int ,char const*,int const*,int ,void*,int ,void*,int ,void*,int ,void*,int ,void*,int *,int *) ;

svn_error_t *
FUNC_2(const svn_delta_editor_t **VAR_0,
                          void **VAR_1,
                          svn_revnum_t *VAR_2,
                          svn_wc_context_t *VAR_3,
                          const char *VAR_4,
                          const char *VAR_5,
                          const char *VAR_6,
                          svn_boolean_t VAR_7,
                          svn_depth_t VAR_8,
                          svn_boolean_t VAR_9,
                          svn_boolean_t VAR_10,
                          svn_boolean_t VAR_11,
                          const char *VAR_12,
                          const apr_array_header_t *VAR_13,
                          svn_wc_dirents_func_t VAR_14,
                          void *VAR_15,
                          svn_wc_conflict_resolver_func2_t VAR_16,
                          void *VAR_17,
                          svn_wc_external_update_t VAR_18,
                          void *VAR_19,
                          svn_cancel_func_t VAR_20,
                          void *VAR_21,
                          svn_wc_notify_func2_t VAR_22,
                          void *VAR_23,
                          apr_pool_t *VAR_24,
                          apr_pool_t *VAR_25)
{
  return FUNC_0(
    FUNC_1(VAR_0, VAR_1,
                              VAR_2,
                              VAR_3,
                              VAR_4, VAR_5,
                              VAR_6, ((void*)0),
                              VAR_7,
                              VAR_8, VAR_9,
                              VAR_10,
                              VAR_11,
                              VAR_12,
                              VAR_13,
                              VAR_14, VAR_15,
                              VAR_16, VAR_17,
                              VAR_18, VAR_19,
                              VAR_20, VAR_21,
                              VAR_22, VAR_23,
                              VAR_24, VAR_25));
}
