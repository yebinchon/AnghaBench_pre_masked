
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; int v_vflag; int v_iflag; } ;
struct thread {int td_ucred; } ;
struct nameidata {struct vnode* ni_dvp; int ni_cnd; struct vnode* ni_vp; } ;
struct mount {int dummy; } ;
struct file {struct vnode* f_vnode; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef int cap_rights_t ;


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
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_13 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct vnode*,struct vnode*,int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int VAR_21 ;
 int FUNC_5 (struct file*,struct thread*) ;
 int FUNC_6 (struct thread*,int,int ,struct file**) ;
 int FUNC_7 (int ,struct vnode*,struct vnode*,int *) ;
 int FUNC_8 (struct nameidata*) ;
 int FUNC_9 (struct vnode*,int ) ;
 int FUNC_10 (struct mount*) ;
 int FUNC_11 (struct vnode*,struct mount**,int) ;
 int FUNC_12 (struct vnode*) ;
 int FUNC_13 (struct vnode*) ;

int
FUNC_14(struct thread *VAR_22, int VAR_23, const char *VAR_24, int VAR_25,
    enum uio_seg VAR_26, int VAR_27)
{
 struct mount *VAR_28;
 struct vnode *VAR_29;
 struct file *VAR_30;
 struct nameidata VAR_31;
 cap_rights_t VAR_32;
 int VAR_33;

 VAR_30 = ((void*)0);
 if (VAR_25 != VAR_10) {
  VAR_33 = FUNC_6(VAR_22, VAR_25, FUNC_4(&VAR_32, VAR_3),
      &VAR_30);
  if (VAR_33 != 0)
   return (VAR_33);
 }

restart:
 FUNC_3();
 FUNC_1(&VAR_31, VAR_4, VAR_12 | VAR_11 | VAR_1 |
     ((VAR_27 & VAR_0) != 0 ? VAR_2 : 0),
     VAR_26, VAR_24, VAR_23, &VAR_21, VAR_22);
 if ((VAR_33 = FUNC_8(&VAR_31)) != 0)
  goto fdout;
 VAR_29 = VAR_31.ni_vp;
 if (VAR_29->v_type != VAR_15) {
  VAR_33 = VAR_9;
  goto out;
 }



 if (VAR_31.ni_dvp == VAR_29) {
  VAR_33 = VAR_8;
  goto out;
 }



 if (VAR_29->v_vflag & VAR_18) {
  VAR_33 = VAR_6;
  goto out;
 }

 if (VAR_30 != ((void*)0) && VAR_30->f_vnode != VAR_29) {
  if ((VAR_30->f_vnode->v_iflag & VAR_17) != 0)
   VAR_33 = VAR_5;
  else
   VAR_33 = VAR_7;
  goto out;
 }







 if (FUNC_11(VAR_31.ni_dvp, &VAR_28, VAR_19) != 0) {
  FUNC_0(&VAR_31, VAR_13);
  FUNC_12(VAR_29);
  if (VAR_31.ni_dvp == VAR_29)
   FUNC_13(VAR_31.ni_dvp);
  else
   FUNC_12(VAR_31.ni_dvp);
  if ((VAR_33 = FUNC_11(((void*)0), &VAR_28, VAR_20 | VAR_14)) != 0)
   goto fdout;
  goto restart;
 }
 FUNC_9(VAR_29, VAR_16);
 VAR_33 = FUNC_2(VAR_31.ni_dvp, VAR_31.ni_vp, &VAR_31.ni_cnd);
 FUNC_10(VAR_28);
out:
 FUNC_0(&VAR_31, VAR_13);
 FUNC_12(VAR_29);
 if (VAR_31.ni_dvp == VAR_29)
  FUNC_13(VAR_31.ni_dvp);
 else
  FUNC_12(VAR_31.ni_dvp);
fdout:
 if (VAR_30 != ((void*)0))
  FUNC_5(VAR_30, VAR_22);
 return (VAR_33);
}
