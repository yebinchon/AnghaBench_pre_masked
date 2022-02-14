
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_long ;
struct thread {int td_ucred; } ;
struct linux_ioctl_args {int cmd; scalar_t__ arg; int fd; } ;
struct file {int dummy; } ;
typedef int cap_rights_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (void*,int *,int) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int ,int ,struct file**) ;
 int FUNC_5 (struct file*,int,int ,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_7, struct linux_ioctl_args *VAR_8)
{
 uint8_t VAR_9[VAR_6];
 cap_rights_t VAR_10;
 struct file *VAR_11;
 u_long VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(VAR_7, VAR_8->fd, FUNC_1(&VAR_10, VAR_0), &VAR_11);
 if (VAR_13 != 0)
  return (VAR_13);

 VAR_12 = VAR_8->cmd;

 VAR_8->cmd &= ~(VAR_4 | VAR_5);
 if ((VAR_12 & VAR_4) != 0)
  VAR_8->cmd |= VAR_2;
 if ((VAR_12 & VAR_5) != 0)
  VAR_8->cmd |= VAR_3;

 VAR_14 = FUNC_0(VAR_12);
 if (VAR_14 > VAR_6) {
  VAR_13 = VAR_1;
  goto out;
 }

 if ((VAR_12 & VAR_4) != 0) {
  VAR_13 = FUNC_2((void *)VAR_8->arg, VAR_9, VAR_14);
  if (VAR_13 != 0)
   goto out;
 }

 VAR_13 = FUNC_5(VAR_11, VAR_8->cmd, (caddr_t)VAR_9, VAR_7->td_ucred, VAR_7);
out:
 FUNC_3(VAR_11, VAR_7);
 return (VAR_13);
}
