
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef int u32 ;
struct task_struct {TYPE_1__* sighand; TYPE_2__* signal; } ;
typedef int pid_t ;
struct TYPE_4__ {int audit_tty; } ;
struct TYPE_3__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct task_struct*,int ,int ) ;

__attribute__((used)) static int FUNC_6(pid_t VAR_3, uid_t VAR_4, u32 VAR_5)
{
 struct task_struct *VAR_6;
 int VAR_7;

 FUNC_1(&VAR_2);
 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = -VAR_1;
 if (!VAR_6)
  goto out;
 VAR_7 = 0;

 FUNC_3(&VAR_6->sighand->siglock);
 if (!VAR_6->signal->audit_tty)
  VAR_7 = -VAR_0;
 FUNC_4(&VAR_6->sighand->siglock);
 if (VAR_7)
  goto out;

 FUNC_5(VAR_6, VAR_4, VAR_5);
out:
 FUNC_2(&VAR_2);
 return VAR_7;
}
