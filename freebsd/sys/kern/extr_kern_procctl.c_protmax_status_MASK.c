
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
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct proc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_5, struct proc *VAR_6, int *VAR_7)
{
 int VAR_8;

 switch (VAR_6->p_flag2 & (128 | 129)) {
 case 0:
  VAR_8 = VAR_0;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 case 129:
  VAR_8 = VAR_2;
  break;
 }
 if (FUNC_0(VAR_6, VAR_4) == VAR_4)
  VAR_8 |= VAR_1;
 *VAR_7 = VAR_8;
 return (0);
}
