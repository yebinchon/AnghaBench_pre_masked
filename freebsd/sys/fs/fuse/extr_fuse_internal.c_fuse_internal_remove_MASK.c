
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct fuse_dispatcher {scalar_t__ indata; } ;
struct componentname {int cn_namelen; int cn_nameptr; int cn_cred; int cn_thread; } ;
typedef int nlink_t ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;
struct TYPE_3__ {int va_nlink; } ;
struct TYPE_4__ {TYPE_1__ cached_attrs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct fuse_dispatcher*) ;
 int FUNC_3 (struct fuse_dispatcher*,int) ;
 int FUNC_4 (struct fuse_dispatcher*,int,struct vnode*,int ,int ) ;
 int FUNC_5 (struct fuse_dispatcher*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*,int ) ;
 int FUNC_9 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_10 (struct vnode*) ;

int
FUNC_11(struct vnode *VAR_2,
    struct vnode *VAR_3,
    struct componentname *VAR_4,
    enum fuse_opcode VAR_5)
{
 struct fuse_dispatcher VAR_6;
 nlink_t VAR_7;
 int VAR_8 = 0;

 FUNC_3(&VAR_6, VAR_4->cn_namelen + 1);
 FUNC_4(&VAR_6, VAR_5, VAR_2, VAR_4->cn_thread, VAR_4->cn_cred);

 FUNC_9(VAR_6.indata, VAR_4->cn_nameptr, VAR_4->cn_namelen);
 ((char *)VAR_6.indata)[VAR_4->cn_namelen] = '\0';

 VAR_8 = FUNC_5(&VAR_6);
 FUNC_2(&VAR_6);

 if (VAR_8)
  return (VAR_8);
 VAR_7 = FUNC_0(VAR_3)->cached_attrs.va_nlink--;





 FUNC_7(VAR_2);


 if (VAR_7 <= 1 || FUNC_10(VAR_3) == VAR_1) {
  FUNC_6(VAR_3);
 } else {
  FUNC_1(VAR_3);
  FUNC_8(VAR_3, VAR_0);
 }

 return VAR_8;
}
