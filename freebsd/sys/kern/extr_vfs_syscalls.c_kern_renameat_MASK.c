
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; } ;
struct thread {int td_ucred; } ;
struct TYPE_7__ {int cn_flags; } ;
struct TYPE_6__ {int fc_rights; } ;
struct nameidata {int ni_resflags; struct vnode* ni_startdir; struct vnode* ni_dvp; TYPE_2__ ni_cnd; struct vnode* ni_vp; TYPE_1__ ni_filecaps; } ;
struct mount {int dummy; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_9 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (struct vnode*,struct vnode*,TYPE_2__*,struct vnode*,struct vnode*,TYPE_2__*) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (int ,struct vnode*,struct vnode*,TYPE_2__*) ;
 int FUNC_7 (int ,struct vnode*,struct vnode*,int,TYPE_2__*) ;
 int FUNC_8 (struct nameidata*) ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (struct vnode*,struct mount**,int) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*) ;

int
FUNC_13(struct thread *VAR_23, int VAR_24, const char *VAR_25, int VAR_26,
    const char *VAR_27, enum uio_seg VAR_28)
{
 struct mount *VAR_29 = ((void*)0);
 struct vnode *VAR_30, *VAR_31, *VAR_32;
 struct nameidata VAR_33, VAR_34;
 int VAR_35;

again:
 FUNC_4();





 FUNC_1(&VAR_33, VAR_3, VAR_18 | VAR_14 | VAR_1,
     VAR_28, VAR_25, VAR_24,
     &VAR_20, VAR_23);


 if ((VAR_35 = FUNC_8(&VAR_33)) != 0)
  return (VAR_35);







 VAR_31 = VAR_33.ni_vp;
 FUNC_1(&VAR_34, VAR_13, VAR_8 | VAR_7 | VAR_11 |
     VAR_14 | VAR_2, VAR_28, VAR_27, VAR_26,
     &VAR_21, VAR_23);
 if (VAR_33.ni_vp->v_type == VAR_15)
  VAR_34.ni_cnd.cn_flags |= VAR_19;
 if ((VAR_35 = FUNC_8(&VAR_34)) != 0) {

  if (VAR_35 == VAR_5 && VAR_31->v_type == VAR_15)
   VAR_35 = VAR_4;
  FUNC_0(&VAR_33, VAR_9);
  FUNC_12(VAR_33.ni_dvp);
  FUNC_12(VAR_31);
  goto out1;
 }
 VAR_32 = VAR_34.ni_dvp;
 VAR_30 = VAR_34.ni_vp;
 VAR_35 = FUNC_10(VAR_31, &VAR_29, VAR_16);
 if (VAR_35 != 0) {
  FUNC_0(&VAR_33, VAR_9);
  FUNC_0(&VAR_34, VAR_9);
  if (VAR_30 != ((void*)0))
   FUNC_11(VAR_30);
  if (VAR_32 == VAR_30)
   FUNC_12(VAR_32);
  else
   FUNC_11(VAR_32);
  FUNC_12(VAR_33.ni_dvp);
  FUNC_12(VAR_31);
  FUNC_12(VAR_34.ni_startdir);
  if (VAR_33.ni_startdir != ((void*)0))
   FUNC_12(VAR_33.ni_startdir);
  VAR_35 = FUNC_10(((void*)0), &VAR_29, VAR_17 | VAR_12);
  if (VAR_35 != 0)
   return (VAR_35);
  goto again;
 }
 if (VAR_30 != ((void*)0)) {
  if (VAR_31->v_type == VAR_15 && VAR_30->v_type != VAR_15) {
   VAR_35 = VAR_6;
   goto out;
  } else if (VAR_31->v_type != VAR_15 && VAR_30->v_type == VAR_15) {
   VAR_35 = VAR_5;
   goto out;
  }
 }
 if (VAR_31 == VAR_32) {
  VAR_35 = VAR_4;
  goto out;
 }




 if (VAR_31 == VAR_30)
  VAR_35 = -1;





out:
 if (VAR_35 == 0) {
  VAR_35 = FUNC_2(VAR_33.ni_dvp, VAR_33.ni_vp, &VAR_33.ni_cnd,
      VAR_34.ni_dvp, VAR_34.ni_vp, &VAR_34.ni_cnd);
  FUNC_0(&VAR_33, VAR_9);
  FUNC_0(&VAR_34, VAR_9);
 } else {
  FUNC_0(&VAR_33, VAR_9);
  FUNC_0(&VAR_34, VAR_9);
  if (VAR_30 != ((void*)0))
   FUNC_11(VAR_30);
  if (VAR_32 == VAR_30)
   FUNC_12(VAR_32);
  else
   FUNC_11(VAR_32);
  FUNC_12(VAR_33.ni_dvp);
  FUNC_12(VAR_31);
 }
 FUNC_12(VAR_34.ni_startdir);
 FUNC_9(VAR_29);
out1:
 if (VAR_33.ni_startdir)
  FUNC_12(VAR_33.ni_startdir);
 if (VAR_35 == -1)
  return (0);
 return (VAR_35);
}
