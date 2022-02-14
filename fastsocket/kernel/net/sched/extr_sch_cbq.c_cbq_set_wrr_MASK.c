
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cbq_wrropt {scalar_t__ priority; scalar_t__ weight; scalar_t__ allot; } ;
struct cbq_sched_data {int dummy; } ;
struct cbq_class {scalar_t__ priority; scalar_t__ cpriority; scalar_t__ priority2; scalar_t__ weight; scalar_t__ allot; int qdisc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cbq_sched_data*,struct cbq_class*) ;
 struct cbq_sched_data* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cbq_class *VAR_1, struct tc_cbq_wrropt *VAR_2)
{
 struct cbq_sched_data *VAR_3 = FUNC_1(VAR_1->qdisc);

 if (VAR_2->allot)
  VAR_1->allot = VAR_2->allot;
 if (VAR_2->weight)
  VAR_1->weight = VAR_2->weight;
 if (VAR_2->priority) {
  VAR_1->priority = VAR_2->priority-1;
  VAR_1->cpriority = VAR_1->priority;
  if (VAR_1->priority >= VAR_1->priority2)
   VAR_1->priority2 = VAR_0-1;
 }

 FUNC_0(VAR_3, VAR_1);
 return 0;
}
