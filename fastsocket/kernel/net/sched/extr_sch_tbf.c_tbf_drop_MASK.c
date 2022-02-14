
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tbf_sched_data {TYPE_4__* qdisc; } ;
struct TYPE_5__ {int drops; } ;
struct TYPE_7__ {int qlen; } ;
struct Qdisc {TYPE_1__ qstats; TYPE_3__ q; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_6__ {unsigned int (* drop ) (TYPE_4__*) ;} ;


 struct tbf_sched_data* FUNC_0 (struct Qdisc*) ;
 unsigned int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static unsigned int FUNC_2(struct Qdisc* VAR_0)
{
 struct tbf_sched_data *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2 = 0;

 if (VAR_1->qdisc->ops->drop && (VAR_2 = VAR_1->qdisc->ops->drop(VAR_1->qdisc)) != 0) {
  VAR_0->q.qlen--;
  VAR_0->qstats.drops++;
 }
 return VAR_2;
}
