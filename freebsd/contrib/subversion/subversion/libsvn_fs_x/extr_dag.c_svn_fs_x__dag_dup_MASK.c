
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * node_pool; int node_revision; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__ const*,int) ;
 int FUNC_1 (int ,int *) ;

dag_node_t *
FUNC_2(const dag_node_t *VAR_0,
                  apr_pool_t *VAR_1)
{

  dag_node_t *VAR_2 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_2));


  VAR_2->node_revision = FUNC_1(VAR_0->node_revision,
                                               VAR_1);
  VAR_2->node_pool = VAR_1;

  return VAR_2;
}
