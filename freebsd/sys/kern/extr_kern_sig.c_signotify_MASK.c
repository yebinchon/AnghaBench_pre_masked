
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; int td_proc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct thread*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

void
FUNC_4(struct thread *VAR_3)
{

 FUNC_0(VAR_3->td_proc, VAR_0);

 if (FUNC_1(VAR_3)) {
  FUNC_2(VAR_3);
  VAR_3->td_flags |= VAR_2 | VAR_1;
  FUNC_3(VAR_3);
 }
}
