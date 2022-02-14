
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_generic_args {int dummy; } ;
struct vop_access_args {int a_accmode; struct vnode* a_vp; } ;
struct vnode {int v_type; TYPE_1__* v_mount; } ;
typedef int accmode_t ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct vop_generic_args*) ;

__attribute__((used)) static int
FUNC_1(struct vop_access_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 accmode_t VAR_5 = VAR_3->a_accmode;






 if (VAR_5 & VAR_2) {
  switch (VAR_4->v_type) {
  case 130:
  case 129:
  case 128:
   if (VAR_4->v_mount->mnt_flag & VAR_1)
    return (VAR_0);
   break;
  default:
   break;
  }
 }
 return (FUNC_0((struct vop_generic_args *)VAR_3));
}
