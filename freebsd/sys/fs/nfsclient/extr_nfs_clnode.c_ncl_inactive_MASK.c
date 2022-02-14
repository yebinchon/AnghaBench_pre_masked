
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_inactive_args {int a_td; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int * v_object; } ;
struct nfsnode {int n_flag; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfsnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 struct nfsnode* FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*,int ,int ,int,int ) ;
 int FUNC_7 (struct vnode*,int ) ;
 int FUNC_8 (struct vnode*,int,int ) ;
 scalar_t__ FUNC_9 (int *,int ,int ,int ) ;

int
FUNC_10(struct vop_inactive_args *VAR_6)
{
 struct vnode *VAR_7 = VAR_6->a_vp;
 struct nfsnode *VAR_8;
 boolean_t VAR_9;

 if (FUNC_2(VAR_7) && VAR_7->v_type == VAR_5) {






  if (VAR_7->v_object != ((void*)0)) {
   FUNC_3(VAR_7->v_object);
   VAR_9 = FUNC_9(VAR_7->v_object, 0, 0,
       VAR_3);
   FUNC_4(VAR_7->v_object);
  } else
   VAR_9 = VAR_4;
  if (VAR_9 == VAR_4) {
   (void)FUNC_6(VAR_7, VAR_0, VAR_6->a_td, 1, 0);
   (void)FUNC_8(VAR_7, 1, VAR_6->a_td);
  }
 }

 VAR_8 = FUNC_5(VAR_7);
 FUNC_0(VAR_8);
 FUNC_7(VAR_7, VAR_6->a_td);
 VAR_8->n_flag &= (VAR_2 | VAR_1);
 FUNC_1(VAR_8);
 return (0);
}
