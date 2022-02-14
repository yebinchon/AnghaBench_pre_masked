
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int p_flag2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*,int ) ;



__attribute__((used)) static int
FUNC_1(struct thread *VAR_3, struct proc *VAR_4, int VAR_5)
{

 FUNC_0(VAR_4, VAR_1);

 switch (VAR_5) {
 case 128:
  VAR_4->p_flag2 |= VAR_2;
  break;
 case 129:
  VAR_4->p_flag2 &= ~VAR_2;
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
