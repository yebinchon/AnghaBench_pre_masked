
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {int dummy; } ;
struct TYPE_2__ {struct tcf_proto* filter_list; } ;
struct atm_qdisc_data {TYPE_1__ link; } ;
struct atm_flow_data {struct tcf_proto* filter_list; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (char*,struct Qdisc*,struct atm_qdisc_data*,struct atm_flow_data*) ;
 struct atm_qdisc_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_proto **FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct atm_qdisc_data *VAR_2 = FUNC_1(VAR_0);
 struct atm_flow_data *VAR_3 = (struct atm_flow_data *)VAR_1;

 FUNC_0("atm_tc_find_tcf(sch %p,[qdisc %p],flow %p)\n", VAR_0, VAR_2, VAR_3);
 return VAR_3 ? &VAR_3->filter_list : &VAR_2->link.filter_list;
}
