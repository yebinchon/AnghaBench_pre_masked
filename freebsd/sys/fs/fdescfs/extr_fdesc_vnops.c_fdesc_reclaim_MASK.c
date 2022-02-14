
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {int * v_data; } ;
struct fdescnode {int dummy; } ;


 int VAR_0 ;
 struct fdescnode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct fdescnode*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct vop_reclaim_args *VAR_1)
{
 struct vnode *VAR_2;
 struct fdescnode *VAR_3;

  VAR_2 = VAR_1->a_vp;
  VAR_3 = FUNC_0(VAR_2);
 FUNC_1(VAR_3);
 FUNC_2(VAR_2->v_data, VAR_0);
 VAR_2->v_data = ((void*)0);
 return (0);
}
