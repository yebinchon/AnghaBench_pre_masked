
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {struct pcb* td_pcb; } ;
struct TYPE_2__ {int vfp_fpsr; int vfp_fpcr; int vfp_regs; } ;
struct pcb {int pcb_fpflags; TYPE_1__ pcb_fpustate; TYPE_1__* pcb_fpusaved; } ;
struct fpreg {int fp_sr; int fp_cr; int fp_q; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct fpreg*,int ,int) ;
 int FUNC_3 (struct thread*,struct pcb*) ;

int
FUNC_4(struct thread *VAR_2, struct fpreg *VAR_3)
{
  FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 return (0);
}
