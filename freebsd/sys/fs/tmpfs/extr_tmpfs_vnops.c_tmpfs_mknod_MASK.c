
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_mknod_args {struct vattr* a_vap; struct componentname* a_cnp; struct vnode** a_vpp; struct vnode* a_dvp; } ;
struct vnode {int dummy; } ;
struct vattr {scalar_t__ va_type; } ;
struct componentname {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct vnode*,struct vnode**,struct vattr*,struct componentname*,int *) ;

__attribute__((used)) static int
FUNC_1(struct vop_mknod_args *VAR_4)
{
 struct vnode *VAR_5 = VAR_4->a_dvp;
 struct vnode **VAR_6 = VAR_4->a_vpp;
 struct componentname *VAR_7 = VAR_4->a_cnp;
 struct vattr *VAR_8 = VAR_4->a_vap;

 if (VAR_8->va_type != VAR_1 && VAR_8->va_type != VAR_2 &&
     VAR_8->va_type != VAR_3)
  return VAR_0;

 return FUNC_0(VAR_5, VAR_6, VAR_8, VAR_7, ((void*)0));
}
