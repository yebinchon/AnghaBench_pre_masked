
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* pids; struct task_struct* group_leader; } ;
struct pid {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;
struct TYPE_2__ {struct pid* pid; } ;


 int VAR_0 ;

__attribute__((used)) static inline
struct pid *FUNC_0(struct task_struct *VAR_1, enum pid_type VAR_2)
{
 if (VAR_2 != VAR_0)
  VAR_1 = VAR_1->group_leader;
 return VAR_1->pids[VAR_2].pid;
}
