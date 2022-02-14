
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int exit_code; TYPE_1__* signal; } ;
struct TYPE_2__ {int flags; int group_exit_code; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

__attribute__((used)) static int *FUNC_1(struct task_struct *VAR_1, bool VAR_2)
{
 if (VAR_2) {
  if (FUNC_0(VAR_1))
   return &VAR_1->exit_code;
 } else {
  if (VAR_1->signal->flags & VAR_0)
   return &VAR_1->signal->group_exit_code;
 }
 return ((void*)0);
}
