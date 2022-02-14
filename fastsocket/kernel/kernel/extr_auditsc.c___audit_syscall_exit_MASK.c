
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct audit_context* audit_context; } ;
struct audit_context {scalar_t__ current_state; unsigned long long prio; scalar_t__ state; int* fds; int * filterkey; scalar_t__ type; scalar_t__ sockaddr_len; scalar_t__ target_sid; scalar_t__ target_pid; int * aux_pids; int * aux; struct audit_context* previous; int killed_trees; scalar_t__ in_syscall; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct audit_context*) ;
 int FUNC_1 (struct audit_context*) ;
 int FUNC_2 (struct audit_context*) ;
 struct audit_context* FUNC_3 (struct task_struct*,int,long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct audit_context*,struct task_struct*) ;
 struct task_struct* VAR_3 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct audit_context*,int *,int ) ;

void FUNC_10(int VAR_4, long VAR_5)
{
 struct task_struct *VAR_6 = VAR_3;
 struct audit_context *VAR_7;

 if (VAR_4)
  VAR_4 = VAR_1;
 else
  VAR_4 = VAR_0;

 VAR_7 = FUNC_3(VAR_6, VAR_4, VAR_5);
 if (FUNC_7(!VAR_7))
  return;

 if (VAR_7->in_syscall && VAR_7->current_state == VAR_2)
  FUNC_5(VAR_7, VAR_6);

 VAR_7->in_syscall = 0;
 VAR_7->prio = VAR_7->state == VAR_2 ? ~0ULL : 0;

 if (!FUNC_8(&VAR_7->killed_trees))
  FUNC_4(&VAR_7->killed_trees);

 if (VAR_7->previous) {
  struct audit_context *VAR_8 = VAR_7->previous;
  VAR_7->previous = ((void*)0);
  FUNC_1(VAR_7);
  VAR_6->audit_context = VAR_8;
 } else {
  FUNC_2(VAR_7);
  FUNC_9(VAR_7, ((void*)0), 0);
  FUNC_0(VAR_7);
  VAR_7->aux = ((void*)0);
  VAR_7->aux_pids = ((void*)0);
  VAR_7->target_pid = 0;
  VAR_7->target_sid = 0;
  VAR_7->sockaddr_len = 0;
  VAR_7->type = 0;
  VAR_7->fds[0] = -1;
  if (VAR_7->state != VAR_2) {
   FUNC_6(VAR_7->filterkey);
   VAR_7->filterkey = ((void*)0);
  }
  VAR_6->audit_context = VAR_7;
 }
}
