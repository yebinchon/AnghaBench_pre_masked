
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_offset_t ;
struct trapframe {int sp; int a0; void* ra; void* t9; void* pc; scalar_t__ badvaddr; scalar_t__ a3; void* a1; void* a2; int f0; int ast; int mulhi; int mullo; } ;
struct TYPE_11__ {uintptr_t ss_size; scalar_t__ ss_sp; } ;
struct TYPE_9__ {int md_flags; int md_tls; } ;
struct thread {int td_pflags; TYPE_3__ td_sigstk; struct trapframe* td_frame; TYPE_1__ td_md; struct proc* td_proc; } ;
struct TYPE_13__ {int si_signo; void* si_addr; void* si_code; } ;
struct TYPE_10__ {int mc_onstack; int mc_fpused; scalar_t__ mc_fpregs; int * mc_regs; int mc_tls; int mulhi; int mullo; void* mc_pc; } ;
struct TYPE_12__ {TYPE_2__ uc_mcontext; TYPE_3__ uc_stack; int uc_sigmask; } ;
struct sigframe {TYPE_5__ sf_si; TYPE_4__ sf_uc; } ;
struct sigacts {int ps_mtx; int ps_siginfo; int ps_sigonstack; } ;
struct proc {TYPE_6__* p_sysent; struct sigacts* p_sigacts; } ;
typedef int sigset_t ;
typedef scalar_t__ sig_t ;
typedef void* register_t ;
struct TYPE_15__ {int ksi_signo; void* ksi_code; TYPE_5__ ksi_info; } ;
typedef TYPE_7__ ksiginfo_t ;
struct TYPE_14__ {void** sv_szsigcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*) ;
 struct thread* FUNC_1 (int ) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*,int ) ;
 int FUNC_4 (struct proc*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (void*,void*,int) ;
 int FUNC_7 (struct sigframe*,int) ;
 scalar_t__ FUNC_8 (struct sigframe*,struct sigframe*,int) ;
 struct thread* VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct thread*,int ) ;
 int FUNC_13 (int) ;

void
FUNC_14(sig_t VAR_9, ksiginfo_t *VAR_10, sigset_t *VAR_11)
{
 struct proc *VAR_12;
 struct thread *VAR_13;
 struct trapframe *VAR_14;
 struct sigacts *VAR_15;
 struct sigframe VAR_16, *VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_13 = VAR_7;
 VAR_12 = VAR_13->td_proc;
 FUNC_3(VAR_12, VAR_0);
 VAR_18 = VAR_10->ksi_signo;
 VAR_15 = VAR_12->p_sigacts;
 FUNC_9(&VAR_15->ps_mtx, VAR_0);

 VAR_14 = VAR_13->td_frame;
 VAR_19 = FUNC_13(VAR_14->sp);


 FUNC_7(&VAR_16, sizeof(struct sigframe));
 VAR_16.sf_uc.uc_sigmask = *VAR_11;
 VAR_16.sf_uc.uc_stack = VAR_13->td_sigstk;
 VAR_16.sf_uc.uc_mcontext.mc_onstack = (VAR_19) ? 1 : 0;
 VAR_16.sf_uc.uc_mcontext.mc_pc = VAR_14->pc;
 VAR_16.sf_uc.uc_mcontext.mullo = VAR_14->mullo;
 VAR_16.sf_uc.uc_mcontext.mulhi = VAR_14->mulhi;
 VAR_16.sf_uc.uc_mcontext.mc_tls = VAR_13->td_md.md_tls;
 VAR_16.sf_uc.uc_mcontext.mc_regs[0] = VAR_6;
 FUNC_6((void *)&VAR_14->ast, (void *)&VAR_16.sf_uc.uc_mcontext.mc_regs[1],
     sizeof(VAR_16.sf_uc.uc_mcontext.mc_regs) - sizeof(register_t));
 VAR_16.sf_uc.uc_mcontext.mc_fpused = VAR_13->td_md.md_flags & VAR_1;
 if (VAR_16.sf_uc.uc_mcontext.mc_fpused) {

  if (VAR_13 == FUNC_1(VAR_8))
   FUNC_0(VAR_13);
  FUNC_6((void *)&VAR_13->td_frame->f0,
      (void *)VAR_16.sf_uc.uc_mcontext.mc_fpregs,
      sizeof(VAR_16.sf_uc.uc_mcontext.mc_fpregs));
 }


 if ((VAR_13->td_pflags & VAR_5) != 0 && !VAR_19 &&
     FUNC_5(VAR_15->ps_sigonstack, VAR_18)) {
  VAR_17 = (struct sigframe *)(((uintptr_t)VAR_13->td_sigstk.ss_sp +
      VAR_13->td_sigstk.ss_size - sizeof(struct sigframe))
      & ~(VAR_4 - 1));
 } else
  VAR_17 = (struct sigframe *)((vm_offset_t)(VAR_14->sp -
      sizeof(struct sigframe)) & ~(VAR_4 - 1));


 VAR_14->a0 = VAR_18;
 VAR_14->a2 = (register_t)(intptr_t)&VAR_17->sf_uc;
 if (FUNC_5(VAR_15->ps_siginfo, VAR_18)) {

  VAR_14->a1 = (register_t)(intptr_t)&VAR_17->sf_si;



  VAR_16.sf_si = VAR_10->ksi_info;
  VAR_16.sf_si.si_signo = VAR_18;
  VAR_16.sf_si.si_code = VAR_10->ksi_code;
  VAR_16.sf_si.si_addr = (void*)(intptr_t)VAR_14->badvaddr;
 } else {

  VAR_14->a1 = VAR_10->ksi_code;
  VAR_14->a3 = VAR_14->badvaddr;

 }

 FUNC_11(&VAR_15->ps_mtx);
 FUNC_4(VAR_12);




 if (FUNC_8(&VAR_16, VAR_17, sizeof(struct sigframe)) != 0) {




  FUNC_2(VAR_12);
  FUNC_12(VAR_13, VAR_3);
 }

 VAR_14->pc = (register_t)(intptr_t)VAR_9;
 VAR_14->t9 = (register_t)(intptr_t)VAR_9;
 VAR_14->sp = (register_t)(intptr_t)VAR_17;



 VAR_14->ra = (register_t)(intptr_t)VAR_2 - *(VAR_12->p_sysent->sv_szsigcode);
 FUNC_2(VAR_12);
 FUNC_10(&VAR_15->ps_mtx);
}
