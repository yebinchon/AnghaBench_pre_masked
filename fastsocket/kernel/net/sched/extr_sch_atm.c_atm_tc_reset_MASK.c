
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atm_qdisc_data {struct atm_flow_data* flows; } ;
struct atm_flow_data {int q; struct atm_flow_data* next; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int FUNC_0 (char*,struct Qdisc*,struct atm_qdisc_data*) ;
 struct atm_qdisc_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_0)
{
 struct atm_qdisc_data *VAR_1 = FUNC_1(VAR_0);
 struct atm_flow_data *VAR_2;

 FUNC_0("atm_tc_reset(sch %p,[qdisc %p])\n", VAR_0, VAR_1);
 for (VAR_2 = VAR_1->flows; VAR_2; VAR_2 = VAR_2->next)
  FUNC_2(VAR_2->q);
 VAR_0->q.qlen = 0;
}
