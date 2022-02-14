
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (struct proc*,int ) ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (struct thread*,int ) ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (struct thread*,struct proc*,int) ;

__attribute__((used)) static int
FUNC_8(int VAR_7, struct thread *VAR_8, struct proc *VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_9, VAR_2);
 FUNC_1(VAR_9, VAR_2);
 FUNC_4(VAR_8, VAR_2);

 VAR_10 = 0;
 switch (VAR_7) {
 case 129:
  if (FUNC_2(VAR_8))
   VAR_10 |= FUNC_7(VAR_8, VAR_9, 1);
  if (FUNC_3(VAR_8) && (VAR_8->td_flags & VAR_6) != 0)
   VAR_10 |= FUNC_5(VAR_8, VAR_0);
  break;
 case 130:
 case 128:
  if (FUNC_2(VAR_8) && (VAR_8->td_flags & VAR_4) == 0)
   VAR_10 |= FUNC_7(VAR_8, VAR_9, 0);
  if (FUNC_3(VAR_8) && (VAR_8->td_flags & VAR_6) != 0)
   VAR_10 |= FUNC_5(VAR_8, VAR_1);
  break;
 case 131:
  if (FUNC_2(VAR_8) && (VAR_8->td_flags & (VAR_4 |
      VAR_3)) == 0)
   VAR_10 |= FUNC_7(VAR_8, VAR_9, 0);
  if (FUNC_3(VAR_8) && (VAR_8->td_flags & VAR_6) != 0) {
   if ((VAR_8->td_flags & VAR_5) == 0) {
    FUNC_6(VAR_8);
    VAR_8->td_flags |= VAR_3;
   } else {
    VAR_10 |= FUNC_5(VAR_8, VAR_1);
   }
  }
  break;
 }
 return (VAR_10);
}
