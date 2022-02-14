
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int prio; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*,int) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);

 if (VAR_0->prio != VAR_1)
  FUNC_1(VAR_0, VAR_1);
}
