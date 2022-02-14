
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_sp; int tf_elr; int tf_lr; int * tf_x; } ;
struct pcb {int pcb_sp; int pcb_pc; int * pcb_x; } ;


 int VAR_0 ;

void
FUNC_0(struct trapframe *VAR_1, struct pcb *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->pcb_x[VAR_3] = VAR_1->tf_x[VAR_3];

 VAR_2->pcb_x[VAR_0] = VAR_1->tf_lr;
 VAR_2->pcb_pc = VAR_1->tf_elr;
 VAR_2->pcb_sp = VAR_1->tf_sp;
}
