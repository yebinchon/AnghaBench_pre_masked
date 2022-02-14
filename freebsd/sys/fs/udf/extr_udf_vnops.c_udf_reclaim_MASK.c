
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {int * v_data; } ;
struct udf_node {int * fentry; } ;


 int VAR_0 ;
 struct udf_node* FUNC_0 (struct vnode*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct udf_node*) ;
 int FUNC_3 (struct vnode*) ;

__attribute__((used)) static int
FUNC_4(struct vop_reclaim_args *VAR_2)
{
 struct vnode *VAR_3;
 struct udf_node *VAR_4;

 VAR_3 = VAR_2->a_vp;
 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 != ((void*)0)) {
  FUNC_3(VAR_3);

  if (VAR_4->fentry != ((void*)0))
   FUNC_1(VAR_4->fentry, VAR_0);
  FUNC_2(VAR_1, VAR_4);
  VAR_3->v_data = ((void*)0);
 }

 return (0);
}
