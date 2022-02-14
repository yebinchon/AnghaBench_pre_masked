
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct uio {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_notify_inval_inode_out {scalar_t__ ino; scalar_t__ off; } ;
typedef int fniio ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mount*,int ,struct vnode**) ;
 int VAR_3 ;
 int FUNC_1 (struct mount*,scalar_t__,int ,struct vnode**) ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct fuse_notify_inval_inode_out*,int,struct uio*) ;
 int FUNC_5 (struct vnode*) ;

int
FUNC_6(struct mount *VAR_4, struct uio *VAR_5)
{
 struct fuse_notify_inval_inode_out VAR_6;
 struct vnode *VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_4(&VAR_6, sizeof(VAR_6), VAR_5)) != 0)
  return (VAR_8);

 if (VAR_6.ino == VAR_0)
  VAR_8 = FUNC_0(VAR_4, VAR_1, &VAR_7);
 else
  VAR_8 = FUNC_1(VAR_4, VAR_6.ino, VAR_2,
   &VAR_7);
 if (VAR_8 != 0 || VAR_7 == ((void*)0))
  return (VAR_8);
 if (VAR_6.off >= 0)
  FUNC_2(VAR_7, VAR_3);
 FUNC_3(VAR_7);
 FUNC_5(VAR_7);
 return (0);
}
