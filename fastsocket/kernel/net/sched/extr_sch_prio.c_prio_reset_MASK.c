
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prio_sched_data {int bands; int * queues; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 struct prio_sched_data* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct Qdisc* VAR_0)
{
 int VAR_1;
 struct prio_sched_data *VAR_2 = FUNC_0(VAR_0);

 for (VAR_1=0; VAR_1<VAR_2->bands; VAR_1++)
  FUNC_1(VAR_2->queues[VAR_1]);
 VAR_0->q.qlen = 0;
}
