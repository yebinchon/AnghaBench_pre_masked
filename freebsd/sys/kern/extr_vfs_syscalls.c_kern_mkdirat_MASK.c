
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct vattr {int va_mode; int va_type; } ;
struct thread {int td_ucred; TYPE_2__* td_proc; } ;
struct TYPE_7__ {int cn_flags; } ;
struct nameidata {struct vnode* ni_vp; struct vnode* ni_dvp; TYPE_3__ ni_cnd; } ;
struct mount {int dummy; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_6__ {TYPE_1__* p_fd; } ;
struct TYPE_5__ {int fd_cmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nameidata*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct vattr*) ;
 int VAR_9 ;
 int FUNC_4 (struct vnode*,struct vnode**,TYPE_3__*,struct vattr*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 () ;
 int VAR_13 ;
 int FUNC_6 (int ,struct vnode*,TYPE_3__*,struct vattr*) ;
 int FUNC_7 (struct nameidata*) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (struct vnode*,struct mount**,int) ;
 int FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;

int
FUNC_12(struct thread *VAR_14, int VAR_15, const char *VAR_16, enum uio_seg VAR_17,
    int VAR_18)
{
 struct mount *VAR_19;
 struct vnode *VAR_20;
 struct vattr VAR_21;
 struct nameidata VAR_22;
 int VAR_23;

 FUNC_0(VAR_18);
restart:
 FUNC_5();
 FUNC_2(&VAR_22, VAR_2, VAR_4 | VAR_8 | VAR_1 |
     VAR_6, VAR_17, VAR_16, VAR_15, &VAR_13,
     VAR_14);
 VAR_22.ni_cnd.cn_flags |= VAR_12;
 if ((VAR_23 = FUNC_7(&VAR_22)) != 0)
  return (VAR_23);
 VAR_20 = VAR_22.ni_vp;
 if (VAR_20 != ((void*)0)) {
  FUNC_1(&VAR_22, VAR_5);





  if (VAR_20 == VAR_22.ni_dvp)
   FUNC_11(VAR_22.ni_dvp);
  else
   FUNC_10(VAR_22.ni_dvp);
  FUNC_11(VAR_20);
  return (VAR_3);
 }
 if (FUNC_9(VAR_22.ni_dvp, &VAR_19, VAR_10) != 0) {
  FUNC_1(&VAR_22, VAR_5);
  FUNC_10(VAR_22.ni_dvp);
  if ((VAR_23 = FUNC_9(((void*)0), &VAR_19, VAR_11 | VAR_7)) != 0)
   return (VAR_23);
  goto restart;
 }
 FUNC_3(&VAR_21);
 VAR_21.va_type = VAR_9;
 VAR_21.va_mode = (VAR_18 & VAR_0) &~ VAR_14->td_proc->p_fd->fd_cmask;






 VAR_23 = FUNC_4(VAR_22.ni_dvp, &VAR_22.ni_vp, &VAR_22.ni_cnd, &VAR_21);



 FUNC_1(&VAR_22, VAR_5);
 FUNC_10(VAR_22.ni_dvp);
 if (VAR_23 == 0)
  FUNC_10(VAR_22.ni_vp);
 FUNC_8(VAR_19);
 return (VAR_23);
}
