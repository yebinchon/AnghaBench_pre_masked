
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int node_revision_t ;
struct TYPE_3__ {int * node_revision; int node_pool; int id; int fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,int ,int ,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(node_revision_t **VAR_1,
                  dag_node_t *VAR_2)
{

  if (! VAR_2->node_revision)
    {
      node_revision_t *VAR_3;
      apr_pool_t *VAR_4 = FUNC_2(VAR_2->node_pool);

      FUNC_0(FUNC_1(&VAR_3, VAR_2->fs,
                                           VAR_2->id, VAR_2->node_pool,
                                           VAR_4));
      VAR_2->node_revision = VAR_3;
      FUNC_3(VAR_4);
    }


  *VAR_1 = VAR_2->node_revision;
  return VAR_0;
}
