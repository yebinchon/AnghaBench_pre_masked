
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_commit_info_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_commit_info_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int **,char const*,char const*,int ,int ,int *,int *) ;
 int * FUNC_1 (int *) ;

svn_error_t *
FUNC_2(svn_client_commit_info_t **VAR_1,
                  const char *VAR_2,
                  const char *VAR_3,
                  svn_boolean_t VAR_4,
                  svn_client_ctx_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  svn_commit_info_t *VAR_7 = ((void*)0);
  svn_error_t *VAR_8;

  VAR_8 = FUNC_0(&VAR_7,
                           VAR_2, VAR_3, VAR_4,
                           VAR_0, VAR_5, VAR_6);

  *VAR_1 = (svn_client_commit_info_t *) VAR_7;
  return FUNC_1(VAR_8);
}
