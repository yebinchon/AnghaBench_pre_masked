
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_dispatcher {int dummy; } ;
struct componentname {int dummy; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;


 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct fuse_dispatcher*) ;
 int FUNC_2 (struct fuse_dispatcher*,int ) ;
 int FUNC_3 (struct vnode*,struct vnode**,struct componentname*,int,struct fuse_dispatcher*) ;
 int FUNC_4 (struct mount*,int ,struct componentname*,int,void*,size_t,struct fuse_dispatcher*) ;
 struct mount* FUNC_5 (struct vnode*) ;

int
FUNC_6(struct vnode *VAR_0,
    struct vnode **VAR_1,
    struct componentname *VAR_2,
    enum fuse_opcode VAR_3,
    void *VAR_4,
    size_t VAR_5,
    enum vtype VAR_6)
{
 int VAR_7;
 struct fuse_dispatcher VAR_8;
 struct mount *VAR_9 = FUNC_5(VAR_0);

 FUNC_2(&VAR_8, 0);
 FUNC_4(VAR_9, FUNC_0(VAR_0), VAR_2, VAR_3, VAR_4,
     VAR_5, &VAR_8);
 VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_6, &VAR_8);
 FUNC_1(&VAR_8);

 return VAR_7;
}
