
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct fuse_vnode_data {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fuse_vnode_data* FUNC_0 (struct vnode*) ;

void
FUNC_1(struct vnode *VAR_2)
{
 struct fuse_vnode_data *VAR_3 = FUNC_0(VAR_2);

 VAR_3->flag &= ~(VAR_1 | VAR_0);
}
