
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_conflict_choice_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int ,int ,char const*,int ,int ,int *,int *,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_2(svn_wc_context_t *VAR_0,
                          const char *VAR_1,
                          svn_depth_t VAR_2,
                          svn_boolean_t VAR_3,
                          const char *VAR_4,
                          svn_boolean_t VAR_5,
                          svn_wc_conflict_choice_t VAR_6,
                          svn_cancel_func_t VAR_7,
                          void *VAR_8,
                          svn_wc_notify_func2_t VAR_9,
                          void *VAR_10,
                          apr_pool_t *VAR_11)
{
  return FUNC_0(FUNC_1(VAR_0, VAR_1,
                                                   VAR_2, VAR_3,
                                                   VAR_4, VAR_5,
                                                   VAR_6,
                                                   ((void*)0), ((void*)0),
                                                   VAR_7, VAR_8,
                                                   VAR_9, VAR_10,
                                                   VAR_11));
}
