
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int trail_t ;
struct TYPE_4__ {int txn; int fs; int is_txn_root; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
struct TYPE_5__ {int root_dir; } ;
typedef TYPE_2__ base_root_data_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (int **,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(dag_node_t **VAR_1,
          svn_fs_root_t *VAR_2,
          trail_t *VAR_3,
          apr_pool_t *VAR_4)
{
  base_root_data_t *VAR_5 = VAR_2->fsap_data;

  if (! VAR_2->is_txn_root)
    {


      *VAR_1 = FUNC_0(VAR_5->root_dir, VAR_4);
      return VAR_0;
    }
  else
    {

      return FUNC_1(VAR_1, VAR_2->fs, VAR_2->txn,
                                       VAR_3, VAR_4);
    }
}
