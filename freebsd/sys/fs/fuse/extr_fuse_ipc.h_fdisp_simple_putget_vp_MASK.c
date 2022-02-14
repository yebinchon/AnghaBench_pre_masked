
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct fuse_dispatcher {int dummy; } ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;


 int FUNC_0 (struct fuse_dispatcher*,int,struct vnode*,struct thread*,struct ucred*) ;
 int FUNC_1 (struct fuse_dispatcher*) ;

__attribute__((used)) static inline int
FUNC_2(struct fuse_dispatcher *VAR_0, enum fuse_opcode VAR_1,
    struct vnode *VAR_2, struct thread *VAR_3, struct ucred *VAR_4)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return (FUNC_1(VAR_0));
}
