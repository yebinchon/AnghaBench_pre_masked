
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct trapframe {int tf_ss; int tf_esp; int tf_cs; int tf_eip; int tf_ecx; int tf_ebx; int tf_edx; int tf_eax; int tf_eflags; int tf_isp; int tf_ebp; int tf_esi; int tf_edi; int tf_ds; int tf_es; int tf_fs; } ;
struct thread {TYPE_1__* td_pcb; struct trapframe* td_frame; } ;
struct segment_descriptor {int sd_hibase; int sd_lobase; } ;
struct TYPE_7__ {int mc_len; int mc_fsbase; int mc_gsbase; int mc_spare2; scalar_t__ mc_xfpustate_len; scalar_t__ mc_xfpustate; scalar_t__ mc_flags; int mc_ss; int mc_esp; int mc_cs; int mc_eip; int mc_ecx; int mc_ebx; int mc_edx; int mc_eax; int mc_eflags; int mc_isp; int mc_ebp; int mc_esi; int mc_edi; int mc_ds; int mc_es; int mc_fs; int mc_gs; int mc_onstack; } ;
typedef TYPE_2__ mcontext_t ;
struct TYPE_8__ {int td_proc; } ;
struct TYPE_6__ {struct segment_descriptor pcb_gsd; struct segment_descriptor pcb_fsd; int pcb_gs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 TYPE_5__* VAR_2 ;
 int FUNC_3 (struct thread*,TYPE_2__*,int *,int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct thread *VAR_3, mcontext_t *VAR_4, int VAR_5)
{
 struct trapframe *VAR_6;
 struct segment_descriptor *VAR_7;

 VAR_6 = VAR_3->td_frame;

 FUNC_0(VAR_2->td_proc);
 VAR_4->mc_onstack = FUNC_4(VAR_6->tf_esp);
 FUNC_1(VAR_2->td_proc);
 VAR_4->mc_gs = VAR_3->td_pcb->pcb_gs;
 VAR_4->mc_fs = VAR_6->tf_fs;
 VAR_4->mc_es = VAR_6->tf_es;
 VAR_4->mc_ds = VAR_6->tf_ds;
 VAR_4->mc_edi = VAR_6->tf_edi;
 VAR_4->mc_esi = VAR_6->tf_esi;
 VAR_4->mc_ebp = VAR_6->tf_ebp;
 VAR_4->mc_isp = VAR_6->tf_isp;
 VAR_4->mc_eflags = VAR_6->tf_eflags;
 if (VAR_5 & VAR_0) {
  VAR_4->mc_eax = 0;
  VAR_4->mc_edx = 0;
  VAR_4->mc_eflags &= ~VAR_1;
 } else {
  VAR_4->mc_eax = VAR_6->tf_eax;
  VAR_4->mc_edx = VAR_6->tf_edx;
 }
 VAR_4->mc_ebx = VAR_6->tf_ebx;
 VAR_4->mc_ecx = VAR_6->tf_ecx;
 VAR_4->mc_eip = VAR_6->tf_eip;
 VAR_4->mc_cs = VAR_6->tf_cs;
 VAR_4->mc_esp = VAR_6->tf_esp;
 VAR_4->mc_ss = VAR_6->tf_ss;
 VAR_4->mc_len = sizeof(*VAR_4);
 FUNC_3(VAR_3, VAR_4, ((void*)0), 0);
 VAR_7 = &VAR_3->td_pcb->pcb_fsd;
 VAR_4->mc_fsbase = VAR_7->sd_hibase << 24 | VAR_7->sd_lobase;
 VAR_7 = &VAR_3->td_pcb->pcb_gsd;
 VAR_4->mc_gsbase = VAR_7->sd_hibase << 24 | VAR_7->sd_lobase;
 VAR_4->mc_flags = 0;
 VAR_4->mc_xfpustate = 0;
 VAR_4->mc_xfpustate_len = 0;
 FUNC_2(VAR_4->mc_spare2, sizeof(VAR_4->mc_spare2));
 return (0);
}
