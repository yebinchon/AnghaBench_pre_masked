
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;
struct cpuset {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cpuset*) ;
 scalar_t__ FUNC_1 (struct cpuset*) ;

__attribute__((used)) static void FUNC_2(struct cpuset *VAR_2,
     struct task_struct *VAR_3)
{
 if (FUNC_0(VAR_2))
  VAR_3->flags |= VAR_0;
 else
  VAR_3->flags &= ~VAR_0;
 if (FUNC_1(VAR_2))
  VAR_3->flags |= VAR_1;
 else
  VAR_3->flags &= ~VAR_1;
}
