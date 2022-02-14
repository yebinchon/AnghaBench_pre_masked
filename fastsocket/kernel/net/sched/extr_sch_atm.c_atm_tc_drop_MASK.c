
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atm_qdisc_data {struct atm_flow_data* flows; } ;
struct atm_flow_data {TYPE_2__* q; struct atm_flow_data* next; } ;
struct Qdisc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {unsigned int (* drop ) (TYPE_2__*) ;} ;


 int FUNC_0 (char*,struct Qdisc*,struct atm_qdisc_data*) ;
 struct atm_qdisc_data* FUNC_1 (struct Qdisc*) ;
 unsigned int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static unsigned int FUNC_3(struct Qdisc *VAR_0)
{
 struct atm_qdisc_data *VAR_1 = FUNC_1(VAR_0);
 struct atm_flow_data *VAR_2;
 unsigned int VAR_3;

 FUNC_0("atm_tc_drop(sch %p,[qdisc %p])\n", VAR_0, VAR_1);
 for (VAR_2 = VAR_1->flows; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->q->ops->drop && (VAR_3 = VAR_2->q->ops->drop(VAR_2->q)))
   return VAR_3;
 return 0;
}
