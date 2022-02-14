
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; int v_iflag; int v_vflag; } ;
struct thread {int td_ucred; } ;
struct stat {scalar_t__ st_ino; } ;
struct nameidata {struct vnode* ni_dvp; int ni_cnd; struct vnode* ni_vp; } ;
struct mount {int dummy; } ;
struct file {struct vnode* f_vnode; } ;
typedef scalar_t__ ino_t ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_13 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct vnode*,struct vnode*,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 () ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct thread*,int,int *,struct file**) ;
 int FUNC_6 (int ,struct vnode*,struct vnode*,int *) ;
 int FUNC_7 (struct nameidata*) ;
 int FUNC_8 (struct vnode*,int ) ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (struct vnode*,struct mount**,int) ;
 int FUNC_11 (struct vnode*,struct stat*,int ,int ,struct thread*) ;
 int FUNC_12 (struct vnode*) ;
 int FUNC_13 (struct vnode*) ;

int
FUNC_14(struct thread *VAR_24, int VAR_25, const char *VAR_26, int VAR_27,
    enum uio_seg VAR_28, int VAR_29, ino_t VAR_30)
{
 struct mount *VAR_31;
 struct file *VAR_32;
 struct vnode *VAR_33;
 struct nameidata VAR_34;
 struct stat VAR_35;
 int VAR_36;

 VAR_32 = ((void*)0);
 if (VAR_27 != VAR_10) {
  VAR_36 = FUNC_5(VAR_24, VAR_27, &VAR_22, &VAR_32);
  if (VAR_36 != 0)
   return (VAR_36);
 }

restart:
 FUNC_3();
 FUNC_1(&VAR_34, VAR_3, VAR_12 | VAR_11 | VAR_1 |
     ((VAR_29 & VAR_0) != 0 ? VAR_2 : 0),
     VAR_28, VAR_26, VAR_25, &VAR_23, VAR_24);
 if ((VAR_36 = FUNC_7(&VAR_34)) != 0) {
  if (VAR_36 == VAR_8)
   VAR_36 = VAR_9;
  goto fdout;
 }
 VAR_33 = VAR_34.ni_vp;
 if (VAR_33->v_type == VAR_16 && VAR_30 == 0) {
  VAR_36 = VAR_9;
 } else if (VAR_30 != 0 &&
    ((VAR_36 = FUNC_11(VAR_33, &VAR_35, VAR_24->td_ucred, VAR_14, VAR_24)) == 0) &&
    VAR_35.st_ino != VAR_30) {
  VAR_36 = VAR_7;
 } else if (VAR_32 != ((void*)0) && VAR_32->f_vnode != VAR_33) {
  if ((VAR_32->f_vnode->v_iflag & VAR_18) != 0)
   VAR_36 = VAR_4;
  else
   VAR_36 = VAR_6;
 } else {





  if (VAR_33->v_vflag & VAR_19)
   VAR_36 = VAR_5;
 }
 if (VAR_36 == 0) {
  if (FUNC_10(VAR_34.ni_dvp, &VAR_31, VAR_20) != 0) {
   FUNC_0(&VAR_34, VAR_13);
   FUNC_12(VAR_34.ni_dvp);
   if (VAR_33 == VAR_34.ni_dvp)
    FUNC_13(VAR_33);
   else
    FUNC_12(VAR_33);
   if ((VAR_36 = FUNC_10(((void*)0), &VAR_31,
       VAR_21 | VAR_15)) != 0) {
    goto fdout;
   }
   goto restart;
  }






  FUNC_8(VAR_33, VAR_17);
  VAR_36 = FUNC_2(VAR_34.ni_dvp, VAR_33, &VAR_34.ni_cnd);



  FUNC_9(VAR_31);
 }
 FUNC_0(&VAR_34, VAR_13);
 FUNC_12(VAR_34.ni_dvp);
 if (VAR_33 == VAR_34.ni_dvp)
  FUNC_13(VAR_33);
 else
  FUNC_12(VAR_33);
fdout:
 if (VAR_32 != ((void*)0))
  FUNC_4(VAR_32, VAR_24);
 return (VAR_36);
}
