
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sched_exp; void* virt_exp; void* prof_exp; } ;
struct task_struct {int * cpu_timers; TYPE_1__ cputime_expires; } ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct task_struct *VAR_1)
{
 VAR_1->cputime_expires.prof_exp = VAR_0;
 VAR_1->cputime_expires.virt_exp = VAR_0;
 VAR_1->cputime_expires.sched_exp = 0;
 FUNC_0(&VAR_1->cpu_timers[0]);
 FUNC_0(&VAR_1->cpu_timers[1]);
 FUNC_0(&VAR_1->cpu_timers[2]);
}
