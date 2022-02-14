
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct red_sched_data {int parms; struct Qdisc* qdisc; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; struct sk_buff* (* dequeue ) (struct Qdisc*) ;} ;


 struct red_sched_data* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sk_buff* FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff * FUNC_4(struct Qdisc* VAR_0)
{
 struct sk_buff *VAR_1;
 struct red_sched_data *VAR_2 = FUNC_0(VAR_0);
 struct Qdisc *VAR_3 = VAR_2->qdisc;

 VAR_1 = VAR_3->dequeue(VAR_3);
 if (VAR_1)
  VAR_0->q.qlen--;
 else if (!FUNC_1(&VAR_2->parms))
  FUNC_2(&VAR_2->parms);

 return VAR_1;
}
