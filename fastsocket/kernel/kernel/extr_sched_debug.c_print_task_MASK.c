
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sum_sleep_runtime; int sum_exec_runtime; int vruntime; } ;
struct task_struct {TYPE_1__ se; int prio; scalar_t__ nivcsw; scalar_t__ nvcsw; int pid; int comm; } ;
struct seq_file {int dummy; } ;
struct rq {struct task_struct* curr; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct seq_file *VAR_0, struct rq *VAR_1, struct task_struct *VAR_2)
{
 if (VAR_1->curr == VAR_2)
  FUNC_0(VAR_0, "R");
 else
  FUNC_0(VAR_0, " ");

 FUNC_0(VAR_0, "%15s %5d %9Ld.%06ld %9Ld %5d ",
  VAR_2->comm, VAR_2->pid,
  FUNC_1(VAR_2->se.vruntime),
  (long long)(VAR_2->nvcsw + VAR_2->nivcsw),
  VAR_2->prio);






 FUNC_0(VAR_0, "%15Ld %15Ld %15Ld.%06ld %15Ld.%06ld %15Ld.%06ld",
  0LL, 0LL, 0LL, 0L, 0LL, 0L, 0LL, 0L);





 FUNC_0(VAR_0, "\n");
}
