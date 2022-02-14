
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_remove_args {TYPE_2__* a_cnp; TYPE_3__* a_vp; TYPE_1__* a_dvp; } ;
struct mqfs_node {int dummy; } ;
struct mqfs_info {int mi_lock; } ;
struct TYPE_6__ {scalar_t__ v_type; } ;
struct TYPE_5__ {int cn_cred; } ;
struct TYPE_4__ {int v_mount; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mqfs_info* FUNC_0 (int ) ;
 struct mqfs_node* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct mqfs_node*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct vop_remove_args *VAR_2)
{
 struct mqfs_info *VAR_3 = FUNC_0(VAR_2->a_dvp->v_mount);
 struct mqfs_node *VAR_4;
 int VAR_5;

 if (VAR_2->a_vp->v_type == VAR_1)
                return (VAR_0);
 VAR_4 = FUNC_1(VAR_2->a_vp);
 FUNC_3(&VAR_3->mi_lock);
 VAR_5 = FUNC_2(VAR_4, VAR_2->a_cnp->cn_cred);
 FUNC_4(&VAR_3->mi_lock);
 return (VAR_5);
}
