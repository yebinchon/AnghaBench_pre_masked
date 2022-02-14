
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qfq_sched {int * groups; } ;
struct qfq_class {TYPE_2__* qdisc; int S; int F; int * grp; } ;
struct TYPE_3__ {scalar_t__ qlen; } ;
struct TYPE_4__ {TYPE_1__ q; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct qfq_sched*,struct qfq_class*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct qfq_sched*,struct qfq_class*) ;
 int FUNC_4 (struct qfq_sched*,struct qfq_class*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct qfq_sched *VAR_0,
     struct qfq_class *VAR_1,
     u32 VAR_2, u32 VAR_3, int VAR_4)
{
 bool VAR_5 = 0;
 int VAR_6 = FUNC_2(VAR_2, VAR_3);

 if (&VAR_0->groups[VAR_6] != VAR_1->grp && VAR_1->qdisc->q.qlen > 0) {





  VAR_1->F = VAR_1->S;

  FUNC_3(VAR_0, VAR_1);
  VAR_5 = 1;
 }

 FUNC_4(VAR_0, VAR_1, VAR_3, VAR_2, VAR_4);

 if (VAR_5)
  FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_1->qdisc));
}
