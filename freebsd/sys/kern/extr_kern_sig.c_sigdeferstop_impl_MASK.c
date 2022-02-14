
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct thread* VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

int
FUNC_4(int VAR_5)
{
 struct thread *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = VAR_4;
 VAR_7 = FUNC_1(VAR_6->td_flags);
 switch (VAR_5) {
 case 130:
  VAR_8 = VAR_7;
  break;
 case 129:
  VAR_8 = 0;
  break;
 case 128:
  VAR_8 = (VAR_7 | VAR_1) & ~(VAR_2 | VAR_3);
  break;
 case 132:
  VAR_8 = (VAR_7 | VAR_1 | VAR_2) & ~VAR_3;
  break;
 case 131:
  VAR_8 = (VAR_7 | VAR_1 | VAR_3) & ~VAR_2;
  break;
 default:
  FUNC_0("sigdeferstop: invalid mode %x", VAR_5);
  break;
 }
 if (VAR_7 == VAR_8)
  return (VAR_0);
 FUNC_2(VAR_6);
 VAR_6->td_flags = (VAR_6->td_flags & ~VAR_7) | VAR_8;
 FUNC_3(VAR_6);
 return (VAR_7);
}
