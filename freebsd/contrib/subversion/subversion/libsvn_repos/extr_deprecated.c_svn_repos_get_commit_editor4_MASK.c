
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_t ;
typedef int svn_repos_authz_callback_t ;
typedef int svn_fs_txn_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_commit_callback2_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int const**,void**,int *,int *,char const*,char const*,int *,int ,void*,int ,void*,int *) ;
 int FUNC_3 (char const*,int *) ;

svn_error_t *
FUNC_4(const svn_delta_editor_t **VAR_2,
                             void **VAR_3,
                             svn_repos_t *VAR_4,
                             svn_fs_txn_t *VAR_5,
                             const char *VAR_6,
                             const char *VAR_7,
                             const char *VAR_8,
                             const char *VAR_9,
                             svn_commit_callback2_t VAR_10,
                             void *VAR_11,
                             svn_repos_authz_callback_t VAR_12,
                             void *VAR_13,
                             apr_pool_t *VAR_14)
{
  apr_hash_t *VAR_15 = FUNC_0(VAR_14);
  if (VAR_8)
    FUNC_1(VAR_15, VAR_0,
                  FUNC_3(VAR_8, VAR_14));
  if (VAR_9)
    FUNC_1(VAR_15, VAR_1,
                  FUNC_3(VAR_9, VAR_14));
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
                                      VAR_6, VAR_7, VAR_15,
                                      VAR_10, VAR_11,
                                      VAR_12, VAR_13, VAR_14);
}
