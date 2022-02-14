
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_diff_callbacks2_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,char const*,int const*,void*,int ,int ,int *,int *) ;

svn_error_t *
FUNC_2(svn_wc_adm_access_t *VAR_0,
             const char *VAR_1,
             const svn_wc_diff_callbacks2_t *VAR_2,
             void *VAR_3,
             svn_boolean_t VAR_4,
             svn_boolean_t VAR_5,
             apr_pool_t *VAR_6)
{
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
                      FUNC_0(VAR_4), VAR_5,
                      ((void*)0), VAR_6);
}
