
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_print_args {int a_vp; } ;
struct unionfs_node {scalar_t__ un_uppervp; scalar_t__ un_lowervp; } ;


 scalar_t__ VAR_0 ;
 struct unionfs_node* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_3(struct vop_print_args *VAR_1)
{
 struct unionfs_node *VAR_2;


 VAR_2 = FUNC_0(VAR_1->a_vp);


 FUNC_1("unionfs_vp=%p, uppervp=%p, lowervp=%p\n",
     VAR_1->a_vp, VAR_2->un_uppervp, VAR_2->un_lowervp);





 if (VAR_2->un_uppervp != VAR_0)
  FUNC_2(VAR_2->un_uppervp, "unionfs: upper ");
 if (VAR_2->un_lowervp != VAR_0)
  FUNC_2(VAR_2->un_lowervp, "unionfs: lower ");

 return (0);
}
