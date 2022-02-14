
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_strategy_args {struct buf* a_bp; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct buf {int b_error; int b_ioflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct vnode*,struct buf*) ;
 scalar_t__ FUNC_2 (struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct vop_strategy_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_vp;
 struct buf *VAR_4 = VAR_2->a_bp;

 if (!VAR_3 || FUNC_2(VAR_3)) {
  VAR_4->b_ioflags |= VAR_0;
  VAR_4->b_error = VAR_1;
  FUNC_0(VAR_4);
  return 0;
 }





 (void)FUNC_1(VAR_3, VAR_4);

 return 0;
}
