
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_commit_info_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct capture_baton_t {int * pool; int ** info; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char const*,int ,int ,int ,int const*,int ,struct capture_baton_t*,int *,int *) ;

svn_error_t *
FUNC_1(svn_commit_info_t **VAR_1,
                   const char *VAR_2,
                   const char *VAR_3,
                   svn_depth_t VAR_4,
                   svn_boolean_t VAR_5,
                   svn_boolean_t VAR_6,
                   const apr_hash_t *VAR_7,
                   svn_client_ctx_t *VAR_8,
                   apr_pool_t *VAR_9)
{
  struct capture_baton_t VAR_10;

  VAR_10.info = VAR_1;
  VAR_10.pool = VAR_9;

  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
                            VAR_6, VAR_7,
                            VAR_0, &VAR_10, VAR_8, VAR_9);
}
