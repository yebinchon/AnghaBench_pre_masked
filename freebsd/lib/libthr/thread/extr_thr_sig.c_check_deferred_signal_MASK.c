
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int uc_sigmask; } ;
typedef TYPE_1__ ucontext_t ;
struct sigaction {int dummy; } ;
struct TYPE_11__ {scalar_t__ si_signo; } ;
struct pthread {int deferred_run; TYPE_4__ deferred_siginfo; int deferred_sigmask; struct sigaction deferred_sigact; } ;
struct TYPE_10__ {int si_signo; } ;
typedef TYPE_2__ siginfo_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct sigaction*,int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_7(struct pthread *VAR_0)
{
 ucontext_t *VAR_1;
 struct sigaction VAR_2;
 siginfo_t VAR_3;
 int VAR_4;

 if (FUNC_2(VAR_0->deferred_siginfo.si_signo == 0 ||
     VAR_0->deferred_run))
  return;

 VAR_0->deferred_run = 1;
 VAR_4 = FUNC_1();
 VAR_1 = FUNC_3(VAR_4);
 FUNC_4(VAR_1);
 if (VAR_0->deferred_siginfo.si_signo == 0) {
  VAR_0->deferred_run = 0;
  return;
 }
 FUNC_0((char *)VAR_1);
 VAR_2 = VAR_0->deferred_sigact;
 VAR_1->uc_sigmask = VAR_0->deferred_sigmask;
 FUNC_6(&VAR_3, &VAR_0->deferred_siginfo, sizeof(siginfo_t));

 VAR_0->deferred_siginfo.si_signo = 0;
 FUNC_5(&VAR_2, VAR_3.si_signo, &VAR_3, VAR_1);
}
