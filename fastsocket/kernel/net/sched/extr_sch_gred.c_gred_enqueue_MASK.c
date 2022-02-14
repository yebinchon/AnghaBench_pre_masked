
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {size_t tc_index; } ;
struct TYPE_9__ {int pdrop; int forced_mark; int forced_drop; int prob_mark; int prob_drop; } ;
struct TYPE_10__ {unsigned long qavg; } ;
struct gred_sched_data {scalar_t__ prio; scalar_t__ backlog; scalar_t__ limit; TYPE_2__ stats; TYPE_3__ parms; int bytesin; int packetsin; } ;
struct gred_sched {size_t DPs; size_t def; struct gred_sched_data** tab; } ;
struct TYPE_8__ {int overlimits; } ;
struct Qdisc {TYPE_1__ qstats; int q; } ;
struct TYPE_11__ {scalar_t__ tx_queue_len; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;



 int FUNC_1 (struct gred_sched*,struct gred_sched_data*,struct Qdisc*) ;
 int FUNC_2 (struct gred_sched*,struct gred_sched_data*) ;
 scalar_t__ FUNC_3 (struct gred_sched*) ;
 int FUNC_4 (struct gred_sched*,struct gred_sched_data*) ;
 int FUNC_5 (struct gred_sched*) ;
 int FUNC_6 (struct gred_sched*) ;
 scalar_t__ FUNC_7 (struct gred_sched*) ;
 TYPE_7__* FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (struct sk_buff*,struct Qdisc*) ;
 int FUNC_10 (struct sk_buff*,struct Qdisc*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 struct gred_sched* FUNC_12 (struct Qdisc*) ;
 int FUNC_13 (TYPE_3__*,unsigned long) ;
 unsigned long FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;
 scalar_t__ FUNC_17 (int *) ;
 size_t FUNC_18 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_2, struct Qdisc* VAR_3)
{
 struct gred_sched_data *VAR_4=((void*)0);
 struct gred_sched *VAR_5= FUNC_12(VAR_3);
 unsigned long VAR_6 = 0;
 u16 VAR_7 = FUNC_18(VAR_2);

 if (VAR_7 >= VAR_5->DPs || (VAR_4 = VAR_5->tab[VAR_7]) == ((void*)0)) {
  VAR_7 = VAR_5->def;

  if ((VAR_4 = VAR_5->tab[VAR_7]) == ((void*)0)) {




   if (FUNC_17(&VAR_3->q) < FUNC_8(VAR_3)->tx_queue_len)
    return FUNC_10(VAR_2, VAR_3);
   else
    goto drop;
  }



  VAR_2->tc_index = (VAR_2->tc_index & ~VAR_0) | VAR_7;
 }


 if (!FUNC_7(VAR_5) && FUNC_3(VAR_5)) {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_5->DPs; VAR_8++) {
   if (VAR_5->tab[VAR_8] && VAR_5->tab[VAR_8]->prio < VAR_4->prio &&
       !FUNC_16(&VAR_5->tab[VAR_8]->parms))
    VAR_6 +=VAR_5->tab[VAR_8]->parms.qavg;
  }

 }

 VAR_4->packetsin++;
 VAR_4->bytesin += FUNC_11(VAR_2);

 if (FUNC_7(VAR_5))
  FUNC_2(VAR_5, VAR_4);

 VAR_4->parms.qavg = FUNC_14(&VAR_4->parms, FUNC_1(VAR_5, VAR_4, VAR_3));

 if (FUNC_16(&VAR_4->parms))
  FUNC_15(&VAR_4->parms);

 if (FUNC_7(VAR_5))
  FUNC_4(VAR_5, VAR_4);

 switch (FUNC_13(&VAR_4->parms, VAR_4->parms.qavg + VAR_6)) {
  case 130:
   break;

  case 128:
   VAR_3->qstats.overlimits++;
   if (!FUNC_5(VAR_5) || !FUNC_0(VAR_2)) {
    VAR_4->stats.prob_drop++;
    goto congestion_drop;
   }

   VAR_4->stats.prob_mark++;
   break;

  case 129:
   VAR_3->qstats.overlimits++;
   if (FUNC_6(VAR_5) || !FUNC_5(VAR_5) ||
       !FUNC_0(VAR_2)) {
    VAR_4->stats.forced_drop++;
    goto congestion_drop;
   }
   VAR_4->stats.forced_mark++;
   break;
 }

 if (VAR_4->backlog + FUNC_11(VAR_2) <= VAR_4->limit) {
  VAR_4->backlog += FUNC_11(VAR_2);
  return FUNC_10(VAR_2, VAR_3);
 }

 VAR_4->stats.pdrop++;
drop:
 return FUNC_9(VAR_2, VAR_3);

congestion_drop:
 FUNC_9(VAR_2, VAR_3);
 return VAR_1;
}
