
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_create_args {struct vattr* a_vap; struct componentname* a_cnp; struct vnode** a_vpp; struct vnode* a_dvp; } ;
struct vnode {int dummy; } ;
struct vattr {scalar_t__ va_type; } ;
struct componentname {int cn_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct vnode*,struct vnode*,struct componentname*) ;
 int FUNC_2 (struct vnode*,struct vnode**,struct vattr*,struct componentname*,int *) ;
 scalar_t__ FUNC_3 (struct vnode*) ;

__attribute__((used)) static int
FUNC_4(struct vop_create_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_dvp;
 struct vnode **VAR_5 = VAR_3->a_vpp;
 struct componentname *VAR_6 = VAR_3->a_cnp;
 struct vattr *VAR_7 = VAR_3->a_vap;
 int VAR_8;

 FUNC_0(VAR_7->va_type == VAR_1 || VAR_7->va_type == VAR_2);

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_7, VAR_6, ((void*)0));
 if (VAR_8 == 0 && (VAR_6->cn_flags & VAR_0) != 0 && FUNC_3(VAR_4))
  FUNC_1(VAR_4, *VAR_5, VAR_6);
 return (VAR_8);
}
