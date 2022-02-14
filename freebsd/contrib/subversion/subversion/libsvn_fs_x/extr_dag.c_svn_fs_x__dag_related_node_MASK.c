
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_6__ {TYPE_1__* node_revision; } ;
typedef TYPE_2__ dag_node_t ;
struct TYPE_5__ {int node_id; } ;


 int FUNC_0 (int *,int *) ;

svn_boolean_t
FUNC_1(dag_node_t *VAR_0,
                           dag_node_t *VAR_1)
{
  return FUNC_0(&VAR_0->node_revision->node_id,
                         &VAR_1->node_revision->node_id);
}
