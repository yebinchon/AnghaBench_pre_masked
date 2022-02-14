
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_15__ {uintptr_t ss_size; scalar_t__ ss_sp; int ss_flags; } ;
struct TYPE_13__ {int md_flags; scalar_t__ md_tls; } ;
struct thread {int td_pflags; TYPE_8__* td_frame; TYPE_5__ td_sigstk; TYPE_3__ td_md; struct proc* td_proc; } ;
struct TYPE_17__ {int si_signo; int si_addr; void* si_code; } ;
struct TYPE_14__ {int mc_onstack; int mc_fpused; int * mc_fpregs; int * mc_regs; void* mc_tls; int mulhi; int mullo; int mc_pc; } ;
struct TYPE_12__ {uintptr_t ss_size; int ss_flags; void* ss_sp; } ;
struct TYPE_16__ {TYPE_4__ uc_mcontext; TYPE_2__ uc_stack; int uc_sigmask; } ;
struct sigframe32 {TYPE_7__ sf_si; TYPE_6__ sf_uc; } ;
struct sigacts {int ps_mtx; int ps_siginfo; int ps_sigonstack; } ;
struct reg32 {int * r_regs; } ;
struct proc {TYPE_1__* p_sysent; struct sigacts* p_sigacts; } ;
struct fpreg32 {int * r_regs; } ;
typedef int sigset_t ;
typedef scalar_t__ sig_t ;
typedef void* register_t ;
struct TYPE_19__ {int ksi_signo; void* ksi_code; } ;
typedef TYPE_9__ ksiginfo_t ;
typedef void* int32_t ;
typedef int __int64_t ;
struct TYPE_18__ {int sp; int a0; void* ra; void* t9; void* pc; int badvaddr; int a3; void* a1; void* a2; } ;
struct TYPE_11__ {void** sv_szsigcode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct thread*) ;
 size_t VAR_5 ;
 struct thread* FUNC_1 (int ) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*,int ) ;
 int FUNC_4 (struct proc*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct sigframe32*,int) ;
 scalar_t__ FUNC_7 (struct sigframe32*,struct sigframe32*,int) ;
 struct thread* VAR_9 ;
 int FUNC_8 (struct thread*,struct fpreg32*) ;
 int FUNC_9 (struct thread*,struct reg32*) ;
 int VAR_10 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct thread*,int ) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(sig_t VAR_11, ksiginfo_t *VAR_12, sigset_t *VAR_13)
{
 struct proc *VAR_14;
 struct thread *VAR_15;
 struct fpreg32 VAR_16;
 struct reg32 VAR_17;
 struct sigacts *VAR_18;
 struct sigframe32 VAR_19, *VAR_20;
 int VAR_21;
 int VAR_22;
 unsigned VAR_23;

 VAR_15 = VAR_9;
 VAR_14 = VAR_15->td_proc;
 FUNC_3(VAR_14, VAR_1);
 VAR_21 = VAR_12->ksi_signo;
 VAR_18 = VAR_14->p_sigacts;
 FUNC_10(&VAR_18->ps_mtx, VAR_1);

 FUNC_9(VAR_15, &VAR_17);
 VAR_22 = FUNC_14(VAR_15->td_frame->sp);


 FUNC_6(&VAR_19, sizeof VAR_19);
 VAR_19.sf_uc.uc_sigmask = *VAR_13;
 VAR_19.sf_uc.uc_stack.ss_sp = (int32_t)(intptr_t)VAR_15->td_sigstk.ss_sp;
 VAR_19.sf_uc.uc_stack.ss_size = VAR_15->td_sigstk.ss_size;
 VAR_19.sf_uc.uc_stack.ss_flags = VAR_15->td_sigstk.ss_flags;
 VAR_19.sf_uc.uc_mcontext.mc_onstack = (VAR_22) ? 1 : 0;
 VAR_19.sf_uc.uc_mcontext.mc_pc = VAR_17.r_regs[VAR_5];
 VAR_19.sf_uc.uc_mcontext.mullo = VAR_17.r_regs[VAR_4];
 VAR_19.sf_uc.uc_mcontext.mulhi = VAR_17.r_regs[VAR_3];
 VAR_19.sf_uc.uc_mcontext.mc_tls = (int32_t)(intptr_t)VAR_15->td_md.md_tls;
 VAR_19.sf_uc.uc_mcontext.mc_regs[0] = VAR_8;
 for (VAR_23 = 1; VAR_23 < 32; VAR_23++)
  VAR_19.sf_uc.uc_mcontext.mc_regs[VAR_23] = VAR_17.r_regs[VAR_23];
 VAR_19.sf_uc.uc_mcontext.mc_fpused = VAR_15->td_md.md_flags & VAR_2;
 if (VAR_19.sf_uc.uc_mcontext.mc_fpused) {

  if (VAR_15 == FUNC_1(VAR_10))
   FUNC_0(VAR_15);
  FUNC_8(VAR_15, &VAR_16);
  for (VAR_23 = 0; VAR_23 < 33; VAR_23++)
   VAR_19.sf_uc.uc_mcontext.mc_fpregs[VAR_23] = VAR_16.r_regs[VAR_23];
 }


 if ((VAR_15->td_pflags & VAR_7) != 0 && !VAR_22 &&
     FUNC_5(VAR_18->ps_sigonstack, VAR_21)) {
  VAR_20 = (struct sigframe32 *)(((uintptr_t)VAR_15->td_sigstk.ss_sp +
      VAR_15->td_sigstk.ss_size - sizeof(struct sigframe32))
      & ~(sizeof(__int64_t) - 1));
 } else
  VAR_20 = (struct sigframe32 *)((vm_offset_t)(VAR_15->td_frame->sp -
      sizeof(struct sigframe32)) & ~(sizeof(__int64_t) - 1));


 VAR_15->td_frame->a0 = VAR_21;
 VAR_15->td_frame->a2 = (register_t)(intptr_t)&VAR_20->sf_uc;
 if (FUNC_5(VAR_18->ps_siginfo, VAR_21)) {

  VAR_15->td_frame->a1 = (register_t)(intptr_t)&VAR_20->sf_si;



  VAR_19.sf_si.si_signo = VAR_21;
  VAR_19.sf_si.si_code = VAR_12->ksi_code;
  VAR_19.sf_si.si_addr = VAR_15->td_frame->badvaddr;
 } else {

  VAR_15->td_frame->a1 = VAR_12->ksi_code;
  VAR_15->td_frame->a3 = VAR_15->td_frame->badvaddr;

 }

 FUNC_12(&VAR_18->ps_mtx);
 FUNC_4(VAR_14);




 if (FUNC_7(&VAR_19, VAR_20, sizeof(struct sigframe32)) != 0) {




  FUNC_2(VAR_14);
  FUNC_13(VAR_15, VAR_6);
 }

 VAR_15->td_frame->pc = (register_t)(intptr_t)VAR_11;
 VAR_15->td_frame->t9 = (register_t)(intptr_t)VAR_11;
 VAR_15->td_frame->sp = (register_t)(intptr_t)VAR_20;



 VAR_15->td_frame->ra = (register_t)(intptr_t)VAR_0 - *(VAR_14->p_sysent->sv_szsigcode);
 FUNC_2(VAR_14);
 FUNC_11(&VAR_18->ps_mtx);
}
