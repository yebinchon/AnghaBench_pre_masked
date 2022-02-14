
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; } ;
typedef scalar_t__ fixpt_t ;





 int VAR_0 ;
 int FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread*) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_1, struct thread *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5, VAR_6;
 fixpt_t VAR_7, VAR_8;

 if (VAR_1 == ((void*)0))
  return (1);




 FUNC_4(VAR_1);
 VAR_3 = FUNC_0(VAR_1) | FUNC_1(VAR_1);
 VAR_5 = VAR_1->td_flags & VAR_0;
 VAR_7 = FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 FUNC_4(VAR_2);
 VAR_4 = FUNC_0(VAR_2) | FUNC_1(VAR_2);
 VAR_8 = FUNC_3(VAR_2);
 VAR_6 = VAR_2->td_flags & VAR_0;
 FUNC_5(VAR_2);



 switch (FUNC_2(VAR_3, VAR_4)) {
 case 129:
  return (0);
 case 128:
  return (1);
 case 130:
  break;
 }



 if (VAR_8 > VAR_7)
  return (1);
 if (VAR_7 > VAR_8)
  return (0);



 switch (FUNC_2(VAR_5, VAR_6)) {
 case 129:
  return (0);
 case 128:
  return (1);
 case 130:
  break;
 }

 return (VAR_1 < VAR_2);
}
