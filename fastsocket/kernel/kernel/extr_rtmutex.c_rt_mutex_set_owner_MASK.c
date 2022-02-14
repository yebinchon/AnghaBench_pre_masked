
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rt_mutex {struct task_struct* owner; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct rt_mutex*) ;

__attribute__((used)) static void
FUNC_1(struct rt_mutex *VAR_1, struct task_struct *VAR_2,
     unsigned long VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_2 | VAR_3;

 if (FUNC_0(VAR_1))
  VAR_4 |= VAR_0;

 VAR_1->owner = (struct task_struct *)VAR_4;
}
