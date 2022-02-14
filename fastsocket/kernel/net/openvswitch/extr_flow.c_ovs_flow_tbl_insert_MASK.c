
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sw_flow {int key; int hash; } ;
struct flow_table {int dummy; } ;


 int FUNC_0 (struct flow_table*,struct sw_flow*) ;
 int FUNC_1 (struct sw_flow_key*) ;
 int FUNC_2 (int *,struct sw_flow_key*,int) ;
 int FUNC_3 (struct sw_flow_key*,int ,int) ;

void FUNC_4(struct flow_table *VAR_0, struct sw_flow *VAR_1,
    struct sw_flow_key *VAR_2, int VAR_3)
{
 VAR_1->hash = FUNC_3(VAR_2, FUNC_1(VAR_2), VAR_3);
 FUNC_2(&VAR_1->key, VAR_2, sizeof(VAR_1->key));
 FUNC_0(VAR_0, VAR_1);
}
