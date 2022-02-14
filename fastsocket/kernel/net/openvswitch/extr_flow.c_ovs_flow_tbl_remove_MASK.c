
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow {int * hash_node; } ;
struct flow_table {scalar_t__ count; size_t node_ver; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct flow_table *VAR_0, struct sw_flow *VAR_1)
{
 FUNC_0(VAR_0->count == 0);
 FUNC_1(&VAR_1->hash_node[VAR_0->node_ver]);
 VAR_0->count--;
}
