
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int * v_data; } ;
struct devfs_dirent {int * de_vnode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;

__attribute__((used)) static void
FUNC_4(struct vnode *VAR_1, void *VAR_2)
{
 struct devfs_dirent *VAR_3;

 VAR_3 = (struct devfs_dirent *)VAR_2;
 FUNC_0(&VAR_0);
 VAR_1->v_data = ((void*)0);
 VAR_3->de_vnode = ((void*)0);
 FUNC_1(&VAR_0);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
}
