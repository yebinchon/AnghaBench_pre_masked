
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_qdisc_data {struct atm_flow_data* flows; } ;
struct atm_flow_data {struct atm_flow_data* next; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(struct atm_qdisc_data *VAR_0, struct atm_flow_data *VAR_1)
{
 struct atm_flow_data *VAR_2;

 FUNC_0("find_flow(qdisc %p,flow %p)\n", VAR_0, VAR_1);
 for (VAR_2 = VAR_0->flows; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2 == VAR_1)
   return 1;
 FUNC_0("find_flow: not found\n");
 return 0;
}
