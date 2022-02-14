
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_fdatasync_args {struct thread* a_td; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,struct thread*,int,int) ;
 scalar_t__ FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vop_fdatasync_args*) ;

__attribute__((used)) static int
FUNC_3(struct vop_fdatasync_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_vp;
 struct thread *VAR_3 = VAR_1->a_td;
 int VAR_4 = VAR_0;

 int VAR_5 = 0;

 if (FUNC_1(VAR_2)) {
  return 0;
 }
 if ((VAR_5 = FUNC_2(VAR_1)))
  return VAR_5;

 return FUNC_0(VAR_2, VAR_3, VAR_4, 1);
}
