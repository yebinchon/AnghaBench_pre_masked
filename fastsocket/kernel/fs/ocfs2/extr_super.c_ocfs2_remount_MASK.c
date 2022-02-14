
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;
struct ocfs2_super {int s_mount_opt; int osb_flags; int s_feature_incompat; scalar_t__ osb_commit_interval; int preferred_slot; int s_atime_quantum; int osb_lock; } ;
struct mount_options {int mount_opt; scalar_t__ commit_interval; int slot; int atime_quantum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct super_block*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct ocfs2_super* FUNC_1 (struct super_block*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct ocfs2_super*) ;
 int FUNC_5 (struct ocfs2_super*) ;
 int FUNC_6 (struct super_block*,char*,struct mount_options*,int) ;
 int FUNC_7 (struct ocfs2_super*) ;
 int FUNC_8 (struct ocfs2_super*,int) ;
 scalar_t__ FUNC_9 (struct super_block*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct super_block *VAR_13, int *VAR_14, char *VAR_15)
{
 int VAR_16;
 int VAR_17 = 0;
 struct mount_options VAR_18;
 struct ocfs2_super *VAR_19 = FUNC_1(VAR_13);

 FUNC_2();

 if (!FUNC_6(VAR_13, VAR_15, &VAR_18, 1)) {
  VAR_17 = -VAR_0;
  goto out;
 }

 if ((VAR_19->s_mount_opt & VAR_7) !=
     (VAR_18.mount_opt & VAR_7)) {
  VAR_17 = -VAR_0;
  FUNC_3(VAR_2, "Cannot change heartbeat mode on remount\n");
  goto out;
 }

 if ((VAR_19->s_mount_opt & VAR_6) !=
     (VAR_18.mount_opt & VAR_6)) {
  VAR_17 = -VAR_0;
  FUNC_3(VAR_2, "Cannot change data mode on remount\n");
  goto out;
 }



 if (!(VAR_19->s_mount_opt & VAR_8) &&
     (VAR_18.mount_opt & VAR_8)) {
  VAR_17 = -VAR_0;
  FUNC_3(VAR_2, "Cannot enable inode64 on remount\n");
  goto out;
 }


 if ((*VAR_14 & VAR_3) != (VAR_13->s_flags & VAR_3)) {

  if (*VAR_14 & VAR_3) {
   VAR_17 = FUNC_8(VAR_19, 0);
   if (VAR_17 < 0)
    goto out;
  }


  FUNC_10(&VAR_19->osb_lock);
  if (VAR_19->osb_flags & VAR_11) {
   FUNC_3(VAR_2, "Remount on readonly device is forbidden.\n");
   VAR_17 = -VAR_1;
   goto unlock_osb;
  }

  if (*VAR_14 & VAR_3) {
   FUNC_3(0, "Going to ro mode.\n");
   VAR_13->s_flags |= VAR_3;
   VAR_19->osb_flags |= VAR_12;
  } else {
   FUNC_3(0, "Making ro filesystem writeable.\n");

   if (VAR_19->osb_flags & VAR_10) {
    FUNC_3(VAR_2, "Cannot remount RDWR "
         "filesystem due to previous errors.\n");
    VAR_17 = -VAR_1;
    goto unlock_osb;
   }
   VAR_16 = FUNC_0(VAR_13, ~VAR_5);
   if (VAR_16) {
    FUNC_3(VAR_2, "Cannot remount RDWR because "
         "of unsupported optional features "
         "(%x).\n", VAR_16);
    VAR_17 = -VAR_0;
    goto unlock_osb;
   }
   VAR_13->s_flags &= ~VAR_3;
   VAR_19->osb_flags &= ~VAR_12;
  }
unlock_osb:
  FUNC_11(&VAR_19->osb_lock);

  if (!VAR_17 && !(*VAR_14 & VAR_3)) {
   if (FUNC_9(VAR_13))
    VAR_17 = FUNC_8(VAR_19, 1);
   else
    VAR_17 = FUNC_4(VAR_19);
   if (VAR_17 < 0) {

    FUNC_10(&VAR_19->osb_lock);
    VAR_13->s_flags |= VAR_3;
    VAR_19->osb_flags |= VAR_12;
    FUNC_11(&VAR_19->osb_lock);
    goto out;
   }
  }
 }

 if (!VAR_17) {


  if (!(VAR_19->s_feature_incompat & VAR_4))
   VAR_18.mount_opt &= ~VAR_9;
  VAR_19->s_mount_opt = VAR_18.mount_opt;
  VAR_19->s_atime_quantum = VAR_18.atime_quantum;
  VAR_19->preferred_slot = VAR_18.slot;
  if (VAR_18.commit_interval)
   VAR_19->osb_commit_interval = VAR_18.commit_interval;

  if (!FUNC_5(VAR_19))
   FUNC_7(VAR_19);
 }
out:
 FUNC_12();
 return VAR_17;
}
