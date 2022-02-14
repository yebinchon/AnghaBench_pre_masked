
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tcf_result {size_t classid; } ;
struct sk_buff {size_t priority; } ;
struct prio_sched_data {size_t* prio2band; size_t bands; struct Qdisc** queues; int filter_list; } ;
struct Qdisc {scalar_t__ handle; } ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct prio_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct sk_buff*,int ,struct tcf_result*) ;

__attribute__((used)) static struct Qdisc *
FUNC_4(struct sk_buff *VAR_4, struct Qdisc *VAR_5, int *VAR_6)
{
 struct prio_sched_data *VAR_7 = FUNC_2(VAR_5);
 u32 VAR_8 = VAR_4->priority;
 struct tcf_result VAR_9;
 int VAR_10;

 *VAR_6 = VAR_0 | VAR_2;
 if (FUNC_0(VAR_4->priority) != VAR_5->handle) {
  VAR_10 = FUNC_3(VAR_4, VAR_7->filter_list, &VAR_9);
  if (!VAR_7->filter_list || VAR_10 < 0) {
   if (FUNC_0(VAR_8))
    VAR_8 = 0;
   return VAR_7->queues[VAR_7->prio2band[VAR_8&VAR_1]];
  }
  VAR_8 = VAR_9.classid;
 }
 VAR_8 = FUNC_1(VAR_8) - 1;
 if (VAR_8 >= VAR_7->bands)
  return VAR_7->queues[VAR_7->prio2band[0]];

 return VAR_7->queues[VAR_8];
}
