
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct prio_sched_data {int bands; struct Qdisc** queues; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; struct sk_buff* (* dequeue ) (struct Qdisc*) ;} ;


 struct prio_sched_data* FUNC_0 (struct Qdisc*) ;
 struct sk_buff* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct Qdisc* VAR_0)
{
 struct prio_sched_data *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->bands; VAR_2++) {
  struct Qdisc *VAR_3 = VAR_1->queues[VAR_2];
  struct sk_buff *VAR_4 = VAR_3->dequeue(VAR_3);
  if (VAR_4) {
   VAR_0->q.qlen--;
   return VAR_4;
  }
 }
 return ((void*)0);

}
