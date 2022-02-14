
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef scalar_t__ u_quad_t ;
typedef scalar_t__ u_long ;
struct vop_setattr_args {struct vattr* a_vap; struct vnode* a_vp; } ;
struct vnode {int v_type; } ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;
struct vattr {scalar_t__ va_flags; scalar_t__ va_uid; scalar_t__ va_gid; scalar_t__ va_mode; scalar_t__ va_size; TYPE_2__ va_mtime; TYPE_1__ va_atime; } ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



__attribute__((used)) static int
FUNC_0(struct vop_setattr_args *VAR_3)
{
 struct vnode *VAR_4;
 struct vattr *VAR_5;

 VAR_4 = VAR_3->a_vp;
 VAR_5 = VAR_3->a_vap;
 if (VAR_5->va_flags != (u_long)VAR_2 || VAR_5->va_uid != (uid_t)VAR_2 ||
     VAR_5->va_gid != (gid_t)VAR_2 || VAR_5->va_atime.tv_sec != VAR_2 ||
     VAR_5->va_mtime.tv_sec != VAR_2 || VAR_5->va_mode != (mode_t)VAR_2)
  return (VAR_1);
 if (VAR_5->va_size != (u_quad_t)VAR_2) {
  switch (VAR_4->v_type) {
  case 134:
   return (VAR_0);
  case 132:
  case 129:
   return (VAR_1);
  case 135:
  case 136:
  case 128:
  case 133:
  case 130:
  case 137:
  case 131:
   return (0);
  }
 }
 return (0);
}
