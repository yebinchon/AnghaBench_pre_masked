
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int *) ;
 int * FUNC_2 (char const**,char const*,int *,int *,int *) ;

svn_error_t *
FUNC_3(const char **VAR_0,
                         const char *VAR_1,
                         apr_pool_t *VAR_2)
{
  svn_client_ctx_t *VAR_3;

  FUNC_0(FUNC_1(&VAR_3, VAR_2));

  return FUNC_2(VAR_0, VAR_1, VAR_3, VAR_2, VAR_2);
}
