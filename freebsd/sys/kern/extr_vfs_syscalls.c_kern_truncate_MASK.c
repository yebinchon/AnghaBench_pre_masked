
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct vattr {scalar_t__ va_size; } ;
struct thread {int td_ucred; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct mount {int dummy; } ;
typedef scalar_t__ off_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,struct thread*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct vattr*) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct vnode*,int ,int ,struct thread*) ;
 int FUNC_4 (struct vnode*,struct vattr*,int ) ;
 int FUNC_5 (struct vnode*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int ,int ,struct vnode*) ;
 int FUNC_7 (struct nameidata*) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (struct vnode*,int) ;
 int FUNC_10 (struct vnode*,void*) ;
 void* FUNC_11 (struct vnode*,int ,int ) ;
 int FUNC_12 (struct vnode*,struct mount**,int) ;
 int FUNC_13 (struct vnode*) ;
 int FUNC_14 (struct vnode*) ;

int
FUNC_15(struct thread *VAR_14, const char *VAR_15, enum uio_seg VAR_16,
    off_t VAR_17)
{
 struct mount *VAR_18;
 struct vnode *VAR_19;
 void *VAR_20;
 struct vattr VAR_21;
 struct nameidata VAR_22;
 int VAR_23;

 if (VAR_17 < 0)
  return(VAR_1);
 FUNC_1(&VAR_22, VAR_6, VAR_3 | VAR_0, VAR_16, VAR_15, VAR_14);
 if ((VAR_23 = FUNC_7(&VAR_22)) != 0)
  return (VAR_23);
 VAR_19 = VAR_22.ni_vp;
 VAR_20 = FUNC_11(VAR_19, 0, VAR_9);
 if ((VAR_23 = FUNC_12(VAR_19, &VAR_18, VAR_13 | VAR_10)) != 0) {
  FUNC_10(VAR_19, VAR_20);
  FUNC_14(VAR_19);
  return (VAR_23);
 }
 FUNC_0(&VAR_22, VAR_7);
 FUNC_9(VAR_19, VAR_4 | VAR_5);
 if (VAR_19->v_type == VAR_11)
  VAR_23 = VAR_2;




 else if ((VAR_23 = FUNC_13(VAR_19)) == 0 &&
     (VAR_23 = FUNC_3(VAR_19, VAR_12, VAR_14->td_ucred, VAR_14)) == 0) {
  FUNC_2(&VAR_21);
  VAR_21.va_size = VAR_17;
  VAR_23 = FUNC_4(VAR_19, &VAR_21, VAR_14->td_ucred);
 }
 FUNC_5(VAR_19, 0);
 FUNC_8(VAR_18);
 FUNC_10(VAR_19, VAR_20);
 FUNC_14(VAR_19);
 return (VAR_23);
}
