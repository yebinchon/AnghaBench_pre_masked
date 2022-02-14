
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_pcb; TYPE_1__* td_proc; } ;
struct TYPE_2__ {int p_pid; } ;


 struct thread* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct thread* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,struct thread*,int,struct thread*,int) ;
 int FUNC_6 (struct thread*,int ) ;
 int FUNC_7 () ;

int
FUNC_8(void)
{
 struct thread *VAR_3;

 if (!VAR_2)
  return (0);
 VAR_3 = VAR_0;
 FUNC_2();
 if (FUNC_1(FUNC_0(VAR_1) == VAR_3)) {






  FUNC_7();
 } else {
  if (FUNC_1(FUNC_0(VAR_1) != ((void*)0))) {
   FUNC_5(
      "npxdna: fpcurthread = %p (%d), curthread = %p (%d)\n",
       FUNC_0(VAR_1),
       FUNC_0(VAR_1)->td_proc->p_pid,
       VAR_3, VAR_3->td_proc->p_pid);
   FUNC_4("npxdna");
  }
  FUNC_6(VAR_3, VAR_3->td_pcb);
 }
 FUNC_3();
 return (1);
}
