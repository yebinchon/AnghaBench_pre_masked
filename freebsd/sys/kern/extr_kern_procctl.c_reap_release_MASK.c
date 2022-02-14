
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int p_treeflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct proc* VAR_4 ;
 struct proc* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct proc*,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_7, struct proc *VAR_8)
{

 FUNC_1(&VAR_6, VAR_3);
 if (VAR_8 != VAR_4)
  return (VAR_1);
 if (VAR_8 == VAR_5)
  return (VAR_0);
 if ((VAR_8->p_treeflag & VAR_2) == 0)
  return (VAR_0);
 FUNC_0(VAR_8, 0);
 return (0);
}
