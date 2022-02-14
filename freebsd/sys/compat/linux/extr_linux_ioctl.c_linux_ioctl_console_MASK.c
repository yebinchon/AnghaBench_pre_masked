
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_mode {int frsig; void* acqsig; void* relsig; } ;
struct thread {int td_ucred; } ;
struct linux_ioctl_args {int cmd; scalar_t__ arg; int fd; } ;
struct ioctl_args {int dummy; } ;
struct file {int dummy; } ;
typedef int mode ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (void*) ;







 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (void*,struct vt_mode*,int) ;
 int FUNC_2 (struct vt_mode*,void*,int) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int ,int *,struct file**) ;
 int FUNC_5 (struct file*,int ,int ,int ,struct thread*) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (struct thread*,struct ioctl_args*) ;

__attribute__((used)) static int
FUNC_8(struct thread *VAR_20, struct linux_ioctl_args *VAR_21)
{
 struct file *VAR_22;
 int VAR_23;

 VAR_23 = FUNC_4(VAR_20, VAR_21->fd, &VAR_19, &VAR_22);
 if (VAR_23 != 0)
  return (VAR_23);
 switch (VAR_21->cmd & 0xffff) {

 case 135:
  VAR_21->cmd = VAR_9;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 139:
  VAR_21->cmd = VAR_5;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 142:
  VAR_21->cmd = VAR_2;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 138:
  VAR_21->cmd = VAR_6;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 137:
  VAR_21->cmd = VAR_7;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 141:
  VAR_21->cmd = VAR_3;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 140:
  VAR_21->cmd = VAR_4;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 136: {
  int VAR_24;
  switch (VAR_21->arg) {
  case 144:
   VAR_24 = VAR_10;
   break;
  case 143:
   VAR_24 = VAR_11;
   break;
  case 145:
   VAR_24 = VAR_10;
   break;
  default:
   FUNC_3(VAR_22, VAR_20);
   return (VAR_0);
  }
  VAR_23 = (FUNC_5(VAR_22, VAR_8, (caddr_t)&VAR_24,
      VAR_20->td_ucred, VAR_20));
  break;
 }

 case 131:
  VAR_21->cmd = VAR_15;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 133:
  VAR_21->cmd = VAR_14;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 129: {
  struct vt_mode VAR_25;
  if ((VAR_23 = FUNC_1((void *)VAR_21->arg, &VAR_25, sizeof(VAR_25))))
   break;
  if (FUNC_0(VAR_25.relsig))
   VAR_25.relsig = FUNC_6(VAR_25.relsig);
  else
   VAR_25.relsig = 0;
  if (FUNC_0(VAR_25.acqsig))
   VAR_25.acqsig = FUNC_6(VAR_25.acqsig);
  else
   VAR_25.acqsig = 0;

  VAR_25.frsig = 0;
  if ((VAR_23 = FUNC_2(&VAR_25, (void *)VAR_21->arg, sizeof(VAR_25))))
   break;
  VAR_21->cmd = VAR_17;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;
 }

 case 132:
  VAR_21->cmd = VAR_13;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 130:
  VAR_21->cmd = VAR_16;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 134:
  VAR_21->cmd = VAR_12;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 case 128:
  VAR_21->cmd = VAR_18;
  VAR_23 = (FUNC_7(VAR_20, (struct ioctl_args *)VAR_21));
  break;

 default:
  VAR_23 = VAR_1;
  break;
 }

 FUNC_3(VAR_22, VAR_20);
 return (VAR_23);
}
