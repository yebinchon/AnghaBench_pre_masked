
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct fifo_sched_data {scalar_t__ limit; } ;
struct TYPE_2__ {scalar_t__ backlog; } ;
struct Qdisc {TYPE_1__ qstats; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct Qdisc*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct fifo_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct sk_buff*,struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0, struct Qdisc* VAR_1)
{
 struct fifo_sched_data *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_0(VAR_1->qstats.backlog + FUNC_2(VAR_0) <= VAR_2->limit))
  return FUNC_1(VAR_0, VAR_1);

 return FUNC_4(VAR_0, VAR_1);
}
