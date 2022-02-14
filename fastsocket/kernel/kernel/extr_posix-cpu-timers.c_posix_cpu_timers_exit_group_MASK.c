
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sum_exec_runtime; } ;
struct task_struct {TYPE_1__ se; int stime; int utime; struct signal_struct* signal; } ;
struct signal_struct {scalar_t__ sum_sched_runtime; int stime; int utime; int cpu_timers; } ;


 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct task_struct *VAR_0)
{
 struct signal_struct *const VAR_1 = VAR_0->signal;

 FUNC_0(VAR_0->signal->cpu_timers,
         FUNC_1(VAR_0->utime, VAR_1->utime),
         FUNC_1(VAR_0->stime, VAR_1->stime),
         VAR_0->se.sum_exec_runtime + VAR_1->sum_sched_runtime);
}
