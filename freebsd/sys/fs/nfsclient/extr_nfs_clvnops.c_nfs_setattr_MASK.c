
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef scalar_t__ u_quad_t ;
struct vop_setattr_args {int a_cred; struct vattr* a_vap; struct vnode* a_vp; } ;
struct vnode {int v_type; TYPE_1__* v_mount; } ;
struct TYPE_7__ {scalar_t__ tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_sec; } ;
struct vattr {scalar_t__ va_flags; scalar_t__ va_uid; scalar_t__ va_gid; scalar_t__ va_mode; scalar_t__ va_size; TYPE_3__ va_atime; TYPE_2__ va_mtime; } ;
struct thread {int dummy; } ;
struct TYPE_8__ {scalar_t__ na_size; } ;
struct nfsnode {scalar_t__ n_size; int n_flag; TYPE_4__ n_vattr; } ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ gid_t ;
struct TYPE_5__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nfsnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 int VAR_6 ;




 scalar_t__ VAR_7 ;
 int VAR_8 ;

 struct nfsnode* FUNC_2 (struct vnode*) ;
 int VAR_9 ;
 struct thread* VAR_10 ;
 int FUNC_3 (struct vnode*,struct thread*,scalar_t__) ;
 int FUNC_4 (struct vnode*,int ,struct thread*,int) ;
 int FUNC_5 (struct vnode*,struct vattr*,int ,struct thread*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct vop_setattr_args *VAR_11)
{
 struct vnode *VAR_12 = VAR_11->a_vp;
 struct nfsnode *VAR_13 = FUNC_2(VAR_12);
 struct thread *VAR_14 = VAR_10;
 struct vattr *VAR_15 = VAR_11->a_vap;
 int VAR_16 = 0;
 u_quad_t VAR_17;


 VAR_17 = (u_quad_t)0;





 if (VAR_15->va_flags != VAR_7)
  return (VAR_3);




   if ((VAR_15->va_flags != VAR_7 || VAR_15->va_uid != (uid_t)VAR_7 ||
     VAR_15->va_gid != (gid_t)VAR_7 || VAR_15->va_atime.tv_sec != VAR_7 ||
     VAR_15->va_mtime.tv_sec != VAR_7 || VAR_15->va_mode != (mode_t)VAR_7) &&
     (VAR_12->v_mount->mnt_flag & VAR_5))
  return (VAR_4);
 if (VAR_15->va_size != VAR_7) {
   switch (VAR_12->v_type) {
   case 130:
    return (VAR_2);
   case 131:
   case 132:
   case 128:
   case 129:
   if (VAR_15->va_mtime.tv_sec == VAR_7 &&
       VAR_15->va_atime.tv_sec == VAR_7 &&
       VAR_15->va_mode == (mode_t)VAR_7 &&
       VAR_15->va_uid == (uid_t)VAR_7 &&
       VAR_15->va_gid == (gid_t)VAR_7)
    return (0);
    VAR_15->va_size = VAR_7;
    break;
   default:




   if (VAR_12->v_mount->mnt_flag & VAR_5)
    return (VAR_4);






   FUNC_0(VAR_13);
   VAR_17 = VAR_13->n_size;
   FUNC_1(VAR_13);
   VAR_16 = FUNC_3(VAR_12, VAR_14, VAR_15->va_size);
   FUNC_0(VAR_13);
    if (VAR_13->n_flag & VAR_6) {
       VAR_17 = VAR_13->n_size;
       FUNC_1(VAR_13);
       VAR_16 = FUNC_4(VAR_12, VAR_15->va_size == 0 ?
           0 : VAR_9, VAR_14, 1);
       if (VAR_16 != 0) {
        FUNC_7(VAR_12, VAR_17);
        return (VAR_16);
       }




       FUNC_6(VAR_12);
    } else
       FUNC_1(VAR_13);






   FUNC_0(VAR_13);
    VAR_13->n_vattr.na_size = VAR_13->n_size = VAR_15->va_size;
   FUNC_1(VAR_13);
    }
   } else {
  FUNC_0(VAR_13);
  if ((VAR_15->va_mtime.tv_sec != VAR_7 || VAR_15->va_atime.tv_sec != VAR_7) &&
      (VAR_13->n_flag & VAR_6) && VAR_12->v_type == VAR_8) {
   FUNC_1(VAR_13);
   VAR_16 = FUNC_4(VAR_12, VAR_9, VAR_14, 1);
   if (VAR_16 == VAR_0 || VAR_16 == VAR_1)
    return (VAR_16);
  } else
   FUNC_1(VAR_13);
 }
 VAR_16 = FUNC_5(VAR_12, VAR_15, VAR_11->a_cred, VAR_14);
 if (VAR_16 && VAR_15->va_size != VAR_7) {
  FUNC_0(VAR_13);
  VAR_13->n_size = VAR_13->n_vattr.na_size = VAR_17;
  FUNC_7(VAR_12, VAR_17);
  FUNC_1(VAR_13);
 }
 return (VAR_16);
}
