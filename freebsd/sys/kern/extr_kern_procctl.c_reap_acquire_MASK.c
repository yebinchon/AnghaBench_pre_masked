
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
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_6, struct proc *VAR_7)
{

 FUNC_0(&VAR_5, VAR_3);
 if (VAR_7 != VAR_4)
  return (VAR_1);
 if ((VAR_7->p_treeflag & VAR_2) != 0)
  return (VAR_0);
 VAR_7->p_treeflag |= VAR_2;




 return (0);
}
