
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct ls_baton {int * pool; int * locks; int * dirents; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int VAR_1 ;
 int * FUNC_1 (char const*,int const*,int const*,int ,int ,int ,int ,struct ls_baton*,int *,int *) ;

svn_error_t *
FUNC_2(apr_hash_t **VAR_2,
               apr_hash_t **VAR_3,
               const char *VAR_4,
               const svn_opt_revision_t *VAR_5,
               const svn_opt_revision_t *VAR_6,
               svn_boolean_t VAR_7,
               svn_client_ctx_t *VAR_8,
               apr_pool_t *VAR_9)
{
  struct ls_baton VAR_10;

  *VAR_2 = VAR_10.dirents = FUNC_0(VAR_9);
  if (VAR_3)
    *VAR_3 = VAR_10.locks = FUNC_0(VAR_9);
  VAR_10.pool = VAR_9;

  return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
                         VAR_0, VAR_3 != ((void*)0),
                         VAR_1, &VAR_10, VAR_8, VAR_9);
}
