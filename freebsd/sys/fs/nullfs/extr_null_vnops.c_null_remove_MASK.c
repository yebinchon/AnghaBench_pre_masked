
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_remove_args {int a_gen; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct TYPE_2__ {int null_flags; } ;


 struct vnode* FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int FUNC_1 (struct vnode*) ;
 TYPE_1__* FUNC_2 (struct vnode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;

__attribute__((used)) static int
FUNC_6(struct vop_remove_args *VAR_1)
{
 int VAR_2, VAR_3;
 struct vnode *VAR_4, *VAR_5;

 VAR_5 = VAR_1->a_vp;
 if (FUNC_4(VAR_5) > 1) {
  VAR_4 = FUNC_0(VAR_5);
  FUNC_1(VAR_4);
  VAR_3 = 1;
 } else
  VAR_3 = 0;
 FUNC_2(VAR_5)->null_flags |= VAR_0;
 VAR_2 = FUNC_3(&VAR_1->a_gen);
 if (VAR_3 != 0)
  FUNC_5(VAR_4);
 return (VAR_2);
}
