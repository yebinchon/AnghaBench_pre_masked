
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (char const*,int *,int ,int ,int ,int ,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_2(const char *VAR_1,
                          svn_wc_adm_access_t *VAR_2,
                          svn_boolean_t VAR_3,
                          svn_boolean_t VAR_4,
                          svn_boolean_t VAR_5,
                          svn_wc_notify_func2_t VAR_6,
                          void *VAR_7,
                          svn_cancel_func_t VAR_8,
                          void *VAR_9,
                          apr_pool_t *VAR_10)
{
  return FUNC_1(VAR_1, VAR_2, VAR_3,
                                   VAR_4,
                                   FUNC_0(VAR_5),
                                   VAR_0,
                                   VAR_6, VAR_7, VAR_8,
                                   VAR_9, VAR_10);
}
