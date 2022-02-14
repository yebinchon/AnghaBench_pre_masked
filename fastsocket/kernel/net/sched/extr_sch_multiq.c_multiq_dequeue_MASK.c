
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct multiq_sched_data {int bands; int curband; struct Qdisc** queues; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; struct sk_buff* (* dequeue ) (struct Qdisc*) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct Qdisc*) ;
 struct multiq_sched_data* FUNC_2 (struct Qdisc*) ;
 struct sk_buff* FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct Qdisc *VAR_0)
{
 struct multiq_sched_data *VAR_1 = FUNC_2(VAR_0);
 struct Qdisc *VAR_2;
 struct sk_buff *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->bands; VAR_4++) {

  VAR_1->curband++;
  if (VAR_1->curband >= VAR_1->bands)
   VAR_1->curband = 0;




  if (!FUNC_0(FUNC_1(VAR_0), VAR_1->curband)) {
   VAR_2 = VAR_1->queues[VAR_1->curband];
   VAR_3 = VAR_2->dequeue(VAR_2);
   if (VAR_3) {
    VAR_0->q.qlen--;
    return VAR_3;
   }
  }
 }
 return ((void*)0);

}
