
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int rt_priority; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;

__attribute__((used)) static inline int FUNC_2(struct task_struct *VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_1))
  VAR_2 = VAR_0-1 - VAR_1->rt_priority;
 else
  VAR_2 = FUNC_0(VAR_1);
 return VAR_2;
}
