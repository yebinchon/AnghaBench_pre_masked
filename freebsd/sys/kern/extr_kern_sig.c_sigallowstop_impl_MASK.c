
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct thread* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

void
FUNC_4(int VAR_5)
{
 struct thread *VAR_6;
 int VAR_7;

 FUNC_0(VAR_5 != VAR_0, ("failed sigallowstop"));
 FUNC_0((VAR_5 & ~(VAR_1 | VAR_2 | VAR_3)) == 0,
     ("sigallowstop: incorrect previous mode %x", VAR_5));
 VAR_6 = VAR_4;
 VAR_7 = FUNC_1(VAR_6->td_flags);
 if (VAR_7 != VAR_5) {
  FUNC_2(VAR_6);
  VAR_6->td_flags = (VAR_6->td_flags & ~VAR_7) | VAR_5;
  FUNC_3(VAR_6);
 }
}
