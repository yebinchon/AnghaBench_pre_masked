
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unwind_state {int * registers; } ;
struct thread {TYPE_2__* td_pcb; } ;
struct stack {int dummy; } ;
struct TYPE_3__ {int sf_pc; int sf_lr; int sf_sp; int sf_r11; } ;
struct TYPE_4__ {TYPE_1__ pcb_regs; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,char*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct stack*,struct unwind_state*) ;

void
FUNC_4(struct stack *VAR_4, struct thread *VAR_5)
{
 struct unwind_state VAR_6;

 FUNC_0(!FUNC_2(VAR_5), ("stack_save_td: swapped"));
 FUNC_0(!FUNC_1(VAR_5), ("stack_save_td: running"));

 VAR_6.registers[VAR_0] = VAR_5->td_pcb->pcb_regs.sf_r11;
 VAR_6.registers[VAR_3] = VAR_5->td_pcb->pcb_regs.sf_sp;
 VAR_6.registers[VAR_1] = VAR_5->td_pcb->pcb_regs.sf_lr;
 VAR_6.registers[VAR_2] = VAR_5->td_pcb->pcb_regs.sf_pc;

 FUNC_3(VAR_4, &VAR_6);
}
