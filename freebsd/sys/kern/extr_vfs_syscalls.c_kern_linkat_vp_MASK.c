
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; scalar_t__ v_mount; } ;
struct thread {int td_ucred; } ;
struct nameidata {struct vnode* ni_dvp; int ni_cnd; struct vnode* ni_vp; } ;
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
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct vnode*,struct vnode*,int *) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct vnode*,int ) ;
 int VAR_15 ;
 int FUNC_5 (int ,struct vnode*,struct vnode*,int *) ;
 int FUNC_6 (struct nameidata*) ;
 int FUNC_7 (struct mount*) ;
 int FUNC_8 (struct vnode*,int ) ;
 int FUNC_9 (struct vnode*,struct mount**,int) ;
 int FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;

__attribute__((used)) static int
FUNC_12(struct thread *VAR_16, struct vnode *VAR_17, int VAR_18, const char *VAR_19,
    enum uio_seg VAR_20)
{
 struct nameidata VAR_21;
 struct mount *VAR_22;
 int VAR_23;

 if (VAR_17->v_type == VAR_12) {
  FUNC_11(VAR_17);
  return (VAR_4);
 }
 FUNC_1(&VAR_21, VAR_1,
     VAR_7 | VAR_11 | VAR_0 | VAR_9, VAR_20, VAR_19, VAR_18,
     &VAR_15, VAR_16);
 if ((VAR_23 = FUNC_6(&VAR_21)) == 0) {
  if (VAR_21.ni_vp != ((void*)0)) {
   FUNC_0(&VAR_21, VAR_8);
   if (VAR_21.ni_dvp == VAR_21.ni_vp)
    FUNC_11(VAR_21.ni_dvp);
   else
    FUNC_10(VAR_21.ni_dvp);
   FUNC_11(VAR_21.ni_vp);
   FUNC_11(VAR_17);
   return (VAR_3);
  } else if (VAR_21.ni_dvp->v_mount != VAR_17->v_mount) {





   FUNC_0(&VAR_21, VAR_8);
   FUNC_10(VAR_21.ni_dvp);
   FUNC_11(VAR_17);
   return (VAR_5);
  } else if ((VAR_23 = FUNC_8(VAR_17, VAR_6)) == 0) {
   VAR_23 = FUNC_4(VAR_17, VAR_16->td_ucred);





   if (VAR_23 != 0) {
    FUNC_10(VAR_17);
    FUNC_10(VAR_21.ni_dvp);
    FUNC_0(&VAR_21, VAR_8);
    return (VAR_23);
   }
   VAR_23 = FUNC_9(VAR_17, &VAR_22, VAR_13);
   if (VAR_23 != 0) {
    FUNC_10(VAR_17);
    FUNC_10(VAR_21.ni_dvp);
    FUNC_0(&VAR_21, VAR_8);
    VAR_23 = FUNC_9(((void*)0), &VAR_22,
        VAR_14 | VAR_10);
    if (VAR_23 != 0)
     return (VAR_23);
    return (VAR_2);
   }
   VAR_23 = FUNC_2(VAR_21.ni_dvp, VAR_17, &VAR_21.ni_cnd);
   FUNC_3(VAR_17, 0);
   FUNC_10(VAR_21.ni_dvp);
   FUNC_7(VAR_22);
   FUNC_0(&VAR_21, VAR_8);
  } else {
   FUNC_10(VAR_21.ni_dvp);
   FUNC_0(&VAR_21, VAR_8);
   FUNC_11(VAR_17);
   return (VAR_2);
  }
 }
 FUNC_11(VAR_17);
 return (VAR_23);
}
