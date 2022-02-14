
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_strategy_args {TYPE_1__* a_bp; int a_vp; } ;
struct vnode {int dummy; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;
struct TYPE_2__ {scalar_t__ b_iocmd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct vnode* VAR_1 ;
 int FUNC_1 (struct vnode*,TYPE_1__*) ;
 struct unionfs_node* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct vop_strategy_args *VAR_2)
{
 struct unionfs_node *VAR_3;
 struct vnode *VAR_4;

 FUNC_0(VAR_2->a_vp);

 VAR_3 = FUNC_2(VAR_2->a_vp);
 VAR_4 = (VAR_3->un_uppervp != VAR_1 ? VAR_3->un_uppervp : VAR_3->un_lowervp);
 return (FUNC_1(VAR_4, VAR_2->a_bp));
}
