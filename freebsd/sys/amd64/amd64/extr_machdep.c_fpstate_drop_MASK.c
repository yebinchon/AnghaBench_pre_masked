
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_pcb; } ;
struct TYPE_2__ {int td_pcb; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct thread* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_6 () ;

void
FUNC_7(struct thread *VAR_4)
{

 FUNC_0(FUNC_1(VAR_4->td_pcb), ("fpstate_drop: kernel-owned fpu"));
 FUNC_4();
 if (FUNC_2(VAR_3) == VAR_4)
  FUNC_6();
 FUNC_3(VAR_2->td_pcb,
     VAR_0 | VAR_1);
 FUNC_5();
}
