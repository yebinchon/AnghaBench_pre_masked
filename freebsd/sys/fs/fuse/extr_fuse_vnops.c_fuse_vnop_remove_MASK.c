
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_remove_args {struct componentname* a_cnp; struct vnode* a_vp; struct vnode* a_dvp; } ;
struct vnode {int dummy; } ;
struct componentname {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnode*,struct vnode*,struct componentname*,int ) ;
 scalar_t__ FUNC_1 (struct vnode*) ;
 scalar_t__ FUNC_2 (struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct vop_remove_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_dvp;
 struct vnode *VAR_5 = VAR_3->a_vp;
 struct componentname *VAR_6 = VAR_3->a_cnp;

 int VAR_7;

 if (FUNC_1(VAR_5)) {
  return VAR_0;
 }
 if (FUNC_2(VAR_5)) {
  return VAR_1;
 }

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_2);

 return VAR_7;
}
