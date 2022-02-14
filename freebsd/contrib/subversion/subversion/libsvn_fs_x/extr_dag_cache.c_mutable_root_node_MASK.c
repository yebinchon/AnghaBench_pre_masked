
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rev; int fs; int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,char const*) ;
 int * VAR_0 ;
 int FUNC_2 (int **,TYPE_1__*,int ,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(dag_node_t **VAR_1,
                  svn_fs_root_t *VAR_2,
                  const char *VAR_3,
                  apr_pool_t *VAR_4,
                  apr_pool_t *VAR_5)
{

  if (!VAR_2->is_txn_root)
    return FUNC_1(VAR_2->fs, VAR_2->rev, VAR_3);



  FUNC_0(FUNC_2(VAR_1, VAR_2, FUNC_4(VAR_2),
                        VAR_5));
  *VAR_1 = FUNC_3(*VAR_1, VAR_4);

  return VAR_0;
}
