
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,char*,char*,char const*) ;

__attribute__((used)) static svn_error_t *FUNC_4(svn_ra_svn_conn_t *VAR_0, apr_pool_t *VAR_1,
                         const char *VAR_2)
{
  FUNC_0(FUNC_3(VAR_0, VAR_1, "w(c)", "failure", VAR_2));
  return FUNC_1(FUNC_2(VAR_0, VAR_1));
}
