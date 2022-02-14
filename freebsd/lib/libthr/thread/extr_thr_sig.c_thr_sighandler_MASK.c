
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uc_sigmask; } ;
typedef TYPE_1__ ucontext_t ;
struct sigaction {int dummy; } ;
struct usigaction {int lock; struct sigaction sigact; } ;
struct pthread {int deferred_sigmask; int deferred_siginfo; int deferred_sigact; scalar_t__ deferred_run; } ;
typedef struct sigaction siginfo_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct pthread*) ;
 struct usigaction* FUNC_2 (int) ;
 struct pthread* FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (struct sigaction*,int,struct sigaction*,TYPE_1__*) ;
 int FUNC_7 (int *,struct sigaction*,int) ;

__attribute__((used)) static void
FUNC_8(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 struct pthread *VAR_5;
 ucontext_t *VAR_6;
 struct sigaction VAR_7;
 struct usigaction *VAR_8;
 int VAR_9;

 VAR_9 = VAR_1;
 VAR_5 = FUNC_3();
 VAR_6 = VAR_4;
 VAR_8 = FUNC_2(VAR_2);
 FUNC_4(&VAR_8->lock);
 VAR_7 = VAR_8->sigact;
 FUNC_5(&VAR_8->lock);
 VAR_1 = VAR_9;
 VAR_5->deferred_run = 0;
 if (FUNC_1(VAR_5) && FUNC_0(VAR_0, VAR_2)) {
  FUNC_7(&VAR_5->deferred_sigact, &VAR_7, sizeof(struct sigaction));
  FUNC_7(&VAR_5->deferred_siginfo, VAR_3, sizeof(siginfo_t));
  VAR_5->deferred_sigmask = VAR_6->uc_sigmask;

  VAR_6->uc_sigmask = VAR_0;
  return;
 }

 FUNC_6(&VAR_7, VAR_2, VAR_3, VAR_6);
}
