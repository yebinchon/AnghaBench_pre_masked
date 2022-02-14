
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cbq_sched_data {int pmask; scalar_t__ now; } ;
struct TYPE_2__ {int overactions; } ;
struct cbq_class {int cpriority; int priority2; TYPE_1__ xstats; scalar_t__ penalty; scalar_t__ penalized; int qdisc; } ;


 int FUNC_0 (struct cbq_class*) ;
 struct cbq_sched_data* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cbq_class *VAR_0)
{
 struct cbq_sched_data *VAR_1 = FUNC_1(VAR_0->qdisc);

 VAR_0->penalized = VAR_1->now + VAR_0->penalty;

 if (VAR_0->cpriority != VAR_0->priority2) {
  VAR_0->cpriority = VAR_0->priority2;
  VAR_1->pmask |= (1<<VAR_0->cpriority);
  VAR_0->xstats.overactions++;
 }
 FUNC_0(VAR_0);
}
