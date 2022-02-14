
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* pids; struct task_struct* group_leader; } ;
struct pid_namespace {int dummy; } ;
typedef int pid_t ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int ,struct pid_namespace*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct pid_namespace* FUNC_5 (int ) ;

pid_t FUNC_6(struct task_struct *VAR_2, enum pid_type VAR_3,
   struct pid_namespace *VAR_4)
{
 pid_t VAR_5 = 0;

 FUNC_3();
 if (!VAR_4)
  VAR_4 = FUNC_5(VAR_1);
 if (FUNC_0(FUNC_1(VAR_2))) {
  if (VAR_3 != VAR_0)
   VAR_2 = VAR_2->group_leader;
  VAR_5 = FUNC_2(VAR_2->pids[VAR_3].pid, VAR_4);
 }
 FUNC_4();

 return VAR_5;
}
