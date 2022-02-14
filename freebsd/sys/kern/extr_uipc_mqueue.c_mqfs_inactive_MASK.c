
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_inactive_args {int a_vp; } ;
struct mqfs_node {scalar_t__ mn_deleted; } ;


 struct mqfs_node* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct vop_inactive_args *VAR_0)
{
 struct mqfs_node *VAR_1 = FUNC_0(VAR_0->a_vp);

 if (VAR_1->mn_deleted)
  FUNC_1(VAR_0->a_vp);
 return (0);
}
