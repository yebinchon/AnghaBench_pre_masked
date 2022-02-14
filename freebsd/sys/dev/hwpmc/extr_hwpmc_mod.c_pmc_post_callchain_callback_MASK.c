
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pflags; } ;


 int VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct thread *VAR_2;

 VAR_2 = VAR_1;




 if (VAR_2->td_pflags & VAR_0)
  return;






 VAR_2->td_pflags |= VAR_0;





 FUNC_0();

 return;
}
