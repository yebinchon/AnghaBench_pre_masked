
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {int v_writecount; int v_lock; int * v_vnlock; int * v_object; int * v_data; } ;
struct null_node {int null_flags; struct vnode* null_lowervp; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,int ) ;
 struct null_node* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct null_node*,int ) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (struct null_node*) ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*) ;

__attribute__((used)) static int
FUNC_10(struct vop_reclaim_args *VAR_3)
{
 struct vnode *VAR_4;
 struct null_node *VAR_5;
 struct vnode *VAR_6;

 VAR_4 = VAR_3->a_vp;
 VAR_5 = FUNC_4(VAR_4);
 VAR_6 = VAR_5->null_lowervp;

 FUNC_0(VAR_6 != ((void*)0) && VAR_4->v_vnlock != &VAR_4->v_lock,
     ("Reclaiming incomplete null vnode %p", VAR_4));

 FUNC_7(VAR_5);




 FUNC_6(&VAR_4->v_lock, VAR_0, ((void*)0));
 FUNC_1(VAR_4);
 VAR_4->v_data = ((void*)0);
 VAR_4->v_object = ((void*)0);
 VAR_4->v_vnlock = &VAR_4->v_lock;






 if (VAR_4->v_writecount > 0)
  FUNC_3(VAR_6, -VAR_4->v_writecount);
 else if (VAR_4->v_writecount < 0)
  VAR_4->v_writecount = 0;

 FUNC_2(VAR_4);

 if ((VAR_5->null_flags & VAR_2) != 0)
  FUNC_9(VAR_6);
 else
  FUNC_8(VAR_6);
 FUNC_5(VAR_5, VAR_1);

 return (0);
}
