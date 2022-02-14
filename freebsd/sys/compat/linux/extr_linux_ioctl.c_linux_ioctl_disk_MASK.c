
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int td_ucred; } ;
struct linux_ioctl_args {int cmd; scalar_t__ arg; int fd; } ;
struct file {int dummy; } ;
typedef int sectorsize ;
typedef int off_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int*,void*,int) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int ,int *,struct file**) ;
 int FUNC_3 (struct file*,int ,int ,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_4, struct linux_ioctl_args *VAR_5)
{
 struct file *VAR_6;
 int VAR_7;
 u_int VAR_8;
 off_t VAR_9;

 VAR_7 = FUNC_2(VAR_4, VAR_5->fd, &VAR_3, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);
 switch (VAR_5->cmd & 0xffff) {
 case 129:
  VAR_7 = FUNC_3(VAR_6, VAR_1,
      (caddr_t)&VAR_8, VAR_4->td_ucred, VAR_4);
  if (!VAR_7)
   VAR_7 = FUNC_3(VAR_6, VAR_0,
       (caddr_t)&VAR_9, VAR_4->td_ucred, VAR_4);
  FUNC_1(VAR_6, VAR_4);
  if (VAR_7)
   return (VAR_7);
  VAR_8 = VAR_9 / VAR_8;



  return (FUNC_0(&VAR_8, (void *)VAR_5->arg,
      sizeof(VAR_8)));
  break;
 case 128:
  VAR_7 = FUNC_3(VAR_6, VAR_1,
      (caddr_t)&VAR_8, VAR_4->td_ucred, VAR_4);
  FUNC_1(VAR_6, VAR_4);
  if (VAR_7)
   return (VAR_7);
  return (FUNC_0(&VAR_8, (void *)VAR_5->arg,
      sizeof(VAR_8)));
  break;
 }
 FUNC_1(VAR_6, VAR_4);
 return (VAR_2);
}
