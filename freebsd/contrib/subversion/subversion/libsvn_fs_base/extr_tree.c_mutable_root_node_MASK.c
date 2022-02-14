
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trail_t ;
struct TYPE_3__ {int rev; int fs; int txn; scalar_t__ is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,int ,char const*) ;
 int * FUNC_1 (int **,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(dag_node_t **VAR_0,
                  svn_fs_root_t *VAR_1,
                  const char *VAR_2,
                  trail_t *VAR_3,
                  apr_pool_t *VAR_4)
{
  if (VAR_1->is_txn_root)
    return FUNC_1(VAR_0, VAR_1->fs, VAR_1->txn,
                                       VAR_3, VAR_4);
  else

    return FUNC_0(VAR_1->fs, VAR_1->rev, VAR_2);
}
