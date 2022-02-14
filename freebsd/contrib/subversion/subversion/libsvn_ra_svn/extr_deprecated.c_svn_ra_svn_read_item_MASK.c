
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_svn_item_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__item_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int **) ;
 int FUNC_3 (int *,int *,int *) ;

svn_error_t *
FUNC_4(svn_ra_svn_conn_t *VAR_1,
                     apr_pool_t *VAR_2,
                     svn_ra_svn_item_t **VAR_3)
{
  svn_ra_svn__item_t *VAR_4;
  FUNC_0(FUNC_2(VAR_1, VAR_2, &VAR_4));
  *VAR_3 = FUNC_1(VAR_2, sizeof(**VAR_3));
  FUNC_3(*VAR_3, VAR_4, VAR_2);

  return VAR_0;
}
