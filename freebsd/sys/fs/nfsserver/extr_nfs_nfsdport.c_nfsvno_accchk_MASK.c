
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct vnode {int v_type; TYPE_1__* v_mount; } ;
struct vattr {scalar_t__ va_uid; } ;
struct ucred {scalar_t__ cr_uid; } ;
struct thread {int dummy; } ;
struct nfsexstuff {int dummy; } ;
typedef int accmode_t ;
struct TYPE_2__ {int mnt_flag; } ;


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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nfsexstuff*) ;
 scalar_t__ FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;

 int FUNC_4 (struct vnode*,int,struct ucred*,struct thread*) ;
 int FUNC_5 (struct vnode*,struct vattr*,struct ucred*) ;
 scalar_t__ FUNC_6 (struct vnode*) ;

 int VAR_13 ;

int
FUNC_7(struct vnode *VAR_14, accmode_t VAR_15, struct ucred *VAR_16,
    struct nfsexstuff *VAR_17, struct thread *VAR_18, int VAR_19, int VAR_20,
    u_int32_t *VAR_21)
{
 struct vattr VAR_22;
 int VAR_23 = 0, VAR_24 = 0;

 if (VAR_20 == 0) {
  if (FUNC_2(VAR_14, VAR_4) != 0) {
   VAR_23 = VAR_1;
   goto out;
  }
 }
 if (VAR_15 & VAR_13) {






  if (FUNC_1(VAR_17) ||
      (VAR_14->v_mount->mnt_flag & VAR_5)) {
   switch (VAR_14->v_type) {
   case 128:
   case 130:
   case 129:
    VAR_23 = VAR_2;
   default:
    break;
   }
  }





  if (FUNC_6(VAR_14) && VAR_23 == 0)
   VAR_23 = VAR_3;
 }
 if (VAR_23 != 0) {
  if (VAR_20 == 0)
   FUNC_3(VAR_14, 0);
  goto out;
 }




 VAR_23 = FUNC_4(VAR_14, VAR_15, VAR_16, VAR_18);
 if (VAR_23 != 0 && (VAR_15 & (VAR_10 | VAR_11))) {




  VAR_23 = FUNC_4(VAR_14, VAR_15 | VAR_12, VAR_16, VAR_18);
  if (VAR_23 == 0) {
   if (VAR_14->v_type == 130) {
    VAR_15 &= ~(VAR_10 | VAR_11);
    VAR_15 |= VAR_13;
    VAR_23 = FUNC_4(VAR_14, VAR_15, VAR_16, VAR_18);
   } else if (VAR_21 != ((void*)0)) {
    *VAR_21 &= ~VAR_9;
   }
  }
 }





 if (VAR_19 != VAR_8 &&
     (VAR_23 == VAR_1 || VAR_23 == VAR_0)) {
  if (VAR_16->cr_uid == 0 && (VAR_19 & VAR_7))
   VAR_23 = 0;
  else if (VAR_19 & VAR_6) {
   VAR_24 = FUNC_5(VAR_14, &VAR_22, VAR_16);
   if (VAR_24 == 0 && VAR_16->cr_uid == VAR_22.va_uid)
    VAR_23 = 0;
  }
 }
 if (VAR_20 == 0)
  FUNC_3(VAR_14, 0);

out:
 FUNC_0(VAR_23);
 return (VAR_23);
}
