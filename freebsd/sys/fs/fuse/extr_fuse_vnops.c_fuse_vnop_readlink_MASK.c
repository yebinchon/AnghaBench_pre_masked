
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vop_readlink_args {struct ucred* a_cred; struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct uio {int dummy; } ;
struct ucred {int dummy; } ;
struct fuse_dispatcher {char* answ; int iosize; } ;
struct TYPE_7__ {int dataflags; } ;
struct TYPE_5__ {char* f_mntonname; } ;
struct TYPE_6__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fuse_dispatcher*) ;
 int FUNC_1 (struct fuse_dispatcher*,int ) ;
 int FUNC_2 (struct fuse_dispatcher*,int ,struct vnode*,int ,struct ucred*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,struct uio*) ;
 int FUNC_7 (struct vnode*) ;
 TYPE_2__* FUNC_8 (struct vnode*) ;

__attribute__((used)) static int
FUNC_9(struct vop_readlink_args *VAR_5)
{
 struct vnode *VAR_6 = VAR_5->a_vp;
 struct uio *VAR_7 = VAR_5->a_uio;
 struct ucred *VAR_8 = VAR_5->a_cred;

 struct fuse_dispatcher VAR_9;
 int VAR_10;

 if (FUNC_4(VAR_6)) {
  return VAR_1;
 }
 if (!FUNC_7(VAR_6)) {
  return VAR_0;
 }
 FUNC_1(&VAR_9, 0);
 VAR_10 = FUNC_2(&VAR_9, VAR_3, VAR_6, VAR_4, VAR_8);
 if (VAR_10) {
  goto out;
 }
 if (((char *)VAR_9.answ)[0] == '/' &&
     FUNC_3(FUNC_8(VAR_6))->dataflags & VAR_2) {
  char *VAR_11 = FUNC_8(VAR_6)->mnt_stat.f_mntonname;

  VAR_10 = FUNC_6(VAR_11, FUNC_5(VAR_11), VAR_7);
 }
 if (!VAR_10) {
  VAR_10 = FUNC_6(VAR_9.answ, VAR_9.iosize, VAR_7);
 }
out:
 FUNC_0(&VAR_9);
 return VAR_10;
}
