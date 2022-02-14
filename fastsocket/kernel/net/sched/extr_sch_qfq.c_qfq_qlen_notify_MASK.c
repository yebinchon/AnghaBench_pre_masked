
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qfq_sched {int dummy; } ;
struct qfq_class {TYPE_2__* qdisc; } ;
struct Qdisc {int dummy; } ;
struct TYPE_3__ {scalar_t__ qlen; } ;
struct TYPE_4__ {TYPE_1__ q; } ;


 struct qfq_sched* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct qfq_sched*,struct qfq_class*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct qfq_sched *VAR_2 = FUNC_0(VAR_0);
 struct qfq_class *VAR_3 = (struct qfq_class *)VAR_1;

 if (VAR_3->qdisc->q.qlen == 0)
  FUNC_1(VAR_2, VAR_3);
}
