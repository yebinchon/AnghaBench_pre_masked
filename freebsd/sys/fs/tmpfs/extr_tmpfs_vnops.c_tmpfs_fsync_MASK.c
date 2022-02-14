
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_fsync_args {struct vnode* a_vp; } ;
struct vnode {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;

__attribute__((used)) static int
FUNC_4(struct vop_fsync_args *VAR_0)
{
 struct vnode *VAR_1 = VAR_0->a_vp;

 FUNC_0(FUNC_1(VAR_1));

 FUNC_2(VAR_1);
 FUNC_3(VAR_1);

 return 0;
}
