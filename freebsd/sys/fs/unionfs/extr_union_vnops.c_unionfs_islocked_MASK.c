
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_islocked_args {int a_vp; } ;
struct unionfs_node {scalar_t__ un_uppervp; scalar_t__ un_lowervp; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct unionfs_node* FUNC_2 (int ) ;
 int FUNC_3 (struct vop_islocked_args*) ;

__attribute__((used)) static int
FUNC_4(struct vop_islocked_args *VAR_1)
{
 struct unionfs_node *VAR_2;

 FUNC_0(VAR_1->a_vp);

 VAR_2 = FUNC_2(VAR_1->a_vp);
 if (VAR_2 == ((void*)0))
  return (FUNC_3(VAR_1));

 if (VAR_2->un_uppervp != VAR_0)
  return (FUNC_1(VAR_2->un_uppervp));
 if (VAR_2->un_lowervp != VAR_0)
  return (FUNC_1(VAR_2->un_lowervp));
 return (FUNC_3(VAR_1));
}
