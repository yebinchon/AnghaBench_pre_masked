
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * vm_object_t ;
typedef int uid_t ;
struct vop_open_args {int a_mode; int a_td; int a_cred; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int v_writecount; int * v_object; int v_mount; } ;
struct vattr {scalar_t__ va_filerev; int va_size; int va_mtime; } ;
struct ucred {int dummy; } ;
struct TYPE_2__ {int na_mtime; } ;
struct nfsnode {int n_flag; scalar_t__ n_change; scalar_t__ n_directio_opens; TYPE_1__ n_vattr; int n_mtime; struct ucred* n_writecred; scalar_t__ n_direofoffset; scalar_t__ n_attrstamp; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nfsnode*) ;
 int FUNC_3 (struct nfsnode*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct vnode*,struct vattr*,int ) ;
 scalar_t__ VAR_12 ;
 struct nfsnode* FUNC_10 (struct vnode*) ;
 int VAR_13 ;
 int FUNC_11 (struct ucred*) ;
 struct ucred* FUNC_12 (int ) ;
 int VAR_14 ;
 int FUNC_13 (struct vnode*,int ,int ,int ,int ) ;
 int FUNC_14 (struct vnode*,int ,int ,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_15 (int ,int,int ,int ) ;
 int FUNC_16 (struct vnode*,int ,int ) ;
 int FUNC_17 (struct vnode*,int,int ,int ) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,int ,int ) ;
 int FUNC_20 (struct vnode*,int ,int ) ;

__attribute__((used)) static int
FUNC_21(struct vop_open_args *VAR_16)
{
 struct vnode *VAR_17 = VAR_16->a_vp;
 struct nfsnode *VAR_18 = FUNC_10(VAR_17);
 struct vattr VAR_19;
 int VAR_20;
 int VAR_21 = VAR_16->a_mode;
 struct ucred *VAR_22;
 vm_object_t VAR_23;

 if (VAR_17->v_type != VAR_12 && VAR_17->v_type != VAR_10 && VAR_17->v_type != VAR_11)
  return (VAR_2);





 if (FUNC_4(VAR_17)) {
  VAR_20 = FUNC_17(VAR_17, VAR_21, VAR_16->a_cred, VAR_16->a_td);
  if (VAR_20) {
   VAR_20 = FUNC_15(VAR_16->a_td, VAR_20, (uid_t)0,
       (gid_t)0);
   return (VAR_20);
  }
 }





 FUNC_2(VAR_18);
 if (VAR_18->n_flag & VAR_5) {
  FUNC_3(VAR_18);
  VAR_20 = FUNC_14(VAR_17, VAR_13, VAR_16->a_td, 1);
  if (VAR_20 == VAR_0 || VAR_20 == VAR_1) {
   if (FUNC_4(VAR_17))
    (void) FUNC_16(VAR_17, 0, VAR_16->a_td);
   return (VAR_20);
  }
  FUNC_2(VAR_18);
  VAR_18->n_attrstamp = 0;
  FUNC_0(VAR_17);
  if (VAR_17->v_type == VAR_10)
   VAR_18->n_direofoffset = 0;
  FUNC_3(VAR_18);
  VAR_20 = FUNC_9(VAR_17, &VAR_19, VAR_16->a_cred);
  if (VAR_20) {
   if (FUNC_4(VAR_17))
    (void) FUNC_16(VAR_17, 0, VAR_16->a_td);
   return (VAR_20);
  }
  FUNC_2(VAR_18);
  VAR_18->n_mtime = VAR_19.va_mtime;
  if (FUNC_4(VAR_17))
   VAR_18->n_change = VAR_19.va_filerev;
 } else {
  FUNC_3(VAR_18);
  VAR_20 = FUNC_9(VAR_17, &VAR_19, VAR_16->a_cred);
  if (VAR_20) {
   if (FUNC_4(VAR_17))
    (void) FUNC_16(VAR_17, 0, VAR_16->a_td);
   return (VAR_20);
  }
  FUNC_2(VAR_18);
  if ((FUNC_4(VAR_17) && VAR_18->n_change != VAR_19.va_filerev) ||
      FUNC_5(&VAR_18->n_mtime, &VAR_19.va_mtime)) {
   if (VAR_17->v_type == VAR_10)
    VAR_18->n_direofoffset = 0;
   FUNC_3(VAR_18);
   VAR_20 = FUNC_14(VAR_17, VAR_13, VAR_16->a_td, 1);
   if (VAR_20 == VAR_0 || VAR_20 == VAR_1) {
    if (FUNC_4(VAR_17))
     (void) FUNC_16(VAR_17, 0, VAR_16->a_td);
    return (VAR_20);
   }
   FUNC_2(VAR_18);
   VAR_18->n_mtime = VAR_19.va_mtime;
   if (FUNC_4(VAR_17))
    VAR_18->n_change = VAR_19.va_filerev;
  }
 }




 if (VAR_15 && (VAR_21 & VAR_9) &&
     (VAR_17->v_type == VAR_12)) {
  if (VAR_18->n_directio_opens == 0) {
   FUNC_3(VAR_18);
   VAR_20 = FUNC_14(VAR_17, VAR_13, VAR_16->a_td, 1);
   if (VAR_20) {
    if (FUNC_4(VAR_17))
     (void) FUNC_16(VAR_17, 0, VAR_16->a_td);
    return (VAR_20);
   }
   FUNC_2(VAR_18);
   VAR_18->n_flag |= VAR_6;
  }
  VAR_18->n_directio_opens++;
 }


 if (FUNC_1(FUNC_6(VAR_17->v_mount)) && (VAR_21 & VAR_3) != 0)
  VAR_18->n_flag |= VAR_7;
 if ((VAR_21 & VAR_3) != 0) {
  VAR_22 = VAR_18->n_writecred;
  VAR_18->n_writecred = FUNC_12(VAR_16->a_cred);
 } else
  VAR_22 = ((void*)0);
 FUNC_3(VAR_18);

 if (VAR_22 != ((void*)0))
  FUNC_11(VAR_22);
 FUNC_20(VAR_17, VAR_19.va_size, VAR_16->a_td);
 if (VAR_17->v_writecount <= -1) {
  if ((VAR_23 = VAR_17->v_object) != ((void*)0) &&
      FUNC_18(VAR_23)) {
   FUNC_7(VAR_23);
   FUNC_19(VAR_23, 0, 0, VAR_8);
   FUNC_8(VAR_23);
  }


  FUNC_13(VAR_17, VAR_4, VAR_14, 0, 0);


  VAR_18 = FUNC_10(VAR_17);
  FUNC_2(VAR_18);
  VAR_18->n_mtime = VAR_18->n_vattr.na_mtime;
  FUNC_3(VAR_18);
 }
 return (0);
}
