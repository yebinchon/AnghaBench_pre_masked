
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_mount; } ;
struct tmpfs_dirent {int * td_node; } ;
struct componentname {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,struct tmpfs_dirent*) ;
 struct tmpfs_dirent* FUNC_4 (int ,int *,struct componentname*) ;
 int FUNC_5 (int ,struct tmpfs_dirent*) ;

void
FUNC_6(struct vnode *VAR_0, struct componentname *VAR_1)
{
 struct tmpfs_dirent *VAR_2;

 VAR_2 = FUNC_4(FUNC_2(VAR_0), ((void*)0), VAR_1);
 FUNC_0(VAR_2 != ((void*)0) && VAR_2->td_node == ((void*)0));
 FUNC_3(VAR_0, VAR_2);
 FUNC_5(FUNC_1(VAR_0->v_mount), VAR_2);
}
