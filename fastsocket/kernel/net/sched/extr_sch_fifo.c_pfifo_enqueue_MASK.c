
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct fifo_sched_data {scalar_t__ limit; } ;
struct Qdisc {int q; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct Qdisc*) ;
 struct fifo_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0, struct Qdisc* VAR_1)
{
 struct fifo_sched_data *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_0(FUNC_4(&VAR_1->q) < VAR_2->limit))
  return FUNC_1(VAR_0, VAR_1);

 return FUNC_3(VAR_0, VAR_1);
}
