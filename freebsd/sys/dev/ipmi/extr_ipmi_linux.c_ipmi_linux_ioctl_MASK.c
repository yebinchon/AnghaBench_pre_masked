
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int td_ucred; } ;
struct linux_ioctl_args {int cmd; scalar_t__ arg; int fd; } ;
struct file {int dummy; } ;
typedef int cap_rights_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int ,int ,struct file**) ;
 int FUNC_3 (struct file*,int,int ,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_3, struct linux_ioctl_args *VAR_4)
{
 cap_rights_t VAR_5;
 struct file *VAR_6;
 u_long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, VAR_4->fd, FUNC_0(&VAR_5, VAR_0), &VAR_6);
 if (VAR_8 != 0)
  return (VAR_8);
 VAR_7 = VAR_4->cmd;

 switch(VAR_7) {
 case 129:
  VAR_7 = VAR_1;
  break;
 case 128:
  VAR_7 = VAR_2;
  break;
 }



 VAR_8 = (FUNC_3(VAR_6, VAR_7, (caddr_t)VAR_4->arg, VAR_3->td_ucred, VAR_3));
 FUNC_1(VAR_6, VAR_3);
 return (VAR_8);
}
