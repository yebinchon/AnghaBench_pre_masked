
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int td_pcb; } ;
struct TYPE_4__ {TYPE_1__* td_pcb; } ;
struct TYPE_3__ {int pcb_flags; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct thread* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(struct thread *VAR_4)
{

 FUNC_0(FUNC_1(VAR_4->td_pcb), ("fpstate_drop: kernel-owned fpu"));
 FUNC_3();
 if (FUNC_2(VAR_3) == VAR_4)
  FUNC_5();
 VAR_2->td_pcb->pcb_flags &= ~(VAR_0 |
     VAR_1);
 FUNC_4();
}
