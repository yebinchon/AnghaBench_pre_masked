
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_fsync_args {int a_waitfor; struct thread* a_td; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct thread {int dummy; } ;


 int FUNC_0 (struct vnode*,struct thread*,int,int) ;
 scalar_t__ FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vop_fsync_args*) ;

__attribute__((used)) static int
FUNC_3(struct vop_fsync_args *VAR_0)
{
 struct vnode *VAR_1 = VAR_0->a_vp;
 struct thread *VAR_2 = VAR_0->a_td;
 int VAR_3 = VAR_0->a_waitfor;
 int VAR_4 = 0;

 if (FUNC_1(VAR_1)) {
  return 0;
 }
 if ((VAR_4 = FUNC_2(VAR_0)))
  return VAR_4;

 return FUNC_0(VAR_1, VAR_2, VAR_3, 0);
}
