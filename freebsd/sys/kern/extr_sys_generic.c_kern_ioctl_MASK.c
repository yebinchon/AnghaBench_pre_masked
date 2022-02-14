
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct thread {int td_ucred; TYPE_1__* td_proc; } ;
struct filedesc {TYPE_2__* fd_ofiles; } ;
struct file {int f_flag; } ;
typedef void* caddr_t ;
struct TYPE_4__ {int fde_flags; } ;
struct TYPE_3__ {struct filedesc* p_fd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct filedesc*) ;
 int FUNC_3 (struct filedesc*) ;
 int FUNC_4 (struct filedesc*) ;
 int FUNC_5 (struct filedesc*) ;
 int FUNC_6 (struct filedesc*) ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int FUNC_7 (int*,int ) ;
 int FUNC_8 (int*,int ) ;
 int FUNC_9 (struct filedesc*,int,int) ;
 int VAR_7 ;
 int FUNC_10 (struct file*,struct thread*) ;
 int FUNC_11 (struct thread*,int,int *,struct file**) ;
 struct file* FUNC_12 (struct filedesc*,int) ;
 int FUNC_13 (struct file*) ;
 int FUNC_14 (struct file*,int,void*,int ,struct thread*) ;

int
FUNC_15(struct thread *VAR_8, int VAR_9, u_long VAR_10, caddr_t VAR_11)
{
 struct file *VAR_12;
 struct filedesc *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 FUNC_1(VAR_9);
 FUNC_0(VAR_10);

 VAR_13 = VAR_8->td_proc->p_fd;

 switch (VAR_10) {
 case 130:
 case 132:
  FUNC_5(VAR_13);
  VAR_16 = 128;
  break;
 default:




  VAR_16 = VAR_5;

  break;
 }
 VAR_14 = FUNC_11(VAR_8, VAR_9, &VAR_7, &VAR_12);
 if (VAR_14 != 0) {
  VAR_12 = ((void*)0);
  goto out;
 }

 if ((VAR_12->f_flag & (VAR_3 | VAR_4)) == 0) {
  VAR_14 = VAR_0;
  goto out;
 }

 switch (VAR_10) {
 case 130:
  VAR_13->fd_ofiles[VAR_9].fde_flags &= ~VAR_6;
  goto out;
 case 132:
  VAR_13->fd_ofiles[VAR_9].fde_flags |= VAR_6;
  goto out;
 case 131:
  if ((VAR_15 = *(int *)VAR_11))
   FUNC_8(&VAR_12->f_flag, VAR_2);
  else
   FUNC_7(&VAR_12->f_flag, VAR_2);
  VAR_11 = (void *)&VAR_15;
  break;
 case 133:
  if ((VAR_15 = *(int *)VAR_11))
   FUNC_8(&VAR_12->f_flag, VAR_1);
  else
   FUNC_7(&VAR_12->f_flag, VAR_1);
  VAR_11 = (void *)&VAR_15;
  break;
 }

 VAR_14 = FUNC_14(VAR_12, VAR_10, VAR_11, VAR_8->td_ucred, VAR_8);
out:
 switch (VAR_16) {
 case 128:
  FUNC_6(VAR_13);
  break;





 default:
  FUNC_4(VAR_13);
  break;
 }
 if (VAR_12 != ((void*)0))
  FUNC_10(VAR_12, VAR_8);
 return (VAR_14);
}
