
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_mknod_args {struct vattr* a_vap; struct componentname* a_cnp; struct vnode** a_vpp; struct vnode* a_dvp; } ;
struct vnode {int dummy; } ;
struct vattr {int dummy; } ;
struct componentname {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,struct vnode**,struct componentname*,struct vattr*) ;
 scalar_t__ FUNC_1 (struct vnode*) ;

__attribute__((used)) static int
FUNC_2(struct vop_mknod_args *VAR_1)
{

 struct vnode *VAR_2 = VAR_1->a_dvp;
 struct vnode **VAR_3 = VAR_1->a_vpp;
 struct componentname *VAR_4 = VAR_1->a_cnp;
 struct vattr *VAR_5 = VAR_1->a_vap;

 if (FUNC_1(VAR_2))
  return VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
