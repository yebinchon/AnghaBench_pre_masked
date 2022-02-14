
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct prio_sched_data {int bands; struct Qdisc** queues; } ;
struct TYPE_3__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; TYPE_2__* ops; } ;
struct TYPE_4__ {unsigned int (* drop ) (struct Qdisc*) ;} ;


 struct prio_sched_data* FUNC_0 (struct Qdisc*) ;
 unsigned int FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static unsigned int FUNC_2(struct Qdisc* VAR_0)
{
 struct prio_sched_data *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;
 unsigned int VAR_3;
 struct Qdisc *VAR_4;

 for (VAR_2 = VAR_1->bands-1; VAR_2 >= 0; VAR_2--) {
  VAR_4 = VAR_1->queues[VAR_2];
  if (VAR_4->ops->drop && (VAR_3 = VAR_4->ops->drop(VAR_4)) != 0) {
   VAR_0->q.qlen--;
   return VAR_3;
  }
 }
 return 0;
}
