
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct task_struct *VAR_3)
{
 if (!VAR_3->mm)
  return 0;
 if (VAR_3->flags & VAR_1)
  return !!(VAR_3->flags & VAR_0);
 return VAR_2;
}
