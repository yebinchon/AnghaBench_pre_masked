
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_symlink_args {char* a_target; struct vattr* a_vap; struct componentname* a_cnp; struct vnode** a_vpp; struct vnode* a_dvp; } ;
struct vnode {int dummy; } ;
struct vattr {scalar_t__ va_type; } ;
struct componentname {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vnode*,struct vnode**,struct vattr*,struct componentname*,char const*) ;

__attribute__((used)) static int
FUNC_2(struct vop_symlink_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_dvp;
 struct vnode **VAR_3 = VAR_1->a_vpp;
 struct componentname *VAR_4 = VAR_1->a_cnp;
 struct vattr *VAR_5 = VAR_1->a_vap;
 const char *VAR_6 = VAR_1->a_target;




 VAR_5->va_type = VAR_0;


 return FUNC_1(VAR_2, VAR_3, VAR_5, VAR_4, VAR_6);
}
