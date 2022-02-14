
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sfq_sched_data {size_t tail; size_t* next; int * qs; } ;
struct Qdisc {int dummy; } ;
typedef size_t sfq_index ;


 size_t VAR_0 ;
 struct sfq_sched_data* FUNC_0 (struct Qdisc*) ;
 struct sk_buff* FUNC_1 (int *) ;

__attribute__((used)) static struct sk_buff *
FUNC_2(struct Qdisc *VAR_1)
{
 struct sfq_sched_data *VAR_2 = FUNC_0(VAR_1);
 sfq_index VAR_3;


 if (VAR_2->tail == VAR_0)
  return ((void*)0);

 VAR_3 = VAR_2->next[VAR_2->tail];
 return FUNC_1(&VAR_2->qs[VAR_3]);
}
