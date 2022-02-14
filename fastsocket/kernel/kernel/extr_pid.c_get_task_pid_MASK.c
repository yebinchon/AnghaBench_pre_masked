
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* pids; struct task_struct* group_leader; } ;
struct pid {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 struct pid* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

struct pid *FUNC_3(struct task_struct *VAR_1, enum pid_type VAR_2)
{
 struct pid *VAR_3;
 FUNC_1();
 if (VAR_2 != VAR_0)
  VAR_1 = VAR_1->group_leader;
 VAR_3 = FUNC_0(VAR_1->pids[VAR_2].pid);
 FUNC_2();
 return VAR_3;
}
