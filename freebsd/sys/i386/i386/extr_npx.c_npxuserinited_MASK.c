
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct pcb* td_pcb; } ;
struct pcb {int pcb_flags; } ;


 int FUNC_0 (struct thread*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct pcb*) ;

void
FUNC_2(struct thread *VAR_2)
{
 struct pcb *VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = VAR_2->td_pcb;
 if (FUNC_1(VAR_3))
  VAR_3->pcb_flags |= VAR_0;
 VAR_3->pcb_flags |= VAR_1;
}
