
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;
struct thread {int dummy; } ;
struct pcb {int pcb_esp; int pcb_eip; scalar_t__ pcb_ebp; } ;
struct i386_frame {int dummy; } ;


 int FUNC_0 (struct thread*,struct trapframe*,struct i386_frame*,int ,int ,int) ;
 struct trapframe* VAR_0 ;
 struct pcb* FUNC_1 (struct thread*) ;
 struct thread* VAR_1 ;

int
FUNC_2(struct thread *VAR_2, int VAR_3)
{
 struct pcb *VAR_4;
 struct trapframe *VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = VAR_2 == VAR_1 ? VAR_0 : ((void*)0);
 return (FUNC_0(VAR_2, VAR_5, (struct i386_frame *)VAR_4->pcb_ebp,
     VAR_4->pcb_eip, VAR_4->pcb_esp, VAR_3));
}
