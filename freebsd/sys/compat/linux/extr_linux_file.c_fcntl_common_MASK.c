
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
struct linux_fcntl_args {int cmd; intptr_t arg; int fd; } ;
struct l_flock {int dummy; } ;
struct flock {int dummy; } ;
struct file {int f_type; } ;
typedef int linux_flock ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 long VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct flock*,struct l_flock*) ;
 int VAR_33 ;
 int FUNC_1 (void*,struct l_flock*,int) ;
 int FUNC_2 (struct l_flock*,void*,int) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int ,int *,struct file**) ;
 int FUNC_5 (struct thread*,int ,int ,intptr_t) ;
 int FUNC_6 (struct l_flock*,struct flock*) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_34, struct linux_fcntl_args *VAR_35)
{
 struct l_flock VAR_36;
 struct flock VAR_37;
 struct file *VAR_38;
 long VAR_39;
 int VAR_40, VAR_41;

 switch (VAR_35->cmd) {
 case 138:
  return (FUNC_5(VAR_34, VAR_35->fd, VAR_2, VAR_35->arg));

 case 136:
  return (FUNC_5(VAR_34, VAR_35->fd, VAR_4, 0));

 case 132:
  return (FUNC_5(VAR_34, VAR_35->fd, VAR_8, VAR_35->arg));

 case 135:
  VAR_40 = FUNC_5(VAR_34, VAR_35->fd, VAR_5, 0);
  VAR_41 = VAR_34->td_retval[0];
  VAR_34->td_retval[0] = 0;
  if (VAR_41 & VAR_30)
   VAR_34->td_retval[0] |= VAR_19;
  if (VAR_41 & VAR_32)
   VAR_34->td_retval[0] |= VAR_22;
  if (VAR_41 & VAR_31)
   VAR_34->td_retval[0] |= VAR_20;
  if (VAR_41 & VAR_27)
   VAR_34->td_retval[0] |= VAR_18;
  if (VAR_41 & VAR_23)
   VAR_34->td_retval[0] |= VAR_14;
  if (VAR_41 & VAR_26)
   VAR_34->td_retval[0] |= VAR_21;
  if (VAR_41 & VAR_24)
   VAR_34->td_retval[0] |= VAR_13;
  return (VAR_40);

 case 131:
  VAR_39 = 0;
  if (VAR_35->arg & VAR_16)
   VAR_39 |= VAR_29;
  if (VAR_35->arg & VAR_14)
   VAR_39 |= VAR_23;
  if (VAR_35->arg & VAR_21)
   VAR_39 |= VAR_26;
  if (VAR_35->arg & VAR_13)
   VAR_39 |= VAR_24;
  return (FUNC_5(VAR_34, VAR_35->fd, VAR_9, VAR_39));

 case 134:
  VAR_40 = FUNC_1((void *)VAR_35->arg, &VAR_36,
      sizeof(VAR_36));
  if (VAR_40)
   return (VAR_40);
  FUNC_6(&VAR_36, &VAR_37);
  VAR_40 = FUNC_5(VAR_34, VAR_35->fd, VAR_6, (intptr_t)&VAR_37);
  if (VAR_40)
   return (VAR_40);
  FUNC_0(&VAR_37, &VAR_36);
  return (FUNC_2(&VAR_36, (void *)VAR_35->arg,
      sizeof(VAR_36)));

 case 130:
  VAR_40 = FUNC_1((void *)VAR_35->arg, &VAR_36,
      sizeof(VAR_36));
  if (VAR_40)
   return (VAR_40);
  FUNC_6(&VAR_36, &VAR_37);
  return (FUNC_5(VAR_34, VAR_35->fd, VAR_10,
      (intptr_t)&VAR_37));

 case 129:
  VAR_40 = FUNC_1((void *)VAR_35->arg, &VAR_36,
      sizeof(VAR_36));
  if (VAR_40)
   return (VAR_40);
  FUNC_6(&VAR_36, &VAR_37);
  return (FUNC_5(VAR_34, VAR_35->fd, VAR_11,
       (intptr_t)&VAR_37));

 case 133:
  return (FUNC_5(VAR_34, VAR_35->fd, VAR_7, 0));

 case 128:





  VAR_40 = FUNC_4(VAR_34, VAR_35->fd,
      &VAR_33, &VAR_38);
  if (VAR_40)
   return (VAR_40);
  if (VAR_38->f_type == VAR_0) {
   FUNC_3(VAR_38, VAR_34);
   return (VAR_1);
  }
  FUNC_3(VAR_38, VAR_34);

  return (FUNC_5(VAR_34, VAR_35->fd, VAR_12, VAR_35->arg));

 case 137:
  return (FUNC_5(VAR_34, VAR_35->fd, VAR_3, VAR_35->arg));
 }

 return (VAR_1);
}
