
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_commit_info_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_commit_info_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int **,char const*,int const*,char const*,int *,int *) ;
 int * FUNC_1 (int *) ;

svn_error_t *
FUNC_2(svn_client_commit_info_t **VAR_0,
                const char *VAR_1,
                const svn_opt_revision_t *VAR_2,
                const char *VAR_3,
                svn_client_ctx_t *VAR_4,
                apr_pool_t *VAR_5)
{
  svn_commit_info_t *VAR_6 = ((void*)0);
  svn_error_t *VAR_7;

  VAR_7 = FUNC_0(&VAR_6, VAR_1, VAR_2, VAR_3,
                         VAR_4, VAR_5);

  *VAR_0 = (svn_client_commit_info_t *) VAR_6;
  return FUNC_1(VAR_7);
}
