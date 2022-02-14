
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node_subscr {int node; int nodesub_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct tipc_node_subscr *VAR_0)
{
 if (!VAR_0->node)
  return;

 FUNC_1(VAR_0->node);
 FUNC_0(&VAR_0->nodesub_list);
 FUNC_2(VAR_0->node);
}
