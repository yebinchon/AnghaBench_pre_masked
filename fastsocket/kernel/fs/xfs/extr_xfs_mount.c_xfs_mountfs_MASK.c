
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_55__ TYPE_4__ ;
typedef struct TYPE_54__ TYPE_3__ ;
typedef struct TYPE_53__ TYPE_2__ ;
typedef struct TYPE_52__ TYPE_1__ ;


struct TYPE_53__ {int sb_blocksize; int sb_qflags; int sb_rootino; int sb_agcount; int sb_inprogress; int sb_logblocks; int sb_logstart; int sb_uuid; int sb_blocklog; int sb_features2; int sb_bad_features2; } ;
typedef TYPE_2__ xfs_sb_t ;
struct TYPE_54__ {int m_update_flags; int m_flags; int m_attr_magicpct; scalar_t__ m_logdev_targp; scalar_t__ m_qflags; scalar_t__ m_ddev_targp; TYPE_2__ m_sb; TYPE_4__* m_rootip; int m_maxagi; int m_perag_tree; int m_perag_lock; scalar_t__ m_dmevmask; int m_fixedfsid; int m_inode_cluster_size; int m_maxioffset; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_52__ {int di_mode; } ;
struct TYPE_55__ {scalar_t__ i_ino; TYPE_1__ i_d; } ;
typedef TYPE_4__ xfs_inode_t ;
typedef scalar_t__ uint ;
typedef int __uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*,int *,int ,int ,int ,TYPE_4__**) ;
 int FUNC_21 (TYPE_3__*,int ,int *) ;
 int FUNC_22 (TYPE_3__*,int ) ;
 int FUNC_23 (TYPE_4__*,int ) ;
 int FUNC_24 (TYPE_3__*,scalar_t__,int ,int ) ;
 int FUNC_25 (TYPE_3__*) ;
 int FUNC_26 (TYPE_3__*) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_29 (TYPE_3__*,int) ;
 int FUNC_30 (TYPE_3__*) ;
 int FUNC_31 (TYPE_3__*,char*) ;
 int FUNC_32 (TYPE_3__*) ;
 int FUNC_33 (TYPE_3__*,scalar_t__*,scalar_t__*) ;
 int FUNC_34 (TYPE_3__*,int *,int *) ;
 int FUNC_35 (TYPE_3__*) ;
 int FUNC_36 (TYPE_3__*) ;
 int FUNC_37 (TYPE_3__*) ;
 scalar_t__ FUNC_38 (TYPE_2__*) ;
 scalar_t__ FUNC_39 (TYPE_2__*) ;
 scalar_t__ FUNC_40 (TYPE_2__*) ;
 int FUNC_41 (TYPE_2__*) ;
 int FUNC_42 (TYPE_3__*) ;
 int FUNC_43 (TYPE_3__*) ;
 int FUNC_44 (TYPE_3__*) ;
 int FUNC_45 (TYPE_3__*) ;
 int FUNC_46 (TYPE_3__*) ;
 int FUNC_47 (TYPE_3__*) ;
 int FUNC_48 (TYPE_3__*) ;
 int FUNC_49 (TYPE_3__*) ;
 int FUNC_50 (scalar_t__) ;
 int FUNC_51 (TYPE_3__*,char*,...) ;

int
FUNC_52(
 xfs_mount_t *VAR_16)
{
 xfs_sb_t *VAR_17 = &(VAR_16->m_sb);
 xfs_inode_t *VAR_18;
 __uint64_t VAR_19;
 uint VAR_20 = 0;
 uint VAR_21 = 0;
 int VAR_22 = 0;

 FUNC_28(VAR_16, VAR_17);
 if (FUNC_38(VAR_17)) {
  FUNC_51(VAR_16, "correcting sb_features alignment problem");
  VAR_17->sb_features2 |= VAR_17->sb_bad_features2;
  VAR_17->sb_bad_features2 = VAR_17->sb_features2;
  VAR_16->m_update_flags |= VAR_14 | VAR_13;





  if (FUNC_39(&VAR_16->m_sb) &&
     !(VAR_16->m_flags & VAR_11))
   VAR_16->m_flags |= VAR_10;
 }

 if (FUNC_39(&VAR_16->m_sb) &&
    (VAR_16->m_flags & VAR_11)) {
  FUNC_41(&VAR_16->m_sb);
  VAR_16->m_update_flags |= VAR_14;


  if (!VAR_17->sb_features2)
   VAR_16->m_update_flags |= VAR_15;
 }







 VAR_22 = FUNC_47(VAR_16);
 if (VAR_22)
  goto out;

 FUNC_13(VAR_16);
 FUNC_14(VAR_16, VAR_6);
 FUNC_14(VAR_16, VAR_5);
 FUNC_19(VAR_16);

 FUNC_44(VAR_16);

 VAR_16->m_maxioffset = FUNC_27(VAR_17->sb_blocklog);

 VAR_22 = FUNC_48(VAR_16);
 if (VAR_22)
  goto out;




 FUNC_45(VAR_16);


 FUNC_43(VAR_16);






 VAR_16->m_inode_cluster_size = VAR_9;




 FUNC_42(VAR_16);




 VAR_22 = FUNC_15(VAR_16);
 if (VAR_22)
  goto out_remove_uuid;




 VAR_22 = FUNC_35(VAR_16);
 if (VAR_22) {
  FUNC_51(VAR_16, "RT mount failed");
  goto out_remove_uuid;
 }





 FUNC_12(&VAR_17->sb_uuid, VAR_16->m_fixedfsid);

 VAR_16->m_dmevmask = 0;

 FUNC_17(VAR_16);




 VAR_16->m_attr_magicpct = (VAR_16->m_sb.sb_blocksize * 37) / 100;




 FUNC_46(VAR_16);




 FUNC_10(&VAR_16->m_perag_lock);
 FUNC_1(&VAR_16->m_perag_tree, VAR_1);
 VAR_22 = FUNC_21(VAR_16, VAR_17->sb_agcount, &VAR_16->m_maxagi);
 if (VAR_22) {
  FUNC_51(VAR_16, "Failed per-ag init: %d", VAR_22);
  goto out_remove_uuid;
 }

 if (!VAR_17->sb_logblocks) {
  FUNC_51(VAR_16, "no log defined");
  FUNC_4("xfs_mountfs", VAR_7, VAR_16);
  VAR_22 = FUNC_3(VAR_0);
  goto out_free_perag;
 }




 VAR_22 = FUNC_24(VAR_16, VAR_16->m_logdev_targp,
         FUNC_6(VAR_16, VAR_17->sb_logstart),
         FUNC_5(VAR_16, VAR_17->sb_logblocks));
 if (VAR_22) {
  FUNC_51(VAR_16, "log mount failed");
  goto out_fail_wait;
 }
 if (FUNC_40(&VAR_16->m_sb) &&
     !FUNC_9(VAR_16) &&
      !VAR_16->m_sb.sb_inprogress) {
  VAR_22 = FUNC_22(VAR_16, VAR_17->sb_agcount);
  if (VAR_22)
   goto out_fail_wait;
 }





 VAR_22 = FUNC_20(VAR_16, ((void*)0), VAR_17->sb_rootino, 0, VAR_8, &VAR_18);
 if (VAR_22) {
  FUNC_51(VAR_16, "failed to read root inode");
  goto out_log_dealloc;
 }

 FUNC_0(VAR_18 != ((void*)0));

 if (FUNC_11((VAR_18->i_d.di_mode & VAR_3) != VAR_2)) {
  FUNC_51(VAR_16, "corrupted root inode %llu: not a directory",
   (unsigned long long)VAR_18->i_ino);
  FUNC_23(VAR_18, VAR_8);
  FUNC_4("xfs_mountfs_int(2)", VAR_7,
     VAR_16);
  VAR_22 = FUNC_3(VAR_0);
  goto out_rele_rip;
 }
 VAR_16->m_rootip = VAR_18;

 FUNC_23(VAR_18, VAR_8);




 VAR_22 = FUNC_36(VAR_16);
 if (VAR_22) {



  FUNC_51(VAR_16, "failed to read RT inodes");
  goto out_rele_rip;
 }






 if (VAR_16->m_update_flags && !(VAR_16->m_flags & VAR_12)) {
  VAR_22 = FUNC_29(VAR_16, VAR_16->m_update_flags);
  if (VAR_22) {
   FUNC_51(VAR_16, "failed to write sb changes");
   goto out_rtunmount;
  }
 }




 if (FUNC_8(VAR_16)) {
  VAR_22 = FUNC_33(VAR_16, &VAR_20, &VAR_21);
  if (VAR_22)
   goto out_rtunmount;
 } else {
  FUNC_0(!FUNC_7(VAR_16));






  if (VAR_16->m_sb.sb_qflags & VAR_4) {
   FUNC_31(VAR_16, "resetting quota flags");
   VAR_22 = FUNC_30(VAR_16);
   if (VAR_22)
    return VAR_22;
  }
 }






 VAR_22 = FUNC_25(VAR_16);
 if (VAR_22) {
  FUNC_51(VAR_16, "log mount finish failed");
  goto out_rtunmount;
 }




 if (VAR_20) {
  FUNC_0(VAR_16->m_qflags == 0);
  VAR_16->m_qflags = VAR_21;

  FUNC_32(VAR_16);
 }
 if (!(VAR_16->m_flags & VAR_12)) {
  VAR_19 = FUNC_16(VAR_16);
  VAR_22 = FUNC_34(VAR_16, &VAR_19, ((void*)0));
  if (VAR_22)
   FUNC_51(VAR_16,
 "Unable to allocate reserve blocks. Continuing without reserve pool.");
 }

 return 0;

 out_rtunmount:
 FUNC_37(VAR_16);
 out_rele_rip:
 FUNC_2(VAR_18);
 out_log_dealloc:
 FUNC_26(VAR_16);
 out_fail_wait:
 if (VAR_16->m_logdev_targp && VAR_16->m_logdev_targp != VAR_16->m_ddev_targp)
  FUNC_50(VAR_16->m_logdev_targp);
 FUNC_50(VAR_16->m_ddev_targp);
 out_free_perag:
 FUNC_18(VAR_16);
 out_remove_uuid:
 FUNC_49(VAR_16);
 out:
 return VAR_22;
}
