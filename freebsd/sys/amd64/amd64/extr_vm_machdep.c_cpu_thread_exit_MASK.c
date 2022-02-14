
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct pcb* td_pcb; } ;
struct pcb {int pcb_flags; } ;


 int VAR_0 ;
 struct thread* FUNC_0 (int ) ;
 int FUNC_1 (struct pcb*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void
FUNC_6(struct thread *VAR_2)
{
 struct pcb *VAR_3;

 FUNC_2();
 if (VAR_2 == FUNC_0(VAR_1))
  FUNC_4();
 FUNC_3();

 VAR_3 = VAR_2->td_pcb;


 if (VAR_3->pcb_flags & VAR_0) {
  FUNC_5();
  FUNC_1(VAR_3, VAR_0);
 }
}
