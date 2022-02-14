
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct fuse_vnode_data* v_data; } ;
struct fuse_vnode_data {int handles; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct fuse_vnode_data*,int ) ;
 int VAR_1 ;

void
FUNC_4(struct vnode *VAR_2)
{
 struct fuse_vnode_data *VAR_3 = VAR_2->v_data;

 VAR_2->v_data = ((void*)0);
 FUNC_0(FUNC_1(&VAR_3->handles),
  ("Destroying fuse vnode with open files!"));
 FUNC_3(VAR_3, VAR_0);

 FUNC_2(VAR_1, -1);
}
