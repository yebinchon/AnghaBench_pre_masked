
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct trapframe {int tf_eflags; int tf_ebx; int tf_cs; void* tf_fs; void* tf_es; void* tf_ds; void* tf_ss; int tf_esp; int tf_eip; } ;
struct thread {TYPE_3__* td_proc; struct pcb* td_pcb; struct trapframe* td_frame; } ;
struct pcb {int pcb_flags; int pcb_initial_npxcw; scalar_t__ pcb_dr7; scalar_t__ pcb_dr6; scalar_t__ pcb_dr3; scalar_t__ pcb_dr2; scalar_t__ pcb_dr1; scalar_t__ pcb_dr0; void* pcb_gs; } ;
struct image_params {int ps_strings; int entry_addr; } ;
typedef int register_t ;
struct TYPE_8__ {scalar_t__ sv_psstrings; } ;
struct TYPE_5__ {int * md_ldt; } ;
struct TYPE_7__ {TYPE_2__* p_sysent; TYPE_1__ p_md; } ;
struct TYPE_6__ {scalar_t__ sv_psstrings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (char*,int) ;
 struct pcb* VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct thread*,int ) ;
 int FUNC_7 (struct thread*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct thread*) ;

void
FUNC_10(struct thread *VAR_9, struct image_params *VAR_10, u_long VAR_11)
{
 struct trapframe *VAR_12;
 struct pcb *VAR_13;
 register_t VAR_14;

 VAR_12 = VAR_9->td_frame;
 VAR_13 = VAR_9->td_pcb;


 VAR_13->pcb_gs = VAR_5;
 FUNC_2(VAR_5);

 FUNC_3(&VAR_7);
 if (VAR_9->td_proc->p_md.md_ldt != ((void*)0))
  FUNC_9(VAR_9);
 else
  FUNC_4(&VAR_7);
 FUNC_6(VAR_9, 0);
 FUNC_7(VAR_9, 0);


 VAR_14 = VAR_12->tf_eflags & VAR_1;
 FUNC_0((char *)VAR_12, sizeof(struct trapframe));
 VAR_12->tf_eip = VAR_10->entry_addr;
 VAR_12->tf_esp = VAR_11;
 VAR_12->tf_eflags = VAR_2 | VAR_14;
 VAR_12->tf_ss = VAR_5;
 VAR_12->tf_ds = VAR_5;
 VAR_12->tf_es = VAR_5;
 VAR_12->tf_fs = VAR_5;
 VAR_12->tf_cs = VAR_4;


 VAR_12->tf_ebx = VAR_10->ps_strings;





        if (VAR_13->pcb_flags & VAR_0) {
                VAR_13->pcb_dr0 = 0;
                VAR_13->pcb_dr1 = 0;
                VAR_13->pcb_dr2 = 0;
                VAR_13->pcb_dr3 = 0;
                VAR_13->pcb_dr6 = 0;
                VAR_13->pcb_dr7 = 0;
                if (VAR_13 == VAR_6) {





          FUNC_5();
                }
  VAR_13->pcb_flags &= ~VAR_0;
        }

 VAR_13->pcb_initial_npxcw = VAR_3;





 FUNC_1(VAR_9);
}
