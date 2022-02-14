
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pi_waiters; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct task_struct *VAR_0)
{
 return !FUNC_0(&VAR_0->pi_waiters);
}
