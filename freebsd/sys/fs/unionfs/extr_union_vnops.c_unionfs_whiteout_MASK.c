
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_whiteout_args {int a_flags; struct componentname* a_cnp; int a_dvp; } ;
struct vnode {int dummy; } ;
struct unionfs_node {struct vnode* un_uppervp; } ;
struct componentname {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

 struct vnode* VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vnode*,struct componentname*,int) ;
 struct unionfs_node* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct vop_whiteout_args *VAR_3)
{
 struct unionfs_node *VAR_4;
 struct componentname *VAR_5;
 struct vnode *VAR_6;
 int VAR_7;

 FUNC_1("unionfs_whiteout: enter\n");

 FUNC_0(VAR_3->a_dvp);

 VAR_4 = FUNC_3(VAR_3->a_dvp);
 VAR_5 = VAR_3->a_cnp;
 VAR_6 = VAR_4->un_uppervp;
 VAR_7 = VAR_1;

 if (VAR_6 != VAR_2) {
  switch (VAR_3->a_flags) {
  case 130:
  case 129:
  case 128:
   VAR_7 = FUNC_2(VAR_6, VAR_5, VAR_3->a_flags);
   break;
  default:
   VAR_7 = VAR_0;
   break;
  }
 }

 FUNC_1("unionfs_whiteout: leave (%d)\n", VAR_7);

 return (VAR_7);
}
