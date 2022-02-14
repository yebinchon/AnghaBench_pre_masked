
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vnode {int v_hash; int v_mount; } ;


 int FUNC_0 (int ,struct vnode*,int ) ;
 int FUNC_1 (struct vnode*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;

void
FUNC_5(struct vnode *VAR_2, u_int VAR_3)
{

 FUNC_2(&VAR_1);
 FUNC_1(VAR_2, VAR_0);
 FUNC_0(FUNC_4(VAR_2->v_mount, VAR_3), VAR_2, VAR_0);
 VAR_2->v_hash = VAR_3;
 FUNC_3(&VAR_1);
}
