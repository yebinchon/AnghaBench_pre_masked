
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {int p_flag; scalar_t__ p_traceflag; int p_flag2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct proc*,int ) ;



 int VAR_6 ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_7, struct proc *VAR_8, int VAR_9)
{

 FUNC_1(VAR_8, VAR_3);






 if ((VAR_8->p_flag & VAR_6) != 0 || VAR_8->p_traceflag != 0)
  return (VAR_0);

 switch (VAR_9) {
 case 128:
  if (VAR_7->td_proc != VAR_8)
   return (VAR_2);
  VAR_8->p_flag2 &= ~(VAR_4 | VAR_5);
  break;
 case 129:
  VAR_8->p_flag2 |= VAR_5 | VAR_4;
  break;
 case 130:
  if ((VAR_8->p_flag2 & VAR_5) != 0) {
   FUNC_0((VAR_8->p_flag2 & VAR_4) != 0,
       ("dandling P2_NOTRACE_EXEC"));
   if (VAR_7->td_proc != VAR_8)
    return (VAR_2);
   VAR_8->p_flag2 &= ~VAR_5;
  } else {
   VAR_8->p_flag2 |= VAR_4;
  }
  break;
 default:
  return (VAR_1);
 }
 return (0);
}
