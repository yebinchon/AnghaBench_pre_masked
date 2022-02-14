
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tc_fifo_qopt {int limit; } ;
struct nlattr {int dummy; } ;
struct fifo_sched_data {int limit; } ;
struct Qdisc {int * ops; } ;
struct TYPE_3__ {scalar_t__ tx_queue_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tc_fifo_qopt* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct Qdisc*) ;
 struct fifo_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_2, struct nlattr *VAR_3)
{
 struct fifo_sched_data *VAR_4 = FUNC_4(VAR_2);

 if (VAR_3 == ((void*)0)) {
  u32 VAR_5 = FUNC_3(VAR_2)->tx_queue_len ? : 1;

  if (VAR_2->ops == &VAR_1)
   VAR_5 *= FUNC_2(FUNC_3(VAR_2));

  VAR_4->limit = VAR_5;
 } else {
  struct tc_fifo_qopt *VAR_6 = FUNC_0(VAR_3);

  if (FUNC_1(VAR_3) < sizeof(*VAR_6))
   return -VAR_0;

  VAR_4->limit = VAR_6->limit;
 }

 return 0;
}
