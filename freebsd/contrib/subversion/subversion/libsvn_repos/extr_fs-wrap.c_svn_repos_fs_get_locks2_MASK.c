
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct get_locks_baton_t {int * locks; int head_root; void* authz_read_baton; int authz_read_func; int fs; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,char const*,scalar_t__,int ,struct get_locks_baton_t*,int *) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (int *,int ,int *) ;

svn_error_t *
FUNC_6(apr_hash_t **VAR_6,
                        svn_repos_t *VAR_7,
                        const char *VAR_8,
                        svn_depth_t VAR_9,
                        svn_repos_authz_func_t VAR_10,
                        void *VAR_11,
                        apr_pool_t *VAR_12)
{
  apr_hash_t *VAR_13 = FUNC_2(VAR_12);
  svn_revnum_t VAR_14;
  struct get_locks_baton_t VAR_15;

  FUNC_1((VAR_9 == VAR_2) ||
                 (VAR_9 == VAR_3) ||
                 (VAR_9 == VAR_4) ||
                 (VAR_9 == VAR_5));

  FUNC_0(FUNC_5(&VAR_14, VAR_7->fs, VAR_12));


  VAR_15.fs = VAR_7->fs;
  VAR_15.locks = VAR_13;
  VAR_15.authz_read_func = VAR_10;
  VAR_15.authz_read_baton = VAR_11;
  FUNC_0(FUNC_4(&(VAR_15.head_root), VAR_7->fs,
                               VAR_14, VAR_12));


  FUNC_0(FUNC_3(VAR_7->fs, VAR_8, VAR_9,
                            VAR_1, &VAR_15, VAR_12));

  *VAR_6 = VAR_15.locks;
  return VAR_0;
}
