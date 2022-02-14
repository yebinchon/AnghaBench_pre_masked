
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_conflict_choice_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const**,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int ,scalar_t__,char*,scalar_t__,int ,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_7(const char *VAR_0,
                          svn_wc_adm_access_t *VAR_1,
                          svn_boolean_t VAR_2,
                          svn_boolean_t VAR_3,
                          svn_boolean_t VAR_4,
                          svn_depth_t VAR_5,
                          svn_wc_conflict_choice_t VAR_6,
                          svn_wc_notify_func2_t VAR_7,
                          void *VAR_8,
                          svn_cancel_func_t VAR_9,
                          void *VAR_10,
                          apr_pool_t *VAR_11)
{
  svn_wc_context_t *VAR_12;
  svn_wc__db_t *VAR_13 = FUNC_3(VAR_1);
  const char *VAR_14;

  FUNC_0(FUNC_1(&VAR_14, VAR_0, VAR_11));
  FUNC_0(FUNC_4(&VAR_12, ((void*)0), VAR_13, VAR_11));

  FUNC_0(FUNC_6(VAR_12,
                                    VAR_14,
                                    VAR_5,
                                    VAR_2,
                                    VAR_3 ? "" : ((void*)0),
                                    VAR_4,
                                    VAR_6,
                                    VAR_9,
                                    VAR_10,
                                    VAR_7,
                                    VAR_8,
                                    VAR_11));

  return FUNC_2(FUNC_5(VAR_12));

}
