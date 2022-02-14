
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct vop_print_args {struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
struct udf_node {TYPE_1__* udfmp; scalar_t__ hash_id; } ;
struct TYPE_2__ {int im_dev; } ;


 scalar_t__ VAR_0 ;
 struct udf_node* FUNC_0 (struct vnode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(struct vop_print_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_vp;
 struct udf_node *VAR_3 = FUNC_0(VAR_2);

 FUNC_3("    ino %lu, on dev %s", (u_long)VAR_3->hash_id,
     FUNC_1(VAR_3->udfmp->im_dev));
 if (VAR_2->v_type == VAR_0)
  FUNC_2(VAR_2);
 FUNC_3("\n");
 return (0);
}
