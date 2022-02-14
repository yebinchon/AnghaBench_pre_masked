
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_1)
{
 if (FUNC_1(VAR_1)) {
  VAR_1->flags &= ~VAR_0;
  return 1;
 }
 FUNC_0(VAR_1);
 return 0;
}
