
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {TYPE_2__* td_ucred; } ;
struct mount {int mnt_flag; int mnt_kern_flag; struct devfs_mount* mnt_data; int * mnt_optnew; } ;
struct devfs_mount {int dm_holdcnt; int dm_lock; int dm_idx; int dm_rootdir; struct mount* dm_mount; } ;
typedef int devfs_rsnum ;
struct TYPE_4__ {TYPE_1__* cr_prison; } ;
struct TYPE_3__ {int pr_devfs_rsnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (int *) ;
 struct thread* VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct mount*,int ,struct vnode**) ;
 int FUNC_5 (struct devfs_mount*) ;
 int FUNC_6 (int ,struct devfs_mount*) ;
 int * VAR_18 ;
 int FUNC_7 (struct devfs_mount*,int *,int ,int *,int ) ;
 int FUNC_8 (struct devfs_mount*,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 struct devfs_mount* FUNC_11 (int,int ,int) ;
 int * FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct mount*,struct vnode*) ;
 scalar_t__ FUNC_18 (int *,int ) ;
 scalar_t__ FUNC_19 (int *,char*,int *,int ) ;
 int FUNC_20 (struct mount*) ;
 scalar_t__ FUNC_21 (int *,char*,int *,int *) ;
 int FUNC_22 (struct mount*,char*,char*) ;
 int FUNC_23 (struct mount*,char*) ;
 int FUNC_24 (int *,char*,char*,int*) ;

__attribute__((used)) static int
FUNC_25(struct mount *VAR_19)
{
 int VAR_20;
 struct devfs_mount *VAR_21;
 struct vnode *VAR_22;
 struct thread *VAR_23 = VAR_16;
 int VAR_24, VAR_25;

 if (VAR_18 == ((void*)0))
  VAR_18 = FUNC_12(0, VAR_4, ((void*)0));

 VAR_20 = 0;

 if (VAR_19->mnt_flag & VAR_11)
  return (VAR_2);

 VAR_25 = 0;
 VAR_24 = FUNC_10(VAR_23->td_ucred);

 if (VAR_19->mnt_optnew != ((void*)0)) {
  if (FUNC_18(VAR_19->mnt_optnew, VAR_17))
   return (VAR_1);

  if (FUNC_19(VAR_19->mnt_optnew, "export", ((void*)0), 0))
   return (VAR_2);

  if (FUNC_21(VAR_19->mnt_optnew, "ruleset", ((void*)0), ((void*)0)) == 0 &&
      (FUNC_24(VAR_19->mnt_optnew, "ruleset", "%d",
      &VAR_25) != 1 || VAR_25 < 0 || VAR_25 > 65535)) {
   FUNC_22(VAR_19, "%s",
       "invalid ruleset specification");
   return (VAR_1);
  }

  if (VAR_24 && VAR_25 != 0 &&
      VAR_25 != VAR_23->td_ucred->cr_prison->pr_devfs_rsnum)
   return (VAR_3);
 }


 if (VAR_24)
  VAR_25 = VAR_23->td_ucred->cr_prison->pr_devfs_rsnum;

 if (VAR_19->mnt_flag & VAR_12) {
  if (VAR_25 != 0) {
   VAR_21 = VAR_19->mnt_data;
   if (VAR_21 != ((void*)0)) {
    FUNC_15(&VAR_21->dm_lock);
    FUNC_6((devfs_rsnum)VAR_25, VAR_21);
    FUNC_5(VAR_21);
    FUNC_16(&VAR_21->dm_lock);
   }
  }
  return (0);
 }

 VAR_21 = FUNC_11(sizeof *VAR_21, VAR_13, VAR_14 | VAR_15);
 VAR_21->dm_idx = FUNC_3(VAR_18);
 FUNC_14(&VAR_21->dm_lock, "devfsmount");
 VAR_21->dm_holdcnt = 1;

 FUNC_0(VAR_19);
 VAR_19->mnt_flag |= VAR_9;
 VAR_19->mnt_kern_flag |= VAR_7 | VAR_6 |
     VAR_8;



 FUNC_1(VAR_19);
 VAR_21->dm_mount = VAR_19;
 VAR_19->mnt_data = (void *) VAR_21;
 FUNC_20(VAR_19);

 VAR_21->dm_rootdir = FUNC_7(VAR_21, ((void*)0), 0, ((void*)0), VAR_0);

 VAR_20 = FUNC_4(VAR_19, VAR_5, &VAR_22);
 if (VAR_20) {
  FUNC_13(&VAR_21->dm_lock);
  FUNC_9(VAR_18, VAR_21->dm_idx);
  FUNC_8(VAR_21, VAR_13);
  return (VAR_20);
 }

 if (VAR_25 != 0) {
  FUNC_15(&VAR_21->dm_lock);
  FUNC_6((devfs_rsnum)VAR_25, VAR_21);
  FUNC_16(&VAR_21->dm_lock);
 }

 FUNC_2(VAR_22, 0);
 FUNC_17(VAR_19, VAR_22);

 FUNC_23(VAR_19, "devfs");

 return (0);
}
