
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_symlink_args {int a_vpp; TYPE_3__* a_dvp; TYPE_1__* a_cnp; int a_target; } ;
struct devfs_mount {int dm_lock; int dm_mount; } ;
struct devfs_dirent {int de_flags; int de_mode; int de_dlist; TYPE_2__* de_dirent; int de_symlink; struct devfs_dirent* de_dir; int de_inode; scalar_t__ de_gid; scalar_t__ de_uid; } ;
struct TYPE_6__ {int v_mount; struct devfs_dirent* v_data; } ;
struct TYPE_5__ {int d_namlen; int d_name; int d_type; } ;
struct TYPE_4__ {int cn_cred; int cn_namelen; int cn_nameptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct devfs_dirent* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct devfs_dirent*,struct devfs_dirent*,int ) ;
 struct devfs_dirent* FUNC_3 (struct devfs_dirent*,int ) ;
 struct devfs_mount* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct devfs_dirent*,int ,int ,int ) ;
 int FUNC_8 (struct devfs_mount*,struct devfs_dirent*,int ) ;
 int FUNC_9 (struct devfs_mount*,struct devfs_dirent*) ;
 struct devfs_dirent* FUNC_10 (struct devfs_dirent*,int ,int ,int ) ;
 int VAR_12 ;
 struct devfs_dirent* FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (struct devfs_mount*,struct devfs_dirent*) ;
 int FUNC_14 (int ,int ,struct devfs_dirent*,struct devfs_dirent*) ;
 int FUNC_15 (int,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int
FUNC_19(struct vop_symlink_args *VAR_13)
{
 int VAR_14, VAR_15;
 struct devfs_dirent *VAR_16;
 struct devfs_dirent *VAR_17, *VAR_18, *VAR_19;
 struct devfs_mount *VAR_20;

 VAR_15 = FUNC_16(VAR_10, VAR_9);
 if (VAR_15)
  return(VAR_15);
 VAR_20 = FUNC_4(VAR_13->a_dvp->v_mount);
 if (FUNC_12(VAR_13->a_dvp) != 0)
  return (VAR_5);

 VAR_16 = VAR_13->a_dvp->v_data;
 VAR_17 = FUNC_11(VAR_13->a_cnp->cn_nameptr, VAR_13->a_cnp->cn_namelen);
 VAR_17->de_flags = VAR_2;
 VAR_17->de_uid = 0;
 VAR_17->de_gid = 0;
 VAR_17->de_mode = 0755;
 VAR_17->de_inode = FUNC_5(VAR_12);
 VAR_17->de_dir = VAR_16;
 VAR_17->de_dirent->d_type = VAR_3;
 VAR_14 = FUNC_17(VAR_13->a_target) + 1;
 VAR_17->de_symlink = FUNC_15(VAR_14, VAR_7, VAR_8);
 FUNC_6(VAR_13->a_target, VAR_17->de_symlink, VAR_14);



 VAR_18 = FUNC_10(VAR_16, VAR_17->de_dirent->d_name,
     VAR_17->de_dirent->d_namlen, 0);
 if (VAR_18 != ((void*)0)) {
  if ((VAR_18->de_flags & VAR_2) != 0) {
   FUNC_8(VAR_20, VAR_17, VAR_0);
   FUNC_18(&VAR_20->dm_lock);
   return (VAR_4);
  }
  FUNC_0((VAR_18->de_flags & VAR_1) == 0,
      ("devfs_symlink: entry %p already covered", VAR_18));
  VAR_18->de_flags |= VAR_1;
 }

 VAR_19 = FUNC_1(&VAR_16->de_dlist);
 VAR_19 = FUNC_3(VAR_19, VAR_11);
 FUNC_2(&VAR_16->de_dlist, VAR_19, VAR_17, VAR_11);
 FUNC_9(VAR_20, VAR_16);
 FUNC_13(VAR_20, VAR_17);

 return (FUNC_7(VAR_17, VAR_13->a_dvp->v_mount, VAR_6, VAR_13->a_vpp));
}
