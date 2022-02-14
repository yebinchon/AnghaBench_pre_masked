
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_status_t ;
typedef int svn_wc_status2_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,char const*,int *,int *) ;

svn_error_t *
FUNC_2(svn_wc_status_t **VAR_1,
              const char *VAR_2,
              svn_wc_adm_access_t *VAR_3,
              apr_pool_t *VAR_4)
{
  svn_wc_status2_t *VAR_5;

  FUNC_0(FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4));
  *VAR_1 = (svn_wc_status_t *) VAR_5;
  return VAR_0;
}
