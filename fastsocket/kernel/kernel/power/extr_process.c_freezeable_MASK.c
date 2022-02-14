
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; scalar_t__ exit_state; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct task_struct * VAR_2)
{
 if ((VAR_2 == VAR_1) ||
     (VAR_2->flags & VAR_0) ||
     (VAR_2->exit_state != 0))
  return 0;
 return 1;
}
