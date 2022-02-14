
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_result {int classid; } ;
struct sk_buff {int priority; } ;
struct sfq_sched_data {int filter_list; } ;
struct Qdisc {scalar_t__ handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sfq_sched_data* FUNC_2 (struct Qdisc*) ;
 unsigned int FUNC_3 (struct sfq_sched_data*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,struct tcf_result*) ;

__attribute__((used)) static unsigned int FUNC_5(struct sk_buff *VAR_4, struct Qdisc *VAR_5,
     int *VAR_6)
{
 struct sfq_sched_data *VAR_7 = FUNC_2(VAR_5);
 struct tcf_result VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_4->priority) == VAR_5->handle &&
     FUNC_1(VAR_4->priority) > 0 &&
     FUNC_1(VAR_4->priority) <= VAR_1)
  return FUNC_1(VAR_4->priority);

 if (!VAR_7->filter_list)
  return FUNC_3(VAR_7, VAR_4) + 1;

 *VAR_6 = VAR_0 | VAR_2;
 VAR_9 = FUNC_4(VAR_4, VAR_7->filter_list, &VAR_8);
 if (VAR_9 >= 0) {
  if (FUNC_1(VAR_8.classid) <= VAR_1)
   return FUNC_1(VAR_8.classid);
 }
 return 0;
}
