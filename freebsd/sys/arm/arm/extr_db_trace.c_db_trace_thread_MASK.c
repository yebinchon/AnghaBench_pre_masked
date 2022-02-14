
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unwind_state {int * registers; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int sf_pc; int sf_lr; int sf_sp; int sf_r11; } ;
struct pcb {TYPE_1__ pcb_regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct thread* VAR_4 ;
 int FUNC_0 (struct unwind_state*) ;
 int FUNC_1 () ;
 struct pcb* FUNC_2 (struct thread*) ;

int
FUNC_3(struct thread *VAR_5, int VAR_6)
{
 struct unwind_state VAR_7;
 struct pcb *VAR_8;

 if (VAR_5 != VAR_4) {
  VAR_8 = FUNC_2(VAR_5);

  VAR_7.registers[VAR_0] = VAR_8->pcb_regs.sf_r11;
  VAR_7.registers[VAR_3] = VAR_8->pcb_regs.sf_sp;
  VAR_7.registers[VAR_1] = VAR_8->pcb_regs.sf_lr;
  VAR_7.registers[VAR_2] = VAR_8->pcb_regs.sf_pc;

  FUNC_0(&VAR_7);
 } else
  FUNC_1();
 return (0);
}
