
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_qdisc_data {int dummy; } ;
struct atm_flow_data {struct Qdisc* q; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct atm_qdisc_data*,struct atm_flow_data*) ;
 struct Qdisc VAR_1 ;
 int FUNC_1 (char*,struct Qdisc*,struct atm_qdisc_data*,struct atm_flow_data*,struct Qdisc*,struct Qdisc**) ;
 struct atm_qdisc_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_2, unsigned long VAR_3,
   struct Qdisc *VAR_4, struct Qdisc **VAR_5)
{
 struct atm_qdisc_data *VAR_6 = FUNC_2(VAR_2);
 struct atm_flow_data *VAR_7 = (struct atm_flow_data *)VAR_3;

 FUNC_1("atm_tc_graft(sch %p,[qdisc %p],flow %p,new %p,old %p)\n",
  VAR_2, VAR_6, VAR_7, VAR_4, VAR_5);
 if (!FUNC_0(VAR_6, VAR_7))
  return -VAR_0;
 if (!VAR_4)
  VAR_4 = &VAR_1;
 *VAR_5 = VAR_7->q;
 VAR_7->q = VAR_4;
 if (*VAR_5)
  FUNC_3(*VAR_5);
 return 0;
}
