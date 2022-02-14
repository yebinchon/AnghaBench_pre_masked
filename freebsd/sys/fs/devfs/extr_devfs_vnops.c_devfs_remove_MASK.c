
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_remove_args {struct vnode* a_dvp; struct vnode* a_vp; } ;
struct vnode {struct devfs_dirent* v_data; int v_mount; } ;
struct devfs_mount {int dm_lock; } ;
struct devfs_dirent {int de_flags; TYPE_1__* de_dirent; int de_dlist; int * de_cdp; } ;
struct TYPE_2__ {scalar_t__ d_type; int d_namlen; int d_name; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct devfs_dirent*,int ) ;
 struct devfs_mount* FUNC_2 (int ) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct devfs_mount*,struct devfs_dirent*,int ) ;
 struct devfs_dirent* FUNC_5 (struct devfs_dirent*,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_9(struct vop_remove_args *VAR_6)
{
 struct vnode *VAR_7 = VAR_6->a_dvp;
 struct vnode *VAR_8 = VAR_6->a_vp;
 struct devfs_dirent *VAR_9;
 struct devfs_dirent *VAR_10, *VAR_11;
 struct devfs_mount *VAR_12 = FUNC_2(VAR_8->v_mount);

 FUNC_0(VAR_7, "devfs_remove");
 FUNC_0(VAR_8, "devfs_remove");

 FUNC_6(&VAR_12->dm_lock);
 VAR_9 = VAR_6->a_dvp->v_data;
 VAR_10 = VAR_8->v_data;
 if (VAR_10->de_cdp == ((void*)0)) {
  FUNC_1(&VAR_9->de_dlist, VAR_10, VAR_5);
  if (VAR_10->de_dirent->d_type == VAR_2) {
   VAR_11 = FUNC_5(VAR_9, VAR_10->de_dirent->d_name,
       VAR_10->de_dirent->d_namlen, 0);
   if (VAR_11 != ((void*)0))
    VAR_11->de_flags &= ~VAR_0;
  }

  FUNC_3(VAR_8, 0);
  if (VAR_7 != VAR_8)
   FUNC_3(VAR_7, 0);
  FUNC_4(VAR_12, VAR_10, 0);
  FUNC_7(&VAR_12->dm_lock);
  if (VAR_7 != VAR_8)
   FUNC_8(VAR_7, VAR_3 | VAR_4);
  FUNC_8(VAR_8, VAR_3 | VAR_4);
 } else {
  VAR_10->de_flags |= VAR_1;
  FUNC_7(&VAR_12->dm_lock);
 }
 return (0);
}
