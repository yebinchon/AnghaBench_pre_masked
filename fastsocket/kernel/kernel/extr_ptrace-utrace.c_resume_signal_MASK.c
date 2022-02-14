
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ptrace_context {int signr; TYPE_2__* siginfo; } ;
struct k_sigaction {int dummy; } ;
struct TYPE_7__ {int si_signo; int si_uid; int si_pid; int si_code; scalar_t__ si_errno; } ;
typedef TYPE_2__ siginfo_t ;
typedef enum utrace_signal_action { ____Placeholder_utrace_signal_action } utrace_signal_action ;
struct TYPE_8__ {TYPE_1__* sighand; int blocked; int parent; } ;
struct TYPE_6__ {int siglock; struct k_sigaction* action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (int,TYPE_2__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static enum utrace_signal_action FUNC_6(struct ptrace_context *VAR_4,
            struct k_sigaction *VAR_5)
{
 siginfo_t *VAR_6 = VAR_4->siginfo;
 int VAR_7 = VAR_4->signr;

 VAR_4->siginfo = ((void*)0);
 VAR_4->signr = 0;


 if (!VAR_7)
  return VAR_2;





 if (VAR_6->si_signo != VAR_7) {
  VAR_6->si_signo = VAR_7;
  VAR_6->si_errno = 0;
  VAR_6->si_code = VAR_0;
  VAR_6->si_pid = FUNC_4(VAR_3->parent);
  VAR_6->si_uid = FUNC_5(VAR_3->parent);
 }


 if (FUNC_1(&VAR_3->blocked, VAR_7)) {
  FUNC_0(VAR_7, VAR_6, VAR_3);
  return VAR_2;
 }

 FUNC_2(&VAR_3->sighand->siglock);
 *VAR_5 = VAR_3->sighand->action[VAR_7 - 1];
 FUNC_3(&VAR_3->sighand->siglock);

 return VAR_1;
}
