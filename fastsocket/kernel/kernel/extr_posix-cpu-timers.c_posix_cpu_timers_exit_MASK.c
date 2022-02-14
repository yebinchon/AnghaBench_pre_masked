
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sum_exec_runtime; } ;
struct task_struct {TYPE_1__ se; int stime; int utime; int cpu_timers; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(struct task_struct *VAR_0)
{
 FUNC_0(VAR_0->cpu_timers,
         VAR_0->utime, VAR_0->stime, VAR_0->se.sum_exec_runtime);

}
