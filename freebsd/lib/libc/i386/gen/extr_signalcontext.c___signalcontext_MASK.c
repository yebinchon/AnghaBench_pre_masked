
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int mc_eflags; void* mc_eip; void* mc_esp; void* mc_esi; } ;
struct TYPE_10__ {int uc_sigmask; int * uc_link; TYPE_3__ uc_mcontext; } ;
typedef TYPE_4__ ucontext_t ;
typedef int u_register_t ;
struct TYPE_8__ {int si_signo; } ;
struct TYPE_7__ {int * sf_action; } ;
struct sigframe {int sf_signum; int sf_uc; TYPE_2__ sf_si; TYPE_1__ sf_ahu; void* sf_ucontext; void* sf_siginfo; } ;
typedef void* register_t ;
typedef int __siginfohandler_t ;
typedef int __sighandler_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int *,int) ;
 int FUNC_1 (struct sigframe*,int) ;
 int FUNC_2 (int *,int) ;

int
FUNC_3(ucontext_t *VAR_2, int VAR_3, __sighandler_t *VAR_4)
{
 register_t *VAR_5;
 struct sigframe *VAR_6;
 VAR_5 = (register_t *)(void *)(intptr_t)VAR_2->uc_mcontext.mc_esp;
 *--VAR_5 = (register_t)(intptr_t)VAR_2;
 VAR_5 = (register_t *)((u_register_t)VAR_5 & ~0xF);
 VAR_5 = (register_t *)((u_register_t)VAR_5 - sizeof(struct sigframe));
 VAR_6 = (struct sigframe *)VAR_5;
 FUNC_1(VAR_6, sizeof(struct sigframe));
 VAR_6->sf_signum = VAR_3;
 VAR_6->sf_siginfo = (register_t)(intptr_t)&VAR_6->sf_si;
 VAR_6->sf_ucontext = (register_t)(intptr_t)&VAR_6->sf_uc;
 VAR_6->sf_ahu.sf_action = (__siginfohandler_t *)VAR_4;
 FUNC_0(VAR_2, &VAR_6->sf_uc, sizeof(ucontext_t));
 VAR_6->sf_si.si_signo = VAR_3;
 *--VAR_5 = (register_t)(intptr_t)VAR_4;




 VAR_2->uc_mcontext.mc_esi = VAR_2->uc_mcontext.mc_esp - sizeof(int);
 VAR_2->uc_mcontext.mc_esp = (register_t)(intptr_t)VAR_5;
 VAR_2->uc_mcontext.mc_eip = (register_t)(intptr_t)VAR_1;
 VAR_2->uc_mcontext.mc_eflags &= ~VAR_0;
 VAR_2->uc_link = &VAR_6->sf_uc;
 FUNC_2(&VAR_2->uc_sigmask, VAR_3);
 return (0);
}
