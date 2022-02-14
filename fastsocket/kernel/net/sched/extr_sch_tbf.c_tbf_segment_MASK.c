
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tbf_sched_data {scalar_t__ max_size; int qdisc; } ;
struct sk_buff {scalar_t__ len; struct sk_buff* next; } ;
struct TYPE_5__ {int qlen; } ;
struct TYPE_4__ {int drops; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__ qstats; } ;
struct TYPE_6__ {scalar_t__ pkt_len; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 struct tbf_sched_data* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct sk_buff*,struct Qdisc*) ;
 TYPE_3__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct Qdisc*,int) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_3, struct Qdisc *VAR_4)
{
 struct tbf_sched_data *VAR_5 = FUNC_6(VAR_4);
 struct sk_buff *VAR_6, *VAR_7;
 int VAR_8 = FUNC_4(VAR_3);
 int VAR_9, VAR_10;

 VAR_6 = FUNC_10(VAR_3, VAR_8 & ~VAR_0);

 if (FUNC_0(VAR_6))
  return FUNC_7(VAR_3, VAR_4);

 VAR_10 = 0;
 while (VAR_6) {
  VAR_7 = VAR_6->next;
  VAR_6->next = ((void*)0);
  if (FUNC_2(VAR_6->len <= VAR_5->max_size)) {
   FUNC_8(VAR_6)->pkt_len = VAR_6->len;
   VAR_9 = FUNC_5(VAR_6, VAR_5->qdisc);
  } else {
   VAR_9 = FUNC_7(VAR_3, VAR_4);
  }
  if (VAR_9 != VAR_2) {
   if (FUNC_3(VAR_9))
    VAR_4->qstats.drops++;
  } else {
   VAR_10++;
  }
  VAR_6 = VAR_7;
 }
 VAR_4->q.qlen += VAR_10;
 if (VAR_10 > 1)
  FUNC_9(VAR_4, 1 - VAR_10);
 FUNC_1(VAR_3);
 return VAR_10 > 0 ? VAR_2 : VAR_1;
}
