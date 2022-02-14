
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_add_writecount_args {scalar_t__ a_inc; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_writecount; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (int,struct vnode*,char*) ;
 int FUNC_3 (struct vnode*,scalar_t__) ;
 struct unionfs_node* FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct vop_add_writecount_args *VAR_1)
{
 struct vnode *VAR_2, *VAR_3;
 struct unionfs_node *VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->a_vp;
 VAR_4 = FUNC_4(VAR_3);
 VAR_2 = VAR_4->un_uppervp != ((void*)0) ? VAR_4->un_uppervp : VAR_4->un_lowervp;
 FUNC_0(VAR_3);

 FUNC_2(VAR_3->v_writecount >= 0, VAR_3, ("wrong null writecount"));
 FUNC_2(VAR_3->v_writecount + VAR_1->a_inc >= 0, VAR_3,
     ("wrong writecount inc %d", VAR_1->a_inc));
 if (VAR_2 != ((void*)0))
  VAR_5 = FUNC_3(VAR_2, VAR_1->a_inc);
 else if (VAR_3->v_writecount < 0)
  VAR_5 = VAR_0;
 else
  VAR_5 = 0;
 if (VAR_5 == 0)
  VAR_3->v_writecount += VAR_1->a_inc;
 FUNC_1(VAR_3);
 return (VAR_5);
}
