
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_cputime {scalar_t__ sum_exec_runtime; int stime; int utime; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct task_cputime *VAR_0, struct task_cputime *VAR_1)
{
 if (FUNC_0(VAR_1->utime, VAR_0->utime))
  VAR_0->utime = VAR_1->utime;

 if (FUNC_0(VAR_1->stime, VAR_0->stime))
  VAR_0->stime = VAR_1->stime;

 if (VAR_1->sum_exec_runtime > VAR_0->sum_exec_runtime)
  VAR_0->sum_exec_runtime = VAR_1->sum_exec_runtime;
}
