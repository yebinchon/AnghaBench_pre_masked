
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_mknod_args {TYPE_1__* a_dvp; int a_cnp; struct vnode** a_vpp; struct vattr* a_vap; } ;
struct vnode {int v_type; } ;
struct vattr {scalar_t__ va_rdev; int va_mode; int va_type; } ;
struct inode {int i_flag; scalar_t__ i_rdev; int i_number; } ;
typedef int ino_t ;
struct TYPE_2__ {int v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,struct vnode**) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct inode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (int ,TYPE_1__*,struct vnode**,int ) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;

__attribute__((used)) static int
FUNC_6(struct vop_mknod_args *VAR_7)
{
 struct vattr *VAR_8 = VAR_7->a_vap;
 struct vnode **VAR_9 = VAR_7->a_vpp;
 struct inode *VAR_10;
 ino_t VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(FUNC_0(VAR_8->va_type, VAR_8->va_mode),
     VAR_7->a_dvp, VAR_9, VAR_7->a_cnp);
 if (VAR_12)
  return (VAR_12);
 VAR_10 = FUNC_2(*VAR_9);
 VAR_10->i_flag |= VAR_0 | VAR_1 | VAR_3;
 if (VAR_8->va_rdev != VAR_6) {




  if (!(VAR_10->i_flag & VAR_2))
   VAR_10->i_rdev = VAR_8->va_rdev;
 }





 (*VAR_9)->v_type = VAR_5;
 VAR_11 = VAR_10->i_number;
 FUNC_4(*VAR_9);
 FUNC_5(*VAR_9);
 VAR_12 = FUNC_1(VAR_7->a_dvp->v_mount, VAR_11, VAR_4, VAR_9);
 if (VAR_12) {
  *VAR_9 = ((void*)0);
  return (VAR_12);
 }
 return (0);
}
