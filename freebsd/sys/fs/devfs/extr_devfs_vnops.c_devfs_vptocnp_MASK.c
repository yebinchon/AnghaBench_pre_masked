
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_vptocnp_args {char* a_buf; int* a_buflen; struct vnode** a_vpp; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; struct devfs_dirent* v_data; int v_mount; } ;
struct devfs_mount {int dm_lock; struct devfs_dirent* dm_rootdir; } ;
struct devfs_dirent {struct vnode* de_vnode; TYPE_1__* de_dirent; } ;
struct TYPE_2__ {scalar_t__ d_namlen; int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct devfs_mount* FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int VAR_4 ;
 struct devfs_dirent* FUNC_4 (struct devfs_dirent*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;

__attribute__((used)) static int
FUNC_12(struct vop_vptocnp_args *VAR_5)
{
 struct vnode *VAR_6 = VAR_5->a_vp;
 struct vnode **VAR_7 = VAR_5->a_vpp;
 struct devfs_mount *VAR_8;
 char *VAR_9 = VAR_5->a_buf;
 int *VAR_10 = VAR_5->a_buflen;
 struct devfs_dirent *VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 VAR_8 = FUNC_0(VAR_6->v_mount);

 VAR_14 = FUNC_5(VAR_6);
 if (VAR_14 != 0)
  return (VAR_14);

 if (VAR_6->v_type != VAR_2 && VAR_6->v_type != VAR_3) {
  VAR_14 = VAR_0;
  goto finished;
 }

 VAR_11 = VAR_6->v_data;
 if (VAR_6->v_type == VAR_3 && VAR_11 == VAR_8->dm_rootdir) {
  *VAR_7 = VAR_6;
  FUNC_11(*VAR_7);
  goto finished;
 }

 VAR_13 = *VAR_10;
 VAR_13 -= VAR_11->de_dirent->d_namlen;
 if (VAR_13 < 0) {
  VAR_14 = VAR_1;
  goto finished;
 }
 FUNC_3(VAR_11->de_dirent->d_name, VAR_9 + VAR_13, VAR_11->de_dirent->d_namlen);
 *VAR_10 = VAR_13;
 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12 == ((void*)0)) {
  VAR_14 = VAR_0;
  goto finished;
 }
 FUNC_6(&VAR_4);
 *VAR_7 = VAR_12->de_vnode;
 if (*VAR_7 != ((void*)0)) {
  FUNC_1(*VAR_7);
  FUNC_7(&VAR_4);
  FUNC_10(*VAR_7);
  FUNC_2(*VAR_7);
  FUNC_11(*VAR_7);
  FUNC_9(*VAR_7);
 } else {
  FUNC_7(&VAR_4);
  VAR_14 = VAR_0;
 }
finished:
 FUNC_8(&VAR_8->dm_lock);
 return (VAR_14);
}
