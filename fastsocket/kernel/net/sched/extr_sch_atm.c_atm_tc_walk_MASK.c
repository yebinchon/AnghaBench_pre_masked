
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdisc_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct Qdisc*,unsigned long,struct qdisc_walker*) ;} ;
struct atm_qdisc_data {struct atm_flow_data* flows; } ;
struct atm_flow_data {struct atm_flow_data* next; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (char*,struct Qdisc*,struct atm_qdisc_data*,struct qdisc_walker*) ;
 struct atm_qdisc_data* FUNC_1 (struct Qdisc*) ;
 scalar_t__ FUNC_2 (struct Qdisc*,unsigned long,struct qdisc_walker*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_0, struct qdisc_walker *VAR_1)
{
 struct atm_qdisc_data *VAR_2 = FUNC_1(VAR_0);
 struct atm_flow_data *VAR_3;

 FUNC_0("atm_tc_walk(sch %p,[qdisc %p],walker %p)\n", VAR_0, VAR_2, VAR_1);
 if (VAR_1->stop)
  return;
 for (VAR_3 = VAR_2->flows; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_1->count >= VAR_1->skip)
   if (VAR_1->fn(VAR_0, (unsigned long)VAR_3, VAR_1) < 0) {
    VAR_1->stop = 1;
    break;
   }
  VAR_1->count++;
 }
}
