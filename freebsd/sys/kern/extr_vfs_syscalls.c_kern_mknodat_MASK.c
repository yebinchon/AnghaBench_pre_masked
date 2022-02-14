
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct vattr {int va_mode; int va_type; int va_rdev; } ;
struct thread {int td_ucred; TYPE_2__* td_proc; } ;
struct nameidata {struct vnode* ni_dvp; struct vnode* ni_vp; int ni_cnd; } ;
struct mount {int dummy; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef int dev_t ;
struct TYPE_4__ {TYPE_1__* p_fd; } ;
struct TYPE_3__ {int fd_cmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct nameidata*,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int VAR_12 ;

 int FUNC_4 (struct vattr*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (struct vnode*,struct vnode**,int *,struct vattr*) ;
 int FUNC_6 (struct vnode*,int *,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 () ;
 int VAR_18 ;
 int FUNC_8 (struct thread*,int,char const*,int,int) ;
 int FUNC_9 (int ,struct vnode*,int *,struct vattr*) ;
 int FUNC_10 (struct nameidata*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct thread*,int ) ;
 int FUNC_13 (struct mount*) ;
 int FUNC_14 (struct vnode*,struct mount**,int) ;
 int FUNC_15 (struct vnode*) ;
 int FUNC_16 (struct vnode*) ;

int
FUNC_17(struct thread *VAR_19, int VAR_20, const char *VAR_21, enum uio_seg VAR_22,
    int VAR_23, dev_t VAR_24)
{
 struct vnode *VAR_25;
 struct mount *VAR_26;
 struct vattr VAR_27;
 struct nameidata VAR_28;
 int VAR_29, VAR_30 = 0;

 FUNC_1(VAR_23);
 FUNC_0(VAR_24);
 switch (VAR_23 & VAR_12) {
 case 130:
 case 131:
  VAR_29 = FUNC_12(VAR_19, VAR_9);
  if (VAR_29 == 0 && VAR_24 == VAR_15)
   VAR_29 = VAR_4;
  break;
 case 128:
  VAR_29 = FUNC_12(VAR_19, VAR_10);
  break;
 case 129:
  if (VAR_24 == 0)
   return (FUNC_8(VAR_19, VAR_20, VAR_21, VAR_22, VAR_23));

 default:
  VAR_29 = VAR_4;
  break;
 }
 if (VAR_29 != 0)
  return (VAR_29);
restart:
 FUNC_7();
 FUNC_3(&VAR_28, VAR_2, VAR_5 | VAR_11 | VAR_1 |
     VAR_7, VAR_22, VAR_21, VAR_20, &VAR_18,
     VAR_19);
 if ((VAR_29 = FUNC_10(&VAR_28)) != 0)
  return (VAR_29);
 VAR_25 = VAR_28.ni_vp;
 if (VAR_25 != ((void*)0)) {
  FUNC_2(&VAR_28, VAR_6);
  if (VAR_25 == VAR_28.ni_dvp)
   FUNC_16(VAR_28.ni_dvp);
  else
   FUNC_15(VAR_28.ni_dvp);
  FUNC_16(VAR_25);
  return (VAR_3);
 } else {
  FUNC_4(&VAR_27);
  VAR_27.va_mode = (VAR_23 & VAR_0) &
      ~VAR_19->td_proc->p_fd->fd_cmask;
  VAR_27.va_rdev = VAR_24;
  VAR_30 = 0;

  switch (VAR_23 & VAR_12) {
  case 130:
   VAR_27.va_type = VAR_14;
   break;
  case 131:
   VAR_27.va_type = VAR_13;
   break;
  case 128:
   VAR_30 = 1;
   break;
  default:
   FUNC_11("kern_mknod: invalid mode");
  }
 }
 if (FUNC_14(VAR_28.ni_dvp, &VAR_26, VAR_16) != 0) {
  FUNC_2(&VAR_28, VAR_6);
  FUNC_15(VAR_28.ni_dvp);
  if ((VAR_29 = FUNC_14(((void*)0), &VAR_26, VAR_17 | VAR_8)) != 0)
   return (VAR_29);
  goto restart;
 }





 if (VAR_29 == 0) {
  if (VAR_30)
   VAR_29 = FUNC_6(VAR_28.ni_dvp, &VAR_28.ni_cnd, VAR_2);
  else {
   VAR_29 = FUNC_5(VAR_28.ni_dvp, &VAR_28.ni_vp,
      &VAR_28.ni_cnd, &VAR_27);
   if (VAR_29 == 0)
    FUNC_15(VAR_28.ni_vp);
  }
 }
 FUNC_2(&VAR_28, VAR_6);
 FUNC_15(VAR_28.ni_dvp);
 FUNC_13(VAR_26);
 return (VAR_29);
}
