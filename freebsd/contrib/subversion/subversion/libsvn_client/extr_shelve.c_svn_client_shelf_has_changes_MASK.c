
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int **,char const*,char const*,int *,int *,int *) ;

svn_error_t *
FUNC_3(svn_boolean_t *VAR_1,
                             const char *VAR_2,
                             const char *VAR_3,
                             svn_client_ctx_t *VAR_4,
                             apr_pool_t *VAR_5)
{
  apr_hash_t *VAR_6;

  FUNC_0(FUNC_2(&VAR_6, VAR_2, VAR_3,
                                     VAR_4, VAR_5, VAR_5));
  *VAR_1 = (FUNC_1(VAR_6) != 0);
  return VAR_0;
}
