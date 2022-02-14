
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_close_args {TYPE_1__* a_vp; } ;
struct tmpfs_node {int dummy; } ;
struct TYPE_5__ {int (* vop_close ) (struct vop_close_args*) ;} ;
struct TYPE_4__ {int v_mount; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct tmpfs_node* FUNC_1 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (struct vop_close_args*) ;
 int FUNC_3 (int ,struct tmpfs_node*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(struct vop_close_args *VAR_2)
{
 struct tmpfs_node *VAR_3;

 VAR_3 = FUNC_1(VAR_2->a_vp);
 FUNC_3(FUNC_0(VAR_2->a_vp->v_mount), VAR_3,
     VAR_0);
 FUNC_4(VAR_2->a_vp);
 return (VAR_1.vop_close(VAR_2));
}
