
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_11__ {int pdrop; int forced_mark; int forced_drop; int prob_mark; int prob_drop; } ;
struct TYPE_13__ {int qavg; } ;
struct red_sched_data {TYPE_3__ stats; TYPE_5__ parms; struct Qdisc* qdisc; } ;
struct TYPE_12__ {int drops; int overlimits; int backlog; } ;
struct TYPE_10__ {int qlen; } ;
struct TYPE_9__ {int packets; int bytes; } ;
struct Qdisc {TYPE_4__ qstats; TYPE_2__ q; TYPE_1__ bstats; } ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*) ;
 int FUNC_4 (struct sk_buff*,struct Qdisc*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 struct red_sched_data* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (struct red_sched_data*) ;
 int FUNC_12 (struct red_sched_data*) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_2, struct Qdisc* VAR_3)
{
 struct red_sched_data *VAR_4 = FUNC_6(VAR_3);
 struct Qdisc *VAR_5 = VAR_4->qdisc;
 int VAR_6;

 VAR_4->parms.qavg = FUNC_8(&VAR_4->parms, VAR_5->qstats.backlog);

 if (FUNC_10(&VAR_4->parms))
  FUNC_9(&VAR_4->parms);

 switch (FUNC_7(&VAR_4->parms, VAR_4->parms.qavg)) {
  case 130:
   break;

  case 128:
   VAR_3->qstats.overlimits++;
   if (!FUNC_11(VAR_4) || !FUNC_0(VAR_2)) {
    VAR_4->stats.prob_drop++;
    goto congestion_drop;
   }

   VAR_4->stats.prob_mark++;
   break;

  case 129:
   VAR_3->qstats.overlimits++;
   if (FUNC_12(VAR_4) || !FUNC_11(VAR_4) ||
       !FUNC_0(VAR_2)) {
    VAR_4->stats.forced_drop++;
    goto congestion_drop;
   }

   VAR_4->stats.forced_mark++;
   break;
 }

 VAR_6 = FUNC_4(VAR_2, VAR_5);
 if (FUNC_1(VAR_6 == VAR_1)) {
  VAR_3->bstats.bytes += FUNC_5(VAR_2);
  VAR_3->bstats.packets++;
  VAR_3->q.qlen++;
 } else if (FUNC_2(VAR_6)) {
  VAR_4->stats.pdrop++;
  VAR_3->qstats.drops++;
 }
 return VAR_6;

congestion_drop:
 FUNC_3(VAR_2, VAR_3);
 return VAR_0;
}
