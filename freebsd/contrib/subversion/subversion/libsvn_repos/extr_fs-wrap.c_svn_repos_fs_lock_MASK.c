
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_lock_t ;
typedef int svn_fs_lock_target_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct lock_baton_t {int * fs_err; scalar_t__ lock; int member_0; } ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int ,int *) ;
 int FUNC_4 (int *,char const*,int *) ;
 int * FUNC_5 (int *,int *,char const*,int ,int ,int ,int ,struct lock_baton_t*,int *,int *) ;

svn_error_t *
FUNC_6(svn_lock_t **VAR_1,
                  svn_repos_t *VAR_2,
                  const char *VAR_3,
                  const char *VAR_4,
                  const char *VAR_5,
                  svn_boolean_t VAR_6,
                  apr_time_t VAR_7,
                  svn_revnum_t VAR_8,
                  svn_boolean_t VAR_9,
                  apr_pool_t *VAR_10)
{
  apr_hash_t *VAR_11 = FUNC_0(VAR_10);
  svn_fs_lock_target_t *VAR_12 = FUNC_3(VAR_4, VAR_8,
                                                           VAR_10);
  svn_error_t *VAR_13;
  struct lock_baton_t VAR_14 = {0};

  FUNC_4(VAR_11, VAR_3, VAR_12);

  VAR_13 = FUNC_5(VAR_2, VAR_11, VAR_5, VAR_6,
                               VAR_7, VAR_9, VAR_0, &VAR_14,
                               VAR_10, VAR_10);

  if (VAR_14.lock)
    *VAR_1 = (svn_lock_t*)VAR_14.lock;

  if (VAR_13 && VAR_14.fs_err)
    FUNC_1(VAR_13, VAR_14.fs_err);
  else if (!VAR_13)
    VAR_13 = VAR_14.fs_err;

  return FUNC_2(VAR_13);
}
