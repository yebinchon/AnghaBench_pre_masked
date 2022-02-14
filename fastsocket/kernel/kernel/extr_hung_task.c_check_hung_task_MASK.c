
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {unsigned long nvcsw; unsigned long nivcsw; int flags; unsigned long last_switch_count; int pid; int comm; } ;
struct TYPE_2__ {int version; int release; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (struct task_struct*) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct task_struct *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_3->nvcsw + VAR_3->nivcsw;







 if (FUNC_8(VAR_3->flags & VAR_0 || !VAR_5))
  return;

 if (VAR_5 != VAR_3->last_switch_count) {
  VAR_3->last_switch_count = VAR_5;
  return;
 }
 if (!VAR_2)
  return;
 VAR_2--;





 FUNC_3("INFO: task %s:%d blocked for more than %ld seconds.\n",
  VAR_3->comm, VAR_3->pid, VAR_4);
 FUNC_3("      %s %s %.*s\n",
  FUNC_4(), FUNC_1()->release,
  (int)FUNC_6(FUNC_1()->version, " "),
  FUNC_1()->version);
 FUNC_3("\"echo 0 > /proc/sys/kernel/hung_task_timeout_secs\""
  " disables this message.\n");
 FUNC_5(VAR_3);
 FUNC_0(VAR_3);

 FUNC_7();

 if (VAR_1)
  FUNC_2("hung_task: blocked tasks");
}
