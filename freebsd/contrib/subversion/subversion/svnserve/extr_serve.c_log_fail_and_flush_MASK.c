
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int server_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_error_t *VAR_0, server_baton_t *VAR_1,
                   svn_ra_svn_conn_t *VAR_2, apr_pool_t *VAR_3)
{
  svn_error_t *VAR_4;

  FUNC_1(VAR_0, VAR_1);
  VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_0);
  FUNC_2(VAR_0);
  FUNC_0(VAR_4);
  return FUNC_3(VAR_2, VAR_3);
}
