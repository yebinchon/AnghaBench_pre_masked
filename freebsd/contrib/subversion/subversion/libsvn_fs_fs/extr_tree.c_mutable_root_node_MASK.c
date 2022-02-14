
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rev; int fs; scalar_t__ is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int **,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(dag_node_t **VAR_0,
                  svn_fs_root_t *VAR_1,
                  const char *VAR_2,
                  apr_pool_t *VAR_3)
{
  if (VAR_1->is_txn_root)
    {

      return FUNC_2(VAR_0, VAR_1->fs, FUNC_1(VAR_1),
                                       VAR_3);
    }
  else

    return FUNC_0(VAR_1->fs, VAR_1->rev, VAR_2);
}
