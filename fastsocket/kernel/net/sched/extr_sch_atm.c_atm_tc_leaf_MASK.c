
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_flow_data {struct Qdisc* q; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (char*,struct Qdisc*,struct atm_flow_data*) ;

__attribute__((used)) static struct Qdisc *FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct atm_flow_data *VAR_2 = (struct atm_flow_data *)VAR_1;

 FUNC_0("atm_tc_leaf(sch %p,flow %p)\n", VAR_0, VAR_2);
 return VAR_2 ? VAR_2->q : ((void*)0);
}
