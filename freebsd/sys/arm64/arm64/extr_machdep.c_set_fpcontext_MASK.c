
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_6__ {int vfp_fpsr; int vfp_fpcr; int vfp_regs; } ;
struct pcb {int pcb_fpflags; TYPE_1__ pcb_fpustate; TYPE_1__* pcb_fpusaved; } ;
struct TYPE_7__ {int fp_flags; int fp_sr; int fp_cr; int fp_q; } ;
struct TYPE_8__ {int mc_flags; TYPE_2__ mc_fpregs; } ;
typedef TYPE_3__ mcontext_t ;
struct TYPE_9__ {struct pcb* td_pcb; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_5__* VAR_2 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct thread*) ;

__attribute__((used)) static void
FUNC_5(struct thread *VAR_3, mcontext_t *VAR_4)
{
}
