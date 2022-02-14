
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; int exit_state; int ptrace; int cred_guard_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct task_struct*,int ) ;
 int FUNC_7 (int ,int ,struct task_struct*) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*) ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct task_struct *VAR_11)
{
 int VAR_12;

 FUNC_2(VAR_11);

 VAR_12 = -VAR_1;
 if (FUNC_10(VAR_11->flags & VAR_3))
  goto out;
 if (FUNC_6(VAR_11, VAR_9))
  goto out;






 VAR_12 = -VAR_2;
 if (FUNC_4(&VAR_11->cred_guard_mutex))
  goto out;

 FUNC_8(VAR_11);
 VAR_12 = FUNC_1(VAR_11, VAR_4);
 FUNC_9(VAR_11);
 if (VAR_12)
  goto unlock_creds;

 FUNC_11(&VAR_10);
 VAR_12 = -VAR_1;
 if (FUNC_10(VAR_11->exit_state))
  goto unlock_tasklist;
 if (VAR_11->ptrace)
  goto unlock_tasklist;

 VAR_11->ptrace = VAR_5;
 if (FUNC_3(VAR_0))
  VAR_11->ptrace |= VAR_6;

 FUNC_0(VAR_11, VAR_9);
 FUNC_7(VAR_8, VAR_7, VAR_11);

 VAR_12 = 0;
unlock_tasklist:
 FUNC_12(&VAR_10);
unlock_creds:
 FUNC_5(&VAR_11->cred_guard_mutex);
out:
 return VAR_12;
}
