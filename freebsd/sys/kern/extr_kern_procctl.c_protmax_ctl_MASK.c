
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int p_flag2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct proc*,int ) ;




__attribute__((used)) static int
FUNC_1(struct thread *VAR_4, struct proc *VAR_5, int VAR_6)
{
 FUNC_0(VAR_5, VAR_1);

 switch (VAR_6) {
 case 129:
  VAR_5->p_flag2 &= ~VAR_2;
  VAR_5->p_flag2 |= VAR_3;
  break;
 case 130:
  VAR_5->p_flag2 |= VAR_2;
  VAR_5->p_flag2 &= ~VAR_3;
  break;
 case 128:
  VAR_5->p_flag2 &= ~(VAR_3 | VAR_2);
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
