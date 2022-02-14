
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int mc_rsp; int si_signo; int mc_len; void* mc_rip; void* mc_rbx; void* mc_rbp; void* mc_rdx; void* mc_rsi; void* mc_rdi; int mc_ownedfp; int mc_fpformat; } ;
struct TYPE_7__ {TYPE_2__ uc_mcontext; int uc_sigmask; struct TYPE_7__* uc_link; } ;
typedef TYPE_1__ ucontext_t ;
typedef TYPE_2__ siginfo_t ;
typedef void* register_t ;
typedef int mcontext_t ;
typedef int __sighandler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int) ;

int
FUNC_4(ucontext_t *VAR_3, int VAR_4, __sighandler_t *VAR_5)
{
 uint64_t *VAR_6;
 siginfo_t *VAR_7;
 ucontext_t *VAR_8;
 uint64_t VAR_9;


 if (VAR_3 == ((void*)0))
  FUNC_0();







 VAR_9 = (VAR_3->uc_mcontext.mc_rsp - 128 - sizeof(ucontext_t)) & ~15UL;
 VAR_8 = (ucontext_t *)VAR_9;
 FUNC_1(VAR_3, VAR_8, sizeof(*VAR_8));
 VAR_9 = (VAR_9 - sizeof(siginfo_t)) & ~15UL;
 VAR_7 = (siginfo_t *)VAR_9;
 FUNC_2(VAR_7, sizeof(*VAR_7));
 VAR_7->si_signo = VAR_4;
 VAR_9 -= 3 * sizeof(uint64_t);
 VAR_6 = (uint64_t *)VAR_9;
 VAR_6[0] = VAR_4;
 VAR_6[1] = (intptr_t)VAR_7;
 VAR_6[2] = (intptr_t)VAR_8;
 VAR_9 -= 16;




 FUNC_2(&VAR_3->uc_mcontext, sizeof(VAR_3->uc_mcontext));
 VAR_3->uc_mcontext.mc_fpformat = VAR_0;
 VAR_3->uc_mcontext.mc_ownedfp = VAR_1;
 VAR_3->uc_link = VAR_8;
 FUNC_3(&VAR_3->uc_sigmask, VAR_4);

 VAR_3->uc_mcontext.mc_len = sizeof(mcontext_t);
 VAR_3->uc_mcontext.mc_rdi = (register_t)VAR_3;
 VAR_3->uc_mcontext.mc_rsi = (register_t)VAR_5;
 VAR_3->uc_mcontext.mc_rdx = (register_t)VAR_6;
 VAR_3->uc_mcontext.mc_rbp = (register_t)VAR_9;
 VAR_3->uc_mcontext.mc_rbx = (register_t)VAR_9;
 VAR_3->uc_mcontext.mc_rsp = (register_t)VAR_9;
 VAR_3->uc_mcontext.mc_rip = (register_t)VAR_2;
 return (0);
}
