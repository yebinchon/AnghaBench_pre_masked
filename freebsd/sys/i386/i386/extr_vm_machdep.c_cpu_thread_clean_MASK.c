
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct pcb* td_pcb; } ;
struct pcb {int * pcb_ext; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct thread *VAR_1)
{
 struct pcb *VAR_2;

 VAR_2 = VAR_1->td_pcb;
 if (VAR_2->pcb_ext != ((void*)0)) {





  FUNC_1(VAR_2->pcb_ext, FUNC_0(VAR_0 + 1));
  VAR_2->pcb_ext = ((void*)0);
 }
}
