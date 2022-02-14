
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int other; } ;
struct red_sched_data {int parms; TYPE_1__ stats; struct Qdisc* qdisc; } ;
struct TYPE_7__ {int qlen; } ;
struct TYPE_6__ {int drops; } ;
struct Qdisc {TYPE_3__ q; TYPE_2__ qstats; TYPE_4__* ops; } ;
struct TYPE_8__ {unsigned int (* drop ) (struct Qdisc*) ;} ;


 struct red_sched_data* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static unsigned int FUNC_4(struct Qdisc* VAR_0)
{
 struct red_sched_data *VAR_1 = FUNC_0(VAR_0);
 struct Qdisc *VAR_2 = VAR_1->qdisc;
 unsigned int VAR_3;

 if (VAR_2->ops->drop && (VAR_3 = VAR_2->ops->drop(VAR_2)) > 0) {
  VAR_1->stats.other++;
  VAR_0->qstats.drops++;
  VAR_0->q.qlen--;
  return VAR_3;
 }

 if (!FUNC_1(&VAR_1->parms))
  FUNC_2(&VAR_1->parms);

 return 0;
}
