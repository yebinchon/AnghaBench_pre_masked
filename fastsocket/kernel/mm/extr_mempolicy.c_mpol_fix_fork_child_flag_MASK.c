
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; scalar_t__ mempolicy; } ;


 int VAR_0 ;

void FUNC_0(struct task_struct *VAR_1)
{
 if (VAR_1->mempolicy)
  VAR_1->flags |= VAR_0;
 else
  VAR_1->flags &= ~VAR_0;
}
