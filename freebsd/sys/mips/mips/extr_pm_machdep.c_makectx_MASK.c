
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int sp; int pc; int ra; } ;
struct pcb {int * pcb_context; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

void
FUNC_0(struct trapframe *VAR_3, struct pcb *VAR_4)
{

 VAR_4->pcb_context[VAR_1] = VAR_3->ra;
 VAR_4->pcb_context[VAR_0] = VAR_3->pc;
 VAR_4->pcb_context[VAR_2] = VAR_3->sp;
}
