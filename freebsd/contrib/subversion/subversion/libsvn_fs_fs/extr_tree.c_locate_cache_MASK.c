
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rev; TYPE_1__* fs; TYPE_3__* fsap_data; scalar_t__ is_txn_root; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_cache__t ;
struct TYPE_8__ {int * txn_node_cache; } ;
typedef TYPE_3__ fs_txn_root_data_t ;
struct TYPE_9__ {int * rev_node_cache; } ;
typedef TYPE_4__ fs_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {TYPE_4__* fsap_data; } ;


 char* FUNC_0 (int ,char const*,int *) ;

__attribute__((used)) static void
FUNC_1(svn_cache__t **VAR_0,
             const char **VAR_1,
             svn_fs_root_t *VAR_2,
             const char *VAR_3,
             apr_pool_t *VAR_4)
{
  if (VAR_2->is_txn_root)
    {
      fs_txn_root_data_t *VAR_5 = VAR_2->fsap_data;

      if (VAR_0)
        *VAR_0 = VAR_5->txn_node_cache;
      if (VAR_1 && VAR_3)
        *VAR_1 = VAR_3;
    }
  else
    {
      fs_fs_data_t *VAR_6 = VAR_2->fs->fsap_data;

      if (VAR_0)
        *VAR_0 = VAR_6->rev_node_cache;
      if (VAR_1 && VAR_3)
        *VAR_1 = FUNC_0(VAR_2->rev, VAR_3, VAR_4);
    }
}
