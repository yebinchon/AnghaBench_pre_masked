
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct fuse_vnode_data {int flag; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 struct fuse_vnode_data* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;

void
FUNC_3(struct vnode *VAR_1)
{
 struct fuse_vnode_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1, "fuse_internal_vnode_disappear");
 VAR_2->flag |= VAR_0;
 FUNC_2(VAR_1);
}
