
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct thread {int td_ucred; } ;
struct linux_ioctl_args {scalar_t__ cmd; scalar_t__ arg; int fd; } ;
struct file {int dummy; } ;
typedef int cap_rights_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int ,int ,...) ;
 int FUNC_3 (struct file*,scalar_t__,int ,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_3, struct linux_ioctl_args *VAR_4)
{




 struct file *VAR_5;
 int VAR_6;
 u_long VAR_7 = VAR_4->cmd;

 if (VAR_7 != VAR_2) {
  VAR_6 = VAR_1;
  goto END;
 }



 VAR_6 = FUNC_2(VAR_3, VAR_4->fd, &VAR_5);




 if (VAR_6 != 0)
  goto END;

 VAR_6 = FUNC_3(VAR_5, VAR_7, (caddr_t)VAR_4->arg, VAR_3->td_ucred, VAR_3);
 FUNC_1(VAR_5, VAR_3);
END:
 return (VAR_6);
}
