
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {struct devfs_dirent* v_data; } ;
struct devfs_dirent {int * de_vnode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct vop_reclaim_args *VAR_1)
{
 struct vnode *VAR_2;
 struct devfs_dirent *VAR_3;

 VAR_2 = VAR_1->a_vp;
 FUNC_0(&VAR_0);
 VAR_3 = VAR_2->v_data;
 if (VAR_3 != ((void*)0)) {
  VAR_3->de_vnode = ((void*)0);
  VAR_2->v_data = ((void*)0);
 }
 FUNC_1(&VAR_0);
 return (0);
}
