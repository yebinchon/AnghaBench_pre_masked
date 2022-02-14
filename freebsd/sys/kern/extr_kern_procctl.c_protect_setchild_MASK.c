
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int p_flag; int p_flag2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct thread*,struct proc*) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_6, struct proc *VAR_7, int VAR_8)
{

 FUNC_0(VAR_7, VAR_0);
 if (VAR_7->p_flag & VAR_5 || FUNC_1(VAR_6, VAR_7) != 0)
  return (0);
 if (VAR_8 & VAR_3) {
  VAR_7->p_flag |= VAR_4;
  if (VAR_8 & VAR_2)
   VAR_7->p_flag2 |= VAR_1;
 } else {
  VAR_7->p_flag &= ~VAR_4;
  VAR_7->p_flag2 &= ~VAR_1;
 }
 return (1);
}
