
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_pcb; } ;
struct TYPE_2__ {int pcb_flags; } ;


 int VAR_0 ;
 struct thread* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void
FUNC_5(struct thread *VAR_2)
{

 FUNC_1();
 if (VAR_2 == FUNC_0(VAR_1))
  FUNC_3();
 FUNC_2();


 if (VAR_2->td_pcb->pcb_flags & VAR_0) {
  FUNC_4();
  VAR_2->td_pcb->pcb_flags &= ~VAR_0;
 }
}
