
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* pids; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;
struct TYPE_2__ {int node; int pid; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct task_struct *VAR_0, struct task_struct *VAR_1,
      enum pid_type VAR_2)
{
 VAR_1->pids[VAR_2].pid = VAR_0->pids[VAR_2].pid;
 FUNC_0(&VAR_0->pids[VAR_2].node, &VAR_1->pids[VAR_2].node);
}
