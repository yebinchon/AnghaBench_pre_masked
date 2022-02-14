
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_register_t ;
struct thread {TYPE_2__* td_pcb; } ;
struct stack {int dummy; } ;
struct TYPE_3__ {int sp; int pc; } ;
struct TYPE_4__ {TYPE_1__ pcb_regs; } ;


 scalar_t__ FUNC_0 (struct thread*) ;
 scalar_t__ FUNC_1 (struct thread*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct stack*,int ,int ) ;

void
FUNC_4(struct stack *VAR_0, struct thread *VAR_1)
{
 u_register_t VAR_2, VAR_3;

 if (FUNC_1(VAR_1))
  FUNC_2("stack_save_td: swapped");
 if (FUNC_0(VAR_1))
  FUNC_2("stack_save_td: running");

 VAR_2 = VAR_1->td_pcb->pcb_regs.pc;
 VAR_3 = VAR_1->td_pcb->pcb_regs.sp;
 FUNC_3(VAR_0, VAR_2, VAR_3);
}
