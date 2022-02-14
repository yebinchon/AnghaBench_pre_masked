
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct devfs_dirent* v_data; } ;
struct devfs_dirent {struct vnode* de_vnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devfs_dirent*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct devfs_dirent *VAR_2)
{
 struct vnode *VAR_3;

 VAR_3 = VAR_2->de_vnode;
 FUNC_1(&VAR_1);
 if (VAR_3 != ((void*)0) && VAR_3->v_data == VAR_2)
  VAR_3->v_data = ((void*)0);
 FUNC_2(&VAR_1);
 FUNC_0(VAR_2, VAR_0);
}
