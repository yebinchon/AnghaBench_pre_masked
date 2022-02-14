
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {scalar_t__ exit_state; int sibling; int exit_signal; TYPE_1__* real_parent; scalar_t__ pdeath_signal; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {struct list_head children; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (scalar_t__,int ,struct task_struct*) ;
 int FUNC_2 (struct task_struct*,struct task_struct*) ;
 int FUNC_3 (int *,struct list_head*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct task_struct*) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (struct task_struct*) ;

__attribute__((used)) static void FUNC_8(struct task_struct *VAR_4, struct task_struct *VAR_5,
    struct list_head *VAR_6)
{
 if (VAR_5->pdeath_signal)
  FUNC_1(VAR_5->pdeath_signal, VAR_2, VAR_5);

 FUNC_3(&VAR_5->sibling, &VAR_5->real_parent->children);

 if (FUNC_5(VAR_5))
  return;




 if (FUNC_4(VAR_5->real_parent, VAR_4))
  return;


 VAR_5->exit_signal = VAR_3;


 if (!FUNC_6(VAR_5) &&
     VAR_5->exit_state == VAR_1 && FUNC_7(VAR_5)) {
  FUNC_0(VAR_5, VAR_5->exit_signal);
  if (FUNC_5(VAR_5)) {
   VAR_5->exit_state = VAR_0;
   FUNC_3(&VAR_5->sibling, VAR_6);
  }
 }

 FUNC_2(VAR_5, VAR_4);
}
