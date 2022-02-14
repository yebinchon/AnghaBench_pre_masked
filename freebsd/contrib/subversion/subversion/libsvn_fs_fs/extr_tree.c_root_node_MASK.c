
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fsap_data; int fs; scalar_t__ is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int **,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(dag_node_t **VAR_1,
          svn_fs_root_t *VAR_2,
          apr_pool_t *VAR_3)
{
  if (VAR_2->is_txn_root)
    {

      return FUNC_2(VAR_1, VAR_2->fs, FUNC_0(VAR_2),
                                     VAR_3);
    }
  else
    {


      dag_node_t *VAR_4 = VAR_2->fsap_data;
      *VAR_1 = FUNC_1(VAR_4, VAR_3);
      return VAR_0;
    }
}
