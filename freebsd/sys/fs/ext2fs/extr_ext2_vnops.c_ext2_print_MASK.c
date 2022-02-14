
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct vop_print_args {struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
struct inode {scalar_t__ i_number; int i_devvp; } ;


 scalar_t__ VAR_0 ;
 struct inode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct vop_print_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_vp;
 struct inode *VAR_3 = FUNC_0(VAR_2);

 FUNC_3(VAR_3->i_devvp, "\tino %ju", (uintmax_t)VAR_3->i_number);
 if (VAR_2->v_type == VAR_0)
  FUNC_1(VAR_2);
 FUNC_2("\n");
 return (0);
}
