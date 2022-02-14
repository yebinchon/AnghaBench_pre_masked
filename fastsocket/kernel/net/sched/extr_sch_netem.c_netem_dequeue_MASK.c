
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tv64; } ;
struct sk_buff {TYPE_2__ tstamp; int tc_verd; } ;
struct netem_skb_cb {scalar_t__ time_to_send; } ;
struct netem_sched_data {int watchdog; TYPE_4__* qdisc; } ;
struct TYPE_8__ {int qlen; } ;
struct Qdisc {int flags; TYPE_3__ q; } ;
typedef scalar_t__ psched_time_t ;
struct TYPE_9__ {TYPE_1__* ops; } ;
struct TYPE_6__ {struct sk_buff* (* peek ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct netem_skb_cb* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,struct sk_buff*) ;
 scalar_t__ FUNC_3 () ;
 struct sk_buff* FUNC_4 (TYPE_4__*) ;
 struct netem_sched_data* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (int *,scalar_t__) ;
 struct sk_buff* FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct Qdisc *VAR_2)
{
 struct netem_sched_data *VAR_3 = FUNC_5(VAR_2);
 struct sk_buff *VAR_4;

 if (VAR_2->flags & VAR_1)
  return ((void*)0);

 VAR_4 = VAR_3->qdisc->ops->peek(VAR_3->qdisc);
 if (VAR_4) {
  const struct netem_skb_cb *VAR_5 = FUNC_1(VAR_4);
  psched_time_t VAR_6 = FUNC_3();


  if (VAR_5->time_to_send <= VAR_6) {
   VAR_4 = FUNC_4(VAR_3->qdisc);
   if (FUNC_8(!VAR_4))
    return ((void*)0);
   FUNC_2("netem_dequeue: return skb=%p\n", VAR_4);
   VAR_2->q.qlen--;
   return VAR_4;
  }

  FUNC_6(&VAR_3->watchdog, VAR_5->time_to_send);
 }

 return ((void*)0);
}
