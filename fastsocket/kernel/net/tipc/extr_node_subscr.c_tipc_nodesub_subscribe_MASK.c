
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_node_subscr {TYPE_1__* node; int nodesub_list; void* usr_handle; int handle_node_down; } ;
typedef int net_ev_handler ;
struct TYPE_4__ {int nsub; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,scalar_t__) ;

void FUNC_5(struct tipc_node_subscr *VAR_1, u32 VAR_2,
         void *VAR_3, net_ev_handler VAR_4)
{
 if (VAR_2 == VAR_0) {
  VAR_1->node = ((void*)0);
  return;
 }

 VAR_1->node = FUNC_1(VAR_2);
 if (!VAR_1->node) {
  FUNC_4("Node subscription rejected, unknown node 0x%x\n", VAR_2);
  return;
 }
 VAR_1->handle_node_down = VAR_4;
 VAR_1->usr_handle = VAR_3;

 FUNC_2(VAR_1->node);
 FUNC_0(&VAR_1->nodesub_list, &VAR_1->node->nsub);
 FUNC_3(VAR_1->node);
}
