
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ioctl_args {int com; int fd; } ;
struct freebsd32_ioctl_args {int com; int fd; } ;
struct file {int f_flag; } ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct freebsd32_ioctl_args,struct ioctl_args,int ) ;

 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct thread*,int ,int ,struct file**) ;
 int FUNC_4 (struct thread*,struct freebsd32_ioctl_args*,struct file*) ;
 int FUNC_5 (struct thread*,struct freebsd32_ioctl_args*,struct file*) ;
 int FUNC_6 (struct thread*,struct freebsd32_ioctl_args*,struct file*) ;
 int FUNC_7 (struct thread*,struct ioctl_args*) ;

int
FUNC_8(struct thread *VAR_5, struct freebsd32_ioctl_args *VAR_6)
{
 struct ioctl_args VAR_7 ;




 struct file *VAR_8;
 cap_rights_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_5, VAR_6->fd, FUNC_1(&VAR_9, VAR_0), &VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);
 if ((VAR_8->f_flag & (VAR_2 | VAR_3)) == 0) {
  FUNC_2(VAR_8, VAR_5);
  return (VAR_1);
 }

 switch (VAR_6->com) {
 case 131:
 case 130:
  VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_8);
  break;

 case 128:
  VAR_10 = FUNC_6(VAR_5, VAR_6, VAR_8);
  break;

 case 129:
  VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_8);
  break;

 default:
  FUNC_2(VAR_8, VAR_5);
  VAR_7.fd = VAR_6->fd;
  VAR_7.com = VAR_6->com;
  FUNC_0(*VAR_6, VAR_7, VAR_4);
  return FUNC_7(VAR_5, &VAR_7);
 }

 FUNC_2(VAR_8, VAR_5);
 return (VAR_10);
}
