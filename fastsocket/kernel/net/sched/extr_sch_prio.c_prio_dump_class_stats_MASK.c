
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct prio_sched_data {struct Qdisc** queues; } ;
struct gnet_dump {int dummy; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_3__ {int qlen; } ;
struct Qdisc {TYPE_2__ qstats; int bstats; TYPE_1__ q; } ;


 scalar_t__ FUNC_0 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,TYPE_2__*) ;
 struct prio_sched_data* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_0, unsigned long VAR_1,
     struct gnet_dump *VAR_2)
{
 struct prio_sched_data *VAR_3 = FUNC_2(VAR_0);
 struct Qdisc *VAR_4;

 VAR_4 = VAR_3->queues[VAR_1 - 1];
 VAR_4->qstats.qlen = VAR_4->q.qlen;
 if (FUNC_0(VAR_2, &VAR_4->bstats) < 0 ||
     FUNC_1(VAR_2, &VAR_4->qstats) < 0)
  return -1;

 return 0;
}
