
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_fifo_qopt {int limit; } ;
struct nlattr {int dummy; } ;
struct fifo_sched_data {int oldest; int limit; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int tx_queue_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct tc_fifo_qopt* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 TYPE_1__* FUNC_3 (struct Qdisc*) ;
 struct fifo_sched_data* FUNC_4 (struct Qdisc*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_3, struct nlattr *VAR_4)
{
 struct fifo_sched_data *VAR_5 = FUNC_4(VAR_3);

 if (VAR_4) {
  struct tc_fifo_qopt *VAR_6 = FUNC_1(VAR_4);
  if (FUNC_2(VAR_4) < sizeof(*VAR_6))
   return -VAR_0;

  VAR_5->limit = VAR_6->limit;
 } else
  VAR_5->limit = FUNC_0(VAR_2, FUNC_3(VAR_3)->tx_queue_len, 1);

 VAR_5->oldest = VAR_1;
 return 0;
}
