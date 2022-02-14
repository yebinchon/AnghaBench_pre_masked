
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_8__ {unsigned long* mc_gpr; int si_signo; int mc_len; void* mc_srr0; int mc_vers; } ;
struct TYPE_7__ {TYPE_2__ uc_mcontext; int uc_sigmask; struct TYPE_7__* uc_link; } ;
typedef TYPE_1__ ucontext_t ;
struct __mcontext {int dummy; } ;
typedef TYPE_2__ siginfo_t ;
typedef int __sighandler_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int) ;

int
FUNC_4(ucontext_t *VAR_2, int VAR_3, __sighandler_t *VAR_4)
{
 siginfo_t *VAR_5;
 ucontext_t *VAR_6;
 uintptr_t VAR_7;


 if (VAR_2 == ((void*)0))
  FUNC_0();




 VAR_7 = (VAR_2->uc_mcontext.mc_gpr[1] - sizeof(ucontext_t)) & ~15UL;
 VAR_6 = (ucontext_t *)VAR_7;
 FUNC_1(VAR_2, VAR_6, sizeof(*VAR_6));
 VAR_7 = (VAR_7 - sizeof(siginfo_t)) & ~15UL;
 VAR_5 = (siginfo_t *)VAR_7;
 FUNC_2(VAR_5, sizeof(*VAR_5));
 VAR_5->si_signo = VAR_3;




 VAR_7 -= 6*sizeof(uint64_t);
 VAR_7 &= ~15UL;




 FUNC_2(&VAR_2->uc_mcontext, sizeof(VAR_2->uc_mcontext));
 VAR_2->uc_link = VAR_6;
 FUNC_3(&VAR_2->uc_sigmask, VAR_3);

 VAR_2->uc_mcontext.mc_vers = VAR_0;
 VAR_2->uc_mcontext.mc_len = sizeof(struct __mcontext);
 VAR_2->uc_mcontext.mc_srr0 = (uint64_t) VAR_1;
 VAR_2->uc_mcontext.mc_gpr[1] = (uint64_t) VAR_7;
 VAR_2->uc_mcontext.mc_gpr[3] = (uint64_t) VAR_4;
 VAR_2->uc_mcontext.mc_gpr[4] = (uint64_t) VAR_3;
 VAR_2->uc_mcontext.mc_gpr[5] = (uint64_t) VAR_5;
 VAR_2->uc_mcontext.mc_gpr[6] = (uint64_t) VAR_6;

 return (0);
}
