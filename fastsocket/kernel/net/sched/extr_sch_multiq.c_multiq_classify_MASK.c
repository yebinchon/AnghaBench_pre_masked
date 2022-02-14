
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tcf_result {int dummy; } ;
struct sk_buff {int dummy; } ;
struct multiq_sched_data {size_t bands; struct Qdisc** queues; int filter_list; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 struct multiq_sched_data* FUNC_0 (struct Qdisc*) ;
 size_t FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ,struct tcf_result*) ;

__attribute__((used)) static struct Qdisc *
FUNC_3(struct sk_buff *VAR_3, struct Qdisc *VAR_4, int *VAR_5)
{
 struct multiq_sched_data *VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7;
 struct tcf_result VAR_8;
 int VAR_9;

 *VAR_5 = VAR_0 | VAR_1;
 VAR_9 = FUNC_2(VAR_3, VAR_6->filter_list, &VAR_8);
 VAR_7 = FUNC_1(VAR_3);

 if (VAR_7 >= VAR_6->bands)
  return VAR_6->queues[0];

 return VAR_6->queues[VAR_7];
}
