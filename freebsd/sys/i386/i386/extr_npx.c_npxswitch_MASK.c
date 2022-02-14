
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pflags; } ;
struct pcb {int dummy; } ;


 int FUNC_0 (struct pcb*) ;
 struct thread* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct thread*,struct pcb*) ;
 int FUNC_4 () ;

void
FUNC_5(struct thread *VAR_3, struct pcb *VAR_4)
{

 if (VAR_2 || (VAR_3->td_pflags & VAR_0) != 0 ||
     !FUNC_0(VAR_4)) {
  FUNC_4();
  FUNC_2(VAR_1, ((void*)0));
 } else if (FUNC_1(VAR_1) != VAR_3) {
  FUNC_3(VAR_3, VAR_4);
 }
}
