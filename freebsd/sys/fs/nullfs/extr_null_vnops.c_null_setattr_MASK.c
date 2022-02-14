
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct vop_setattr_args {struct vattr* a_vap; struct vnode* a_vp; } ;
struct vop_generic_args {int dummy; } ;
struct vnode {int v_type; TYPE_3__* v_mount; } ;
struct TYPE_5__ {scalar_t__ tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct vattr {scalar_t__ va_flags; scalar_t__ va_uid; scalar_t__ va_gid; scalar_t__ va_mode; scalar_t__ va_size; TYPE_2__ va_mtime; TYPE_1__ va_atime; } ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ gid_t ;
struct TYPE_6__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 scalar_t__ VAR_4 ;


 int FUNC_0 (struct vop_generic_args*) ;

__attribute__((used)) static int
FUNC_1(struct vop_setattr_args *VAR_5)
{
 struct vnode *VAR_6 = VAR_5->a_vp;
 struct vattr *VAR_7 = VAR_5->a_vap;

   if ((VAR_7->va_flags != VAR_4 || VAR_7->va_uid != (uid_t)VAR_4 ||
     VAR_7->va_gid != (gid_t)VAR_4 || VAR_7->va_atime.tv_sec != VAR_4 ||
     VAR_7->va_mtime.tv_sec != VAR_4 || VAR_7->va_mode != (mode_t)VAR_4) &&
     (VAR_6->v_mount->mnt_flag & VAR_3))
  return (VAR_2);
 if (VAR_7->va_size != VAR_4) {
   switch (VAR_6->v_type) {
   case 132:
    return (VAR_0);
   case 133:
   case 134:
   case 128:
   case 131:
   if (VAR_7->va_flags != VAR_4)
    return (VAR_1);
   return (0);
  case 129:
  case 130:
   default:




   if (VAR_6->v_mount->mnt_flag & VAR_3)
    return (VAR_2);
  }
 }

 return (FUNC_0((struct vop_generic_args *)VAR_5));
}
