
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
struct trapframe {int* tf_x; int tf_elr; int tf_spsr; } ;
struct TYPE_8__ {scalar_t__ ss_size; scalar_t__ ss_sp; int ss_flags; } ;
struct thread {int td_pflags; struct proc* td_proc; TYPE_2__ td_sigstk; struct trapframe* td_frame; } ;
struct sysentvec {scalar_t__ sv_sigcode_base; scalar_t__* sv_szsigcode; scalar_t__ sv_psstrings; } ;
struct siginfo32 {int dummy; } ;
struct TYPE_7__ {uintptr_t ss_sp; scalar_t__ ss_size; int ss_flags; } ;
struct TYPE_11__ {int mc_vfp_size; void* mc_vfp_ptr; } ;
struct TYPE_9__ {TYPE_1__ uc_stack; int uc_sigmask; TYPE_5__ uc_mcontext; } ;
struct sigframe32 {TYPE_3__ sf_uc; struct siginfo32 sf_si; int sf_vfp; } ;
struct sigacts {int ps_mtx; int ps_sigonstack; } ;
struct proc {struct sysentvec* p_sysent; int p_comm; struct sigacts* p_sigacts; } ;
typedef int sigset_t ;
typedef scalar_t__ sig_t ;
typedef int register_t ;
struct TYPE_10__ {int ksi_signo; int ksi_code; int ksi_info; } ;
typedef TYPE_4__ ksiginfo_t ;
typedef scalar_t__ fp ;


 int FUNC_0 (int ,char*,struct thread*,struct sigframe32*) ;
 int FUNC_1 (int ,char*,struct thread*,int,int) ;
 int FUNC_2 (int ,char*,struct thread*,int ,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*,int ) ;
 int FUNC_5 (struct proc*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct sigframe32*,struct sigframe32*,int) ;
 struct thread* VAR_7 ;
 int FUNC_8 (struct thread*,int *) ;
 int FUNC_9 (struct thread*,TYPE_5__*,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct thread*,int ) ;
 int FUNC_14 (int *,struct siginfo32*) ;
 int FUNC_15 (int) ;

void
FUNC_16(sig_t VAR_8, ksiginfo_t *VAR_9, sigset_t *VAR_10)
{
 struct thread *VAR_11;
 struct proc *VAR_12;
 struct trapframe *VAR_13;
 struct sigframe32 *VAR_14, VAR_15;
 struct sigacts *VAR_16;
 struct siginfo32 VAR_17;
 struct sysentvec *VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 FUNC_14(&VAR_9->ksi_info, &VAR_17);
 VAR_11 = VAR_7;
 VAR_12 = VAR_11->td_proc;
 FUNC_4(VAR_12, VAR_1);
 VAR_20 = VAR_9->ksi_signo;
 VAR_21 = VAR_9->ksi_code;
 VAR_16 = VAR_12->p_sigacts;
 FUNC_10(&VAR_16->ps_mtx, VAR_1);
 VAR_13 = VAR_11->td_frame;
 VAR_19 = FUNC_15(VAR_13->tf_x[13]);

 FUNC_2(VAR_0, "sendsig: td=%p (%s) catcher=%p sig=%d", VAR_11, VAR_12->p_comm,
     VAR_8, VAR_20);


 if ((VAR_11->td_pflags & VAR_6) != 0 && !(VAR_19) &&
     FUNC_6(VAR_16->ps_sigonstack, VAR_20)) {
  VAR_14 = (struct sigframe32 *)((uintptr_t)VAR_11->td_sigstk.ss_sp +
      VAR_11->td_sigstk.ss_size);



 } else
  VAR_14 = (struct sigframe32 *)VAR_11->td_frame->tf_x[13];


 VAR_14--;


 VAR_14 = (struct sigframe32 *)((unsigned long)(VAR_14) &~ (8 - 1));

 FUNC_9(VAR_11, &VAR_15.sf_uc.uc_mcontext, 0);





 VAR_15.sf_uc.uc_mcontext.mc_vfp_size = 0;
 VAR_15.sf_uc.uc_mcontext.mc_vfp_ptr = (uint32_t)((void*)0);

 VAR_15.sf_si = VAR_17;
 VAR_15.sf_uc.uc_sigmask = *VAR_10;
 VAR_15.sf_uc.uc_stack.ss_flags = (VAR_11->td_pflags & VAR_6 )
     ? ((VAR_19) ? VAR_5 : 0) : VAR_4;
 VAR_15.sf_uc.uc_stack.ss_sp = (uintptr_t)VAR_11->td_sigstk.ss_sp;
 VAR_15.sf_uc.uc_stack.ss_size = VAR_11->td_sigstk.ss_size;

 FUNC_12(&VAR_16->ps_mtx);
 FUNC_5(VAR_11->td_proc);


 if (FUNC_7(&VAR_15, VAR_14, sizeof(*VAR_14)) != 0) {

  FUNC_0(VAR_0, "sendsig: sigexit td=%p fp=%p", VAR_11, VAR_14);
  FUNC_3(VAR_12);
  FUNC_13(VAR_11, VAR_3);
 }
 VAR_13->tf_x[0] = VAR_20;
 VAR_13->tf_x[1] = (register_t)&VAR_14->sf_si;
 VAR_13->tf_x[2] = (register_t)&VAR_14->sf_uc;


 VAR_13->tf_x[5] = (register_t)&VAR_14->sf_uc;
 VAR_13->tf_elr = (register_t)VAR_8;
 VAR_13->tf_x[13] = (register_t)VAR_14;
 VAR_18 = VAR_12->p_sysent;
 if (VAR_18->sv_sigcode_base != 0)
  VAR_13->tf_x[14] = (register_t)VAR_18->sv_sigcode_base;
 else
  VAR_13->tf_x[14] = (register_t)(VAR_18->sv_psstrings -
      *(VAR_18->sv_szsigcode));

 if ((register_t)VAR_8 & 1)
  VAR_13->tf_spsr |= VAR_2;
 else
  VAR_13->tf_spsr &= ~VAR_2;

 FUNC_1(VAR_0, "sendsig: return td=%p pc=%#x sp=%#x", VAR_11, VAR_13->tf_x[14],
     VAR_13->tf_x[13]);

 FUNC_3(VAR_12);
 FUNC_11(&VAR_16->ps_mtx);

}
