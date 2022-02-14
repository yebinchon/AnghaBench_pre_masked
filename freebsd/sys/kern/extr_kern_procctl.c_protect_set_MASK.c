
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;

 int VAR_4 ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*,struct proc*,int) ;
 int FUNC_4 (struct thread*,struct proc*,int) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_5, struct proc *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;

 switch (FUNC_1(VAR_7)) {
 case 128:
 case 129:
  break;
 default:
  return (VAR_0);
 }

 if ((FUNC_0(VAR_7) & ~(VAR_2 | VAR_3)) != 0)
  return (VAR_0);

 VAR_8 = FUNC_2(VAR_5, VAR_4);
 if (VAR_8)
  return (VAR_8);

 if (VAR_7 & VAR_2)
  VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_7);
 else
  VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7);
 if (VAR_9 == 0)
  return (VAR_1);
 return (0);
}
