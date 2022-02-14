
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_register_t ;
struct stack {int dummy; } ;
struct TYPE_6__ {TYPE_2__* td_pcb; } ;
struct TYPE_4__ {int sp; int pc; } ;
struct TYPE_5__ {TYPE_1__ pcb_regs; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct stack*,int ,int ) ;

void
FUNC_2(struct stack *VAR_1)
{
 u_register_t VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
  FUNC_0("stack_save: curthread == NULL");

 VAR_2 = VAR_0->td_pcb->pcb_regs.pc;
 VAR_3 = VAR_0->td_pcb->pcb_regs.sp;
 FUNC_1(VAR_1, VAR_2, VAR_3);
}
