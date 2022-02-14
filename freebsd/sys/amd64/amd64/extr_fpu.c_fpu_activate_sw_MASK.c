
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pflags; int td_pcb; } ;


 int FUNC_0 (int ) ;
 struct thread* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 () ;

void
FUNC_5(struct thread *VAR_2)
{

 if ((VAR_2->td_pflags & VAR_0) != 0 || !FUNC_0(VAR_2->td_pcb)) {
  FUNC_2(VAR_1, ((void*)0));
  FUNC_4();
 } else if (FUNC_1(VAR_1) != VAR_2) {
  FUNC_3(VAR_2);
 }
}
