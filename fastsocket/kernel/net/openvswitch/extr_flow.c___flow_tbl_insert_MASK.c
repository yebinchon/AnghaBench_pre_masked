
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow {int * hash_node; int hash; } ;
struct hlist_head {int dummy; } ;
struct flow_table {size_t node_ver; int count; } ;


 struct hlist_head* FUNC_0 (struct flow_table*,int ) ;
 int FUNC_1 (int *,struct hlist_head*) ;

__attribute__((used)) static void FUNC_2(struct flow_table *VAR_0, struct sw_flow *VAR_1)
{
 struct hlist_head *VAR_2;
 VAR_2 = FUNC_0(VAR_0, VAR_1->hash);
 FUNC_1(&VAR_1->hash_node[VAR_0->node_ver], VAR_2);
 VAR_0->count++;
}
