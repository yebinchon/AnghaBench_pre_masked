
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int p_nice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (struct thread*,struct proc*) ;
 scalar_t__ FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct proc*,int) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_5, struct proc *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_6, VAR_1);
 if ((VAR_8 = FUNC_1(VAR_5, VAR_6)))
  return (VAR_8);
 if (VAR_7 > VAR_2)
  VAR_7 = VAR_2;
 if (VAR_7 < VAR_3)
  VAR_7 = VAR_3;
 if (VAR_7 < VAR_6->p_nice && FUNC_2(VAR_5, VAR_4) != 0)
  return (VAR_0);
 FUNC_3(VAR_6, VAR_7);
 return (0);
}
