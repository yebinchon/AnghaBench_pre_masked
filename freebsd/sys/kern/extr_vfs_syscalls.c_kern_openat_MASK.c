
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct thread {int td_dupfd; int* td_retval; int td_ucred; struct proc* td_proc; } ;
struct proc {struct filedesc* p_fd; } ;
struct filecaps {int dummy; } ;
struct nameidata {int ni_lcf; struct filecaps ni_filecaps; struct vnode* ni_vp; } ;
struct filedesc {int fd_cmask; } ;
struct file {int f_flag; int f_seqcount; int * f_ops; struct vnode* f_vnode; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,char*) ;
 int VAR_10 ;
 int FUNC_4 (struct nameidata*,int ) ;
 int VAR_11 ;
 int FUNC_5 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (struct vnode*,int ) ;
 int VAR_18 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct thread*,struct filedesc*,scalar_t__,int,int,int*) ;
 int FUNC_9 (struct thread*,struct file**) ;
 int FUNC_10 (struct file*,struct thread*) ;
 int FUNC_11 (struct filecaps*) ;
 int FUNC_12 (struct file*,int,int ,struct vnode*,int *) ;
 int FUNC_13 (struct thread*,struct file*,int*,int,struct filecaps*) ;
 int FUNC_14 (int,int *) ;
 int FUNC_15 (struct file*,int ,int ,struct thread*) ;
 int FUNC_16 (struct nameidata*,int*,int,struct file*) ;
 int VAR_19 ;

int
FUNC_17(struct thread *VAR_20, int VAR_21, const char *VAR_22, enum uio_seg VAR_23,
    int VAR_24, int VAR_25)
{
 struct proc *VAR_26 = VAR_20->td_proc;
 struct filedesc *VAR_27 = VAR_26->p_fd;
 struct file *VAR_28;
 struct vnode *VAR_29;
 struct nameidata VAR_30;
 cap_rights_t VAR_31;
 int VAR_32, VAR_33, VAR_34;

 VAR_34 = -1;

 FUNC_0(VAR_24);
 FUNC_1(VAR_25);
 FUNC_7(&VAR_31, VAR_2);
 FUNC_14(VAR_24, &VAR_31);




 if (VAR_24 & VAR_14) {
  if (VAR_24 & VAR_13)
   return (VAR_4);
 } else if ((VAR_24 & VAR_13) == VAR_13) {
  return (VAR_4);
 } else {
  VAR_24 = FUNC_2(VAR_24);
 }





 VAR_33 = FUNC_9(VAR_20, &VAR_28);
 if (VAR_33 != 0)
  return (VAR_33);





 VAR_28->f_flag = VAR_24 & VAR_8;
 VAR_32 = ((VAR_25 & ~VAR_27->fd_cmask) & VAR_0) & ~VAR_16;
 FUNC_5(&VAR_30, VAR_10, VAR_9 | VAR_1, VAR_23, VAR_22, VAR_21,
     &VAR_31, VAR_20);
 VAR_20->td_dupfd = -1;
 VAR_33 = FUNC_16(&VAR_30, &VAR_24, VAR_32, VAR_28);
 if (VAR_33 != 0) {





  if (VAR_33 == VAR_6 && VAR_28->f_ops != &VAR_18)
   goto success;
  if ((VAR_30.ni_lcf & VAR_12) == 0 &&
      (VAR_33 == VAR_5 || VAR_33 == VAR_6) &&
      VAR_20->td_dupfd >= 0) {
   VAR_33 = FUNC_8(VAR_20, VAR_27, VAR_20->td_dupfd, VAR_24, VAR_33,
       &VAR_34);
   if (VAR_33 == 0)
    goto success;
  }

  goto bad;
 }
 VAR_20->td_dupfd = 0;
 FUNC_4(&VAR_30, VAR_11);
 VAR_29 = VAR_30.ni_vp;






 VAR_28->f_vnode = VAR_29;




 if (VAR_28->f_ops == &VAR_18) {
  FUNC_3(VAR_29->v_type != VAR_17, ("Unexpected fifo."));
  VAR_28->f_seqcount = 1;
  FUNC_12(VAR_28, (VAR_24 & VAR_8) | (VAR_28->f_flag & VAR_7),
      VAR_3, VAR_29, &VAR_19);
 }

 FUNC_6(VAR_29, 0);
 if (VAR_24 & VAR_15) {
  VAR_33 = FUNC_15(VAR_28, 0, VAR_20->td_ucred, VAR_20);
  if (VAR_33 != 0)
   goto bad;
 }
success:



 if (VAR_34 == -1) {
  struct filecaps *VAR_35;






   VAR_35 = ((void*)0);
  VAR_33 = FUNC_13(VAR_20, VAR_28, &VAR_34, VAR_24, VAR_35);

  if (VAR_33 != 0) {
   FUNC_11(&VAR_30.ni_filecaps);
   goto bad;
  }
 } else {
  FUNC_11(&VAR_30.ni_filecaps);
 }





 FUNC_10(VAR_28, VAR_20);
 VAR_20->td_retval[0] = VAR_34;
 return (0);
bad:
 FUNC_3(VAR_34 == -1, ("indx=%d, should be -1", VAR_34));
 FUNC_10(VAR_28, VAR_20);
 return (VAR_33);
}
