
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * node_pool; TYPE_5__* node_revision; int created_path; int kind; void* id; int fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int is_fresh_txn_root; void* id; } ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 TYPE_5__* FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_1__ const*) ;
 void* FUNC_4 (void*,int *) ;

dag_node_t *
FUNC_5(const dag_node_t *VAR_0,
                   apr_pool_t *VAR_1)
{

  dag_node_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  VAR_2->fs = VAR_0->fs;
  VAR_2->id = FUNC_4(VAR_0->id, VAR_1);
  VAR_2->kind = VAR_0->kind;
  VAR_2->created_path = FUNC_1(VAR_1, VAR_0->created_path);


  if (VAR_0->node_revision && !FUNC_3(VAR_0))
    {
      VAR_2->node_revision = FUNC_2(VAR_0->node_revision, VAR_1);
      VAR_2->node_revision->id =
          FUNC_4(VAR_0->node_revision->id, VAR_1);
      VAR_2->node_revision->is_fresh_txn_root =
          VAR_0->node_revision->is_fresh_txn_root;
    }
  VAR_2->node_pool = VAR_1;

  return VAR_2;
}
