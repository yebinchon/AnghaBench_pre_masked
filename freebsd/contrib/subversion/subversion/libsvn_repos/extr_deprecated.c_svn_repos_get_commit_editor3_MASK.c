
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_t ;
typedef int svn_repos_authz_callback_t ;
typedef int svn_fs_txn_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_commit_callback_t ;
typedef int svn_commit_callback2_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,void**,int ,void*,int *) ;
 int * FUNC_1 (int const**,void**,int *,int *,char const*,char const*,char const*,char const*,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_2(const svn_delta_editor_t **VAR_0,
                             void **VAR_1,
                             svn_repos_t *VAR_2,
                             svn_fs_txn_t *VAR_3,
                             const char *VAR_4,
                             const char *VAR_5,
                             const char *VAR_6,
                             const char *VAR_7,
                             svn_commit_callback_t VAR_8,
                             void *VAR_9,
                             svn_repos_authz_callback_t VAR_10,
                             void *VAR_11,
                             apr_pool_t *VAR_12)
{
  svn_commit_callback2_t VAR_13;
  void *VAR_14;

  FUNC_0(&VAR_13, &VAR_14,
                                  VAR_8, VAR_9,
                                  VAR_12);

  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
                                      VAR_4, VAR_5, VAR_6,
                                      VAR_7, VAR_13,
                                      VAR_14, VAR_10,
                                      VAR_11, VAR_12);
}
