
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {scalar_t__ p_pid; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_1 ;
 struct proc* VAR_2 ;
 struct proc* FUNC_1 (struct proc*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(struct proc *VAR_4)
{

 FUNC_2(&VAR_3, VAR_1);
 FUNC_0(VAR_4, VAR_0);
 for (; VAR_4 != VAR_2; VAR_4 = FUNC_1(VAR_4)) {
  if (VAR_4->p_pid == 0)
   return (0);
 }
 return (1);
}
