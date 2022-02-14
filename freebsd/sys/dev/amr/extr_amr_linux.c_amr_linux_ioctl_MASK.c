
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct linux_ioctl_args {scalar_t__ arg; int cmd; int fd; } ;
struct file {int dummy; } ;
typedef int cap_rights_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int ,int ,struct file**) ;
 int FUNC_3 (struct file*,int ,int ,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_1, struct linux_ioctl_args *VAR_2)
{
 cap_rights_t VAR_3;
 struct file *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2->fd, FUNC_0(&VAR_3, VAR_0), &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_5 = FUNC_3(VAR_4, VAR_2->cmd, (caddr_t)VAR_2->arg, VAR_1->td_ucred, VAR_1);
 FUNC_1(VAR_4, VAR_1);
 return (VAR_5);
}
