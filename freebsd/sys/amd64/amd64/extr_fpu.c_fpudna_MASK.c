
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_tid; } ;
struct TYPE_2__ {int pcb_flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct thread* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* VAR_1 ;
 struct thread* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,struct thread*,int ,struct thread*,int ) ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 () ;

void
FUNC_8(void)
{
 struct thread *VAR_4;

 VAR_4 = VAR_2;
 FUNC_3();

 FUNC_0((VAR_1->pcb_flags & VAR_0) == 0,
     ("fpudna while in fpu_kern_enter(FPU_KERN_NOCTX)"));
 if (FUNC_2(FUNC_1(VAR_3) == VAR_4)) {






  FUNC_7();
 } else {
  if (FUNC_2(FUNC_1(VAR_3) != ((void*)0))) {
   FUNC_5(
      "fpudna: fpcurthread = %p (%d), curthread = %p (%d)\n",
       FUNC_1(VAR_3),
       FUNC_1(VAR_3)->td_tid, VAR_4, VAR_4->td_tid);
  }
  FUNC_6(VAR_4);
 }
 FUNC_4();
}
