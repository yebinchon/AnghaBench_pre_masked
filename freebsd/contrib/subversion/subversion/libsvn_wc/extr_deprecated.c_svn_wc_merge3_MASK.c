
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef scalar_t__ svn_wc_conflict_resolver_func_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct conflict_func_1to2_baton {void* inner_baton; scalar_t__ inner_func; } ;
typedef enum svn_wc_merge_outcome_t { ____Placeholder_svn_wc_merge_outcome_t } svn_wc_merge_outcome_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char const**,char const*,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int*,int *,char const*,char const*,char const*,char const*,char const*,char const*,int *,int *,int ,char const*,int const*,int const*,int *,struct conflict_func_1to2_baton*,int *,int *,int *) ;

svn_error_t *
FUNC_8(enum svn_wc_merge_outcome_t *VAR_1,
              const char *VAR_2,
              const char *VAR_3,
              const char *VAR_4,
              svn_wc_adm_access_t *VAR_5,
              const char *VAR_6,
              const char *VAR_7,
              const char *VAR_8,
              svn_boolean_t VAR_9,
              const char *VAR_10,
              const apr_array_header_t *VAR_11,
              const apr_array_header_t *VAR_12,
              svn_wc_conflict_resolver_func_t VAR_13,
              void *VAR_14,
              apr_pool_t *VAR_15)
{
  svn_wc_context_t *VAR_16;
  svn_wc__db_t *VAR_17 = FUNC_4(VAR_5);
  const char *VAR_18, *VAR_19, *VAR_20;
  struct conflict_func_1to2_baton VAR_21;

  FUNC_0(FUNC_1(&VAR_18, VAR_2, VAR_15));
  FUNC_0(FUNC_1(&VAR_19, VAR_3, VAR_15));
  FUNC_0(FUNC_1(&VAR_20, VAR_4, VAR_15));

  FUNC_0(FUNC_5(&VAR_16, ((void*)0) , VAR_17, VAR_15));

  VAR_21.inner_func = VAR_13;
  VAR_21.inner_baton = VAR_14;

  if (VAR_10)
    FUNC_0(FUNC_3(&VAR_10, VAR_10, VAR_15));

  FUNC_0(FUNC_7(VAR_1,
                        VAR_16,
                        VAR_18,
                        VAR_19,
                        VAR_20,
                        VAR_6,
                        VAR_7,
                        VAR_8,
                        ((void*)0),
                        ((void*)0),
                        VAR_9,
                        VAR_10,
                        VAR_11,
                        VAR_12,
                        VAR_13 ? VAR_0 : ((void*)0),
                        &VAR_21,
                        ((void*)0), ((void*)0),
                        VAR_15));

  return FUNC_2(FUNC_6(VAR_16));
}
