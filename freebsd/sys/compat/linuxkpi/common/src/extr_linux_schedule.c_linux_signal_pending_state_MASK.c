
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (int) ;
 long VAR_0 ;
 long VAR_1 ;
 int FUNC_1 (struct task_struct*) ;

bool
FUNC_2(long VAR_2, struct task_struct *VAR_3)
{

 FUNC_0((VAR_2 & ~VAR_1) == 0);

 if ((VAR_2 & VAR_0) == 0)
  return (0);
 return (FUNC_1(VAR_3));
}
