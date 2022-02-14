
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct audit_context {scalar_t__ current_state; int killed_trees; scalar_t__ in_syscall; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct audit_context*) ;
 struct audit_context* FUNC_1 (struct task_struct*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct audit_context*,struct task_struct*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct task_struct *VAR_1)
{
 struct audit_context *VAR_2;

 VAR_2 = FUNC_1(VAR_1, 0, 0);
 if (FUNC_4(!VAR_2))
  return;






 if (VAR_2->in_syscall && VAR_2->current_state == VAR_0)
  FUNC_3(VAR_2, VAR_1);
 if (!FUNC_5(&VAR_2->killed_trees))
  FUNC_2(&VAR_2->killed_trees);

 FUNC_0(VAR_2);
}
