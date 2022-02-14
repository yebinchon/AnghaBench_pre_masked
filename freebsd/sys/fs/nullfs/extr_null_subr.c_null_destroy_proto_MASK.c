
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int * v_op; int v_lock; int * v_vnlock; int * v_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_2 ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;

__attribute__((used)) static void
FUNC_6(struct vnode *VAR_3, void *VAR_4)
{

 FUNC_3(&VAR_3->v_lock, VAR_0, ((void*)0));
 FUNC_0(VAR_3);
 VAR_3->v_data = ((void*)0);
 VAR_3->v_vnlock = &VAR_3->v_lock;
 VAR_3->v_op = &VAR_2;
 FUNC_1(VAR_3);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
 FUNC_2(VAR_4, VAR_1);
}
