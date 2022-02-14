
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; scalar_t__ v_usecount; struct cdev* v_rdev; } ;
struct cdev {int si_usecount; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct cdev*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct vop_reclaim_args*) ;

__attribute__((used)) static int
FUNC_7(struct vop_reclaim_args *VAR_1)
{
 struct vnode *VAR_2;
 struct cdev *VAR_3;

 VAR_2 = VAR_1->a_vp;
 FUNC_0(VAR_2->v_type == VAR_0);

 FUNC_6(VAR_1);

 FUNC_1(VAR_2);
 FUNC_3();
 VAR_3 = VAR_2->v_rdev;
 VAR_2->v_rdev = ((void*)0);
 if (VAR_3 != ((void*)0))
  VAR_3->si_usecount -= VAR_2->v_usecount;
 FUNC_5();
 FUNC_2(VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_4(VAR_3);
 return (0);
}
