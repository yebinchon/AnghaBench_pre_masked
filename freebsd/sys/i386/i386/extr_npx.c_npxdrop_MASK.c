
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_pcb; } ;
struct TYPE_2__ {int pcb_flags; } ;


 int FUNC_0 (struct thread*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 struct thread* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 struct thread* VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 () ;

void
FUNC_6(void)
{
 struct thread *VAR_4;





 if (!VAR_1)
  FUNC_4();

 VAR_4 = FUNC_2(VAR_3);
 FUNC_1(VAR_4 == VAR_2, ("fpudrop: fpcurthread != curthread"));
 FUNC_0(VAR_4);
 FUNC_3(VAR_3, ((void*)0));
 VAR_4->td_pcb->pcb_flags &= ~VAR_0;
 FUNC_5();
}
