
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int * v_op; int * v_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;

__attribute__((used)) static void
FUNC_2(struct vnode *VAR_1, void *VAR_2)
{

 VAR_1->v_data = ((void*)0);
 VAR_1->v_op = &VAR_0;
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
