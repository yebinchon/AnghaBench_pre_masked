
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_fifo_qopt {int limit; } ;
struct sk_buff {int len; } ;
struct fifo_sched_data {int limit; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tc_fifo_qopt*) ;
 int VAR_0 ;
 struct fifo_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_1, struct sk_buff *VAR_2)
{
 struct fifo_sched_data *VAR_3 = FUNC_1(VAR_1);
 struct tc_fifo_qopt VAR_4 = { .limit = VAR_3->limit };

 FUNC_0(VAR_2, VAR_0, sizeof(VAR_4), &VAR_4);
 return VAR_2->len;

nla_put_failure:
 return -1;
}
