
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

void
FUNC_4(void *VAR_2, int VAR_3)
{
 struct thread *VAR_4;

 VAR_4 = VAR_1;
 FUNC_0(!(VAR_4->td_flags & VAR_0));
 FUNC_2(VAR_4);
 FUNC_1(VAR_2, VAR_3);
 FUNC_3(VAR_4);
}
