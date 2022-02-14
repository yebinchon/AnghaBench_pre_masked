
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; int exit_state; int cred_guard_mutex; int ptrace; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct task_struct*,int ) ;
 scalar_t__ FUNC_8 (struct task_struct*,int ) ;
 int FUNC_9 (int ,int ,struct task_struct*) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct task_struct*) ;
 int VAR_10 ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct task_struct *VAR_11)
{
 int VAR_12;

 FUNC_3(VAR_11);

 VAR_12 = -VAR_1;
 if (FUNC_12(VAR_11->flags & VAR_3))
  goto out;
 if (FUNC_8(VAR_11, VAR_9))
  goto out;






 VAR_12 = -VAR_2;
 if (FUNC_5(&VAR_11->cred_guard_mutex))
  goto out;

 FUNC_10(VAR_11);
 VAR_12 = FUNC_2(VAR_11, VAR_4);
 FUNC_11(VAR_11);
 if (VAR_12)
  goto unlock_creds;

 VAR_12 = FUNC_7(VAR_11, 0);
 if (FUNC_12(VAR_12))
  goto unlock_creds;

 FUNC_13(&VAR_10);
 VAR_12 = -VAR_1;
 if (FUNC_12(VAR_11->exit_state))
  goto unlock_tasklist;

 FUNC_0(VAR_11->ptrace);
 VAR_11->ptrace = VAR_6;
 if (FUNC_4(VAR_0))
  VAR_11->ptrace |= VAR_5;

 FUNC_1(VAR_11, VAR_9);
 FUNC_9(VAR_8, VAR_7, VAR_11);

 VAR_12 = 0;
unlock_tasklist:
 FUNC_14(&VAR_10);
unlock_creds:
 FUNC_6(&VAR_11->cred_guard_mutex);
out:
 return VAR_12;
}
