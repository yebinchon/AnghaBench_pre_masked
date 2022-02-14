
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct trapframe {long tf_rsp; int tf_rdi; int tf_rflags; int tf_cs; int tf_rip; void* tf_rdx; void* tf_rsi; scalar_t__ tf_rax; int tf_err; int tf_r15; int tf_r14; int tf_r13; int tf_r12; int tf_r11; int tf_r10; int tf_r9; int tf_r8; int tf_rcx; int tf_rbx; int tf_rbp; } ;
struct TYPE_8__ {scalar_t__ ss_size; scalar_t__ ss_sp; } ;
struct thread {int td_pflags; int td_pcb; TYPE_1__ td_sigstk; struct trapframe* td_frame; struct proc* td_proc; } ;
struct sigacts {int ps_mtx; int ps_sigonstack; } ;
struct proc {struct sigacts* p_sigacts; } ;
struct TYPE_10__ {int sc_rdi; long sc_rsp; int sc_rflags; void* sc_cr2; int sc_trapno; int sc_err; int sc_cs; int sc_r15; int sc_r14; int sc_r13; int sc_r12; int sc_r11; int sc_r10; int sc_r9; int sc_r8; int sc_rip; scalar_t__ sc_rax; int sc_rcx; int sc_rbx; int sc_rbp; void* sc_rdx; void* sc_rsi; int sc_mask; } ;
struct TYPE_9__ {int ss_flags; scalar_t__ ss_size; int ss_sp; } ;
struct TYPE_11__ {TYPE_3__ uc_mcontext; TYPE_2__ uc_stack; int uc_sigmask; } ;
struct l_rt_sigframe {int sf_si; int sf_handler; TYPE_4__ sf_sc; } ;
typedef int sigset_t ;
typedef int sig_t ;
typedef int sf ;
typedef void* register_t ;
struct TYPE_12__ {int ksi_signo; int ksi_code; scalar_t__ ksi_addr; } ;
typedef TYPE_5__ ksiginfo_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int ,char*,int ,int,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct proc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct l_rt_sigframe*,int) ;
 scalar_t__ FUNC_10 (struct l_rt_sigframe*,struct l_rt_sigframe*,int) ;
 struct thread* VAR_9 ;
 int FUNC_11 (TYPE_5__*,int *,int) ;
 int VAR_10 ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_11 ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct thread*,int ) ;
 int FUNC_17 (long) ;

__attribute__((used)) static void
FUNC_18(sig_t VAR_12, ksiginfo_t *VAR_13, sigset_t *VAR_14)
{
 struct l_rt_sigframe VAR_15, *VAR_16;
 struct proc *VAR_17;
 struct thread *VAR_18;
 struct sigacts *VAR_19;
 caddr_t VAR_20;
 struct trapframe *VAR_21;
 int VAR_22, VAR_23;
 int VAR_24;

 VAR_18 = VAR_9;
 VAR_17 = VAR_18->td_proc;
 FUNC_2(VAR_17, VAR_2);
 VAR_22 = VAR_13->ksi_signo;
 VAR_19 = VAR_17->p_sigacts;
 VAR_23 = VAR_13->ksi_code;
 FUNC_12(&VAR_19->ps_mtx, VAR_2);
 VAR_21 = VAR_18->td_frame;
 VAR_24 = FUNC_17(VAR_21->tf_rsp);

 FUNC_0(VAR_11, "%p, %d, %p, %u",
     VAR_12, VAR_22, VAR_14, VAR_23);


 if ((VAR_18->td_pflags & VAR_7) != 0 && !VAR_24 &&
     FUNC_5(VAR_19->ps_sigonstack, VAR_22)) {
  VAR_20 = (caddr_t)VAR_18->td_sigstk.ss_sp + VAR_18->td_sigstk.ss_size -
      sizeof(struct l_rt_sigframe);
 } else
  VAR_20 = (caddr_t)VAR_21->tf_rsp - sizeof(struct l_rt_sigframe) - 128;

 VAR_16 = (struct l_rt_sigframe *)((unsigned long)VAR_20 & ~0xFul);
 FUNC_14(&VAR_19->ps_mtx);


 VAR_22 = FUNC_6(VAR_22);


 FUNC_9(&VAR_15, sizeof(VAR_15));
 FUNC_7(VAR_14, &VAR_15.sf_sc.uc_sigmask);
 FUNC_7(VAR_14, &VAR_15.sf_sc.uc_mcontext.sc_mask);

 VAR_15.sf_sc.uc_stack.ss_sp = FUNC_4(VAR_18->td_sigstk.ss_sp);
 VAR_15.sf_sc.uc_stack.ss_size = VAR_18->td_sigstk.ss_size;
 VAR_15.sf_sc.uc_stack.ss_flags = (VAR_18->td_pflags & VAR_7)
     ? ((VAR_24) ? VAR_1 : 0) : VAR_0;
 FUNC_3(VAR_17);

 VAR_15.sf_sc.uc_mcontext.sc_rdi = VAR_21->tf_rdi;
 VAR_15.sf_sc.uc_mcontext.sc_rsi = VAR_21->tf_rsi;
 VAR_15.sf_sc.uc_mcontext.sc_rdx = VAR_21->tf_rdx;
 VAR_15.sf_sc.uc_mcontext.sc_rbp = VAR_21->tf_rbp;
 VAR_15.sf_sc.uc_mcontext.sc_rbx = VAR_21->tf_rbx;
 VAR_15.sf_sc.uc_mcontext.sc_rcx = VAR_21->tf_rcx;
 VAR_15.sf_sc.uc_mcontext.sc_rax = VAR_21->tf_rax;
 VAR_15.sf_sc.uc_mcontext.sc_rip = VAR_21->tf_rip;
 VAR_15.sf_sc.uc_mcontext.sc_rsp = VAR_21->tf_rsp;
 VAR_15.sf_sc.uc_mcontext.sc_r8 = VAR_21->tf_r8;
 VAR_15.sf_sc.uc_mcontext.sc_r9 = VAR_21->tf_r9;
 VAR_15.sf_sc.uc_mcontext.sc_r10 = VAR_21->tf_r10;
 VAR_15.sf_sc.uc_mcontext.sc_r11 = VAR_21->tf_r11;
 VAR_15.sf_sc.uc_mcontext.sc_r12 = VAR_21->tf_r12;
 VAR_15.sf_sc.uc_mcontext.sc_r13 = VAR_21->tf_r13;
 VAR_15.sf_sc.uc_mcontext.sc_r14 = VAR_21->tf_r14;
 VAR_15.sf_sc.uc_mcontext.sc_r15 = VAR_21->tf_r15;
 VAR_15.sf_sc.uc_mcontext.sc_cs = VAR_21->tf_cs;
 VAR_15.sf_sc.uc_mcontext.sc_rflags = VAR_21->tf_rflags;
 VAR_15.sf_sc.uc_mcontext.sc_err = VAR_21->tf_err;
 VAR_15.sf_sc.uc_mcontext.sc_trapno = FUNC_8(VAR_23);
 VAR_15.sf_sc.uc_mcontext.sc_cr2 = (register_t)VAR_13->ksi_addr;


 VAR_21->tf_rdi = VAR_22;
 VAR_21->tf_rax = 0;
 VAR_21->tf_rsi = (register_t)&VAR_16->sf_si;
 VAR_21->tf_rdx = (register_t)&VAR_16->sf_sc;

 VAR_15.sf_handler = VAR_12;

 FUNC_11(VAR_13, &VAR_15.sf_si, VAR_22);


 if (FUNC_10(&VAR_15, VAR_16, sizeof(*VAR_16)) != 0) {
  FUNC_1(VAR_17);
  FUNC_16(VAR_18, VAR_6);
 }

 VAR_21->tf_rsp = (long)VAR_16;
 VAR_21->tf_rip = VAR_10;
 VAR_21->tf_rflags &= ~(VAR_5 | VAR_4);
 VAR_21->tf_cs = VAR_8;
 FUNC_15(VAR_18->td_pcb, VAR_3);
 FUNC_1(VAR_17);
 FUNC_13(&VAR_19->ps_mtx);
}
