
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int * v_data; int * v_object; int v_mount; } ;
struct TYPE_2__ {int tn_aobj; } ;
struct tmpfs_node {scalar_t__ tn_links; int tn_vpstate; TYPE_1__ tn_reg; } ;
struct tmpfs_mount {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tmpfs_node*) ;
 int FUNC_2 (struct tmpfs_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tmpfs_mount* FUNC_3 (int ) ;
 struct tmpfs_node* FUNC_4 (struct vnode*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*,int ) ;
 int FUNC_7 (struct tmpfs_mount*,struct tmpfs_node*) ;
 int FUNC_8 (struct vnode*) ;
 scalar_t__ FUNC_9 (struct vnode*) ;

int
FUNC_10(struct vop_reclaim_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;

 struct tmpfs_mount *VAR_5;
 struct tmpfs_node *VAR_6;

 VAR_6 = FUNC_4(VAR_4);
 VAR_5 = FUNC_3(VAR_4->v_mount);

 if (VAR_4->v_type == VAR_2)
  FUNC_6(VAR_4, VAR_6->tn_reg.tn_aobj);
 VAR_4->v_object = ((void*)0);
 if (FUNC_9(VAR_4))
  FUNC_5(VAR_4);

 FUNC_1(VAR_6);
 FUNC_8(VAR_4);




 if (VAR_6->tn_links == 0 &&
     (VAR_6->tn_vpstate & VAR_0) == 0) {
  VAR_6->tn_vpstate = VAR_1;
  FUNC_2(VAR_6);
  FUNC_7(VAR_5, VAR_6);
 } else
  FUNC_2(VAR_6);

 FUNC_0(VAR_4->v_data == ((void*)0));
 return 0;
}
