
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef int svn_wc_conflict_version_t ;
typedef int svn_wc_conflict_resolver_func2_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef enum svn_wc_merge_outcome_t { ____Placeholder_svn_wc_merge_outcome_t } svn_wc_merge_outcome_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int*,int *,int *,char const*,char const*,char const*,char const*,char const*,char const*,int const*,int const*,int ,char const*,int const*,int *,int const*,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_2(enum svn_wc_merge_outcome_t *VAR_0,
              svn_wc_context_t *VAR_1,
              const char *VAR_2,
              const char *VAR_3,
              const char *VAR_4,
              const char *VAR_5,
              const char *VAR_6,
              const char *VAR_7,
              const svn_wc_conflict_version_t *VAR_8,
              const svn_wc_conflict_version_t *VAR_9,
              svn_boolean_t VAR_10,
              const char *VAR_11,
              const apr_array_header_t *VAR_12,
              const apr_array_header_t *VAR_13,
              svn_wc_conflict_resolver_func2_t VAR_14,
              void *VAR_15,
              svn_cancel_func_t VAR_16,
              void *VAR_17,
              apr_pool_t *VAR_18)
{
  return FUNC_0(
            FUNC_1(VAR_0,
                          ((void*)0) ,
                          VAR_1,
                          VAR_2,
                          VAR_3,
                          VAR_4,
                          VAR_5,
                          VAR_6,
                          VAR_7,
                          VAR_8,
                          VAR_9,
                          VAR_10,
                          VAR_11,
                          VAR_12,
                          ((void*)0) ,
                          VAR_13,
                          VAR_14, VAR_15,
                          VAR_16, VAR_17,
                          VAR_18));
}
