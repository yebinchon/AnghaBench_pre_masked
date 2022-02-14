
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct pid_link* pids; } ;
struct pid_link {int node; struct pid* pid; } ;
struct pid {int * tasks; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct task_struct *VAR_0, enum pid_type VAR_1,
  struct pid *VAR_2)
{
 struct pid_link *VAR_3;

 VAR_3 = &VAR_0->pids[VAR_1];
 VAR_3->pid = VAR_2;
 FUNC_0(&VAR_3->node, &VAR_2->tasks[VAR_1]);
}
