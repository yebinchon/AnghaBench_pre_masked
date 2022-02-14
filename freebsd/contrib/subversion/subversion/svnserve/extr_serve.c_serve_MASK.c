
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int server_baton_t ;
typedef int serve_params_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int *,int *,int *) ;
 int VAR_1 ;
 int * FUNC_2 (int *,int *,int ,int *,int ) ;

svn_error_t *FUNC_3(svn_ra_svn_conn_t *VAR_2,
                   serve_params_t *VAR_3,
                   apr_pool_t *VAR_4)
{
  server_baton_t *VAR_5 = ((void*)0);

  FUNC_0(FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4));
  return FUNC_2(VAR_2, VAR_4, VAR_1, VAR_5, VAR_0);
}
