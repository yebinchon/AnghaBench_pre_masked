
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {scalar_t__ exit_signal; scalar_t__ parent_exec_id; scalar_t__ self_exec_id; TYPE_2__* signal; int exit_state; TYPE_1__* real_parent; int group_leader; } ;
struct TYPE_4__ {scalar_t__ notify_count; scalar_t__ group_exit_task; } ;
struct TYPE_3__ {scalar_t__ self_exec_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct task_struct*,int) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*,void**,int) ;
 int FUNC_8 (struct task_struct*,int,void*,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct task_struct *VAR_5, int VAR_6)
{
 int VAR_7;
 void *VAR_8;
 FUNC_2(VAR_5);
 FUNC_1(VAR_5);

 FUNC_10(&VAR_4);
 if (VAR_6)
  FUNC_3(VAR_5->group_leader, ((void*)0));
 if (VAR_5->exit_signal != VAR_3 && !FUNC_5(VAR_5) &&
     (VAR_5->parent_exec_id != VAR_5->real_parent->self_exec_id ||
      VAR_5->self_exec_id != VAR_5->parent_exec_id))
  VAR_5->exit_signal = VAR_3;

 VAR_7 = FUNC_7(VAR_5, &VAR_8, VAR_6);
 if (VAR_7 >= 0)
  VAR_7 = FUNC_0(VAR_5, VAR_7);

 VAR_5->exit_state = VAR_7 == VAR_0 ? VAR_1 : VAR_2;


 if (FUNC_6(VAR_5) &&
     VAR_5->signal->group_exit_task &&
     VAR_5->signal->notify_count < 0)
  FUNC_9(VAR_5->signal->group_exit_task);

 FUNC_11(&VAR_4);

 FUNC_8(VAR_5, VAR_7, VAR_8, VAR_6);


 if (VAR_7 == VAR_0)
  FUNC_4(VAR_5);
}
