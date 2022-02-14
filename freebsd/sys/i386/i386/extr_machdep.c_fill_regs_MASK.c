
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;
struct thread {struct pcb* td_pcb; struct trapframe* td_frame; } ;
struct reg {int r_gs; } ;
struct pcb {int pcb_gs; } ;


 int FUNC_0 (struct trapframe*,struct reg*) ;

int
FUNC_1(struct thread *VAR_0, struct reg *VAR_1)
{
 struct pcb *VAR_2;
 struct trapframe *VAR_3;

 VAR_3 = VAR_0->td_frame;
 VAR_2 = VAR_0->td_pcb;
 VAR_1->r_gs = VAR_2->pcb_gs;
 return (FUNC_0(VAR_3, VAR_1));
}
