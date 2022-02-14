
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rt_mutex {struct task_struct* owner; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct rt_mutex *VAR_1)
{
 VAR_1->owner = (struct task_struct *)
   ((unsigned long)VAR_1->owner | VAR_0);
}
