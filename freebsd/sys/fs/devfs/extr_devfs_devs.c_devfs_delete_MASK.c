
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct devfs_mount {int dm_lock; } ;
struct devfs_dirent {int de_flags; scalar_t__ de_inode; int * de_symlink; struct vnode* de_vnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct devfs_dirent*) ;
 int FUNC_1 (struct devfs_dirent*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*,int ) ;
 int VAR_9 ;
 int FUNC_6 (struct devfs_mount*,struct devfs_dirent*) ;
 int FUNC_7 (struct devfs_dirent*) ;
 int FUNC_8 (scalar_t__) ;
 struct devfs_dirent* FUNC_9 (struct devfs_dirent*) ;
 int FUNC_10 (struct devfs_mount*,struct devfs_dirent*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (struct devfs_dirent*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct vnode*) ;
 int FUNC_18 (struct vnode*) ;
 int FUNC_19 (struct vnode*) ;
 int FUNC_20 (struct vnode*,int) ;

void
FUNC_21(struct devfs_mount *VAR_10, struct devfs_dirent *VAR_11, int VAR_12)
{
 struct devfs_dirent *VAR_13;
 struct vnode *VAR_14;

 FUNC_2((VAR_11->de_flags & VAR_3) == 0,
  ("devfs_delete doomed dirent"));
 VAR_11->de_flags |= VAR_3;

 if ((VAR_12 & VAR_0) == 0) {
  VAR_13 = FUNC_9(VAR_11);
  if (VAR_13 != ((void*)0))
   FUNC_1(VAR_13);
  if (VAR_11->de_flags & VAR_4) {
   FUNC_2(VAR_13 != ((void*)0), ("devfs_delete: NULL dd"));
   FUNC_6(VAR_10, VAR_13);
  }
 } else
  VAR_13 = ((void*)0);

 FUNC_13(&VAR_9);
 VAR_14 = VAR_11->de_vnode;
 if (VAR_14 != ((void*)0)) {
  FUNC_3(VAR_14);
  FUNC_14(&VAR_9);
  FUNC_19(VAR_14);
  FUNC_15(&VAR_10->dm_lock);
  if ((VAR_12 & VAR_1) == 0)
   FUNC_20(VAR_14, VAR_5 | VAR_6 | VAR_7);
  else
   FUNC_4(VAR_14);
  FUNC_18(VAR_14);
  if ((VAR_12 & VAR_1) == 0)
   FUNC_5(VAR_14, 0);
  FUNC_17(VAR_14);
  FUNC_16(&VAR_10->dm_lock);
 } else
  FUNC_14(&VAR_9);
 if (VAR_11->de_symlink) {
  FUNC_11(VAR_11->de_symlink, VAR_8);
  VAR_11->de_symlink = ((void*)0);
 }



 if (VAR_11->de_inode > VAR_2) {
  FUNC_8(VAR_11->de_inode);
  VAR_11->de_inode = 0;
 }
 if (FUNC_0(VAR_11))
  FUNC_7(VAR_11);

 if (VAR_13 != ((void*)0)) {
  if (FUNC_0(VAR_13))
   FUNC_7(VAR_13);
  else
   FUNC_10(VAR_10, VAR_13);
 }
}
