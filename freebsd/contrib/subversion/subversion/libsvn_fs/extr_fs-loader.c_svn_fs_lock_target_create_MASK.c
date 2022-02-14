
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {char const* token; int current_rev; } ;
typedef TYPE_1__ svn_fs_lock_target_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

svn_fs_lock_target_t *
FUNC_1(const char *VAR_0,
                          svn_revnum_t VAR_1,
                          apr_pool_t *VAR_2)
{
  svn_fs_lock_target_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));

  VAR_3->token = VAR_0;
  VAR_3->current_rev = VAR_1;

  return VAR_3;
}
