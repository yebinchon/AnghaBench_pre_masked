
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {struct pcb* td_pcb; } ;
struct TYPE_2__ {int vfp_fpsr; int vfp_fpcr; int vfp_regs; } ;
struct pcb {TYPE_1__ pcb_fpustate; TYPE_1__* pcb_fpusaved; } ;
struct fpreg {int fp_sr; int fp_cr; int fp_q; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int) ;

int
FUNC_2(struct thread *VAR_0, struct fpreg *VAR_1)
{
 return (0);
}
