
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pcb {scalar_t__* pcb_context; } ;
typedef scalar_t__ register_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct pcb* FUNC_0 (struct thread*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;

int
FUNC_2(struct thread *VAR_3, int VAR_4)
{
 register_t VAR_5, VAR_6, VAR_7;
 struct pcb *VAR_8;

 VAR_8 = FUNC_0(VAR_3);
 VAR_7 = (register_t)VAR_8->pcb_context[VAR_2];
 VAR_5 = (register_t)VAR_8->pcb_context[VAR_0];
 VAR_6 = (register_t)VAR_8->pcb_context[VAR_1];
 FUNC_1(VAR_5, VAR_7, VAR_6);

 return (0);
}
