
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct audit_context* audit_context; } ;
struct audit_context {scalar_t__ current_state; int prio; int ppid; int filterkey; scalar_t__ in_syscall; int dummy; int ctime; int argv; int major; int arch; } ;
struct TYPE_2__ {int pid; struct audit_context* audit_context; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct task_struct *VAR_3)
{
 struct audit_context *VAR_4 = VAR_2->audit_context;
 struct audit_context *VAR_5 = VAR_3->audit_context;
 if (!VAR_5 || !VAR_4)
  return;
 if (!VAR_4->in_syscall || VAR_4->current_state != VAR_0)
  return;
 VAR_5->arch = VAR_4->arch;
 VAR_5->major = VAR_4->major;
 FUNC_1(VAR_5->argv, VAR_4->argv, sizeof(VAR_4->argv));
 VAR_5->ctime = VAR_4->ctime;
 VAR_5->dummy = VAR_4->dummy;
 VAR_5->in_syscall = VAR_4->in_syscall;
 VAR_5->filterkey = FUNC_0(VAR_4->filterkey, VAR_1);
 VAR_5->ppid = VAR_2->pid;
 VAR_5->prio = VAR_4->prio;
 VAR_5->current_state = VAR_4->current_state;
}
