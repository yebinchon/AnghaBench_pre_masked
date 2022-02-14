
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_access_args {int a_accmode; struct vnode* a_vp; struct ucred* a_cred; } ;
struct vnode {int v_type; TYPE_1__* v_mount; } ;
struct vattr {int va_gid; int va_uid; int va_mode; } ;
struct ucred {int dummy; } ;
typedef int accmode_t ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct vnode*,struct vattr*,struct ucred*) ;

 int VAR_2 ;
 int FUNC_1 (int,int ,int ,int ,int,struct ucred*,int *) ;

__attribute__((used)) static int
FUNC_2(struct vop_access_args *VAR_3)
{
 struct vattr *VAR_4;
 struct ucred *VAR_5 = VAR_3->a_cred;
 struct vnode *VAR_6 = VAR_3->a_vp;
 accmode_t VAR_7 = VAR_3->a_accmode;
 struct vattr VAR_8;
 int VAR_9;






 if ((VAR_7 & VAR_2) && (VAR_6->v_mount->mnt_flag & VAR_1)) {
  switch (VAR_6->v_type) {
  case 128:
  case 130:
  case 129:
   return (VAR_0);
  default:
   break;
  }
 }
 VAR_4 = &VAR_8;
 VAR_9 = FUNC_0(VAR_6, VAR_4, VAR_5);
 if (VAR_9)
  goto out;
 VAR_9 = FUNC_1(VAR_6->v_type, VAR_4->va_mode, VAR_4->va_uid, VAR_4->va_gid,
     VAR_7, VAR_5, ((void*)0));
out:
 return VAR_9;
}
