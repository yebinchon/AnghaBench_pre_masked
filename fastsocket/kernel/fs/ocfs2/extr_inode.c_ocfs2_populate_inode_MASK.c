
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_super {int s_mount_opt; int fs_generation; } ;
struct TYPE_8__ {int i_rdev; } ;
struct TYPE_9__ {TYPE_1__ dev1; } ;
struct ocfs2_dinode {int i_flags; int i_fs_generation; int i_clusters; int i_attr; int i_generation; int i_uid; int i_gid; int i_atime_nsec; int i_mtime_nsec; int i_ctime_nsec; int i_blkno; int i_size; int i_ctime; int i_mtime; int i_atime; int i_mode; TYPE_2__ id1; int i_dyn_features; } ;
struct TYPE_13__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_12__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_11__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct inode {int i_version; int i_generation; int i_mode; int i_uid; int i_gid; struct super_block* i_sb; int i_ino; int i_rdev; int * i_op; int * i_fop; int i_flags; int i_nlink; TYPE_6__ i_ctime; TYPE_5__ i_mtime; TYPE_4__ i_atime; TYPE_3__* i_mapping; scalar_t__ i_blocks; } ;
struct TYPE_14__ {int ip_clusters; int ip_attr; scalar_t__ ip_blkno; scalar_t__ ip_last_used_group; scalar_t__ ip_last_used_slot; int ip_rw_lockres; int ip_open_lockres; int ip_inode_lockres; int ip_flags; void* ip_dyn_features; } ;
struct TYPE_10__ {int * a_ops; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ocfs2_dinode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ocfs2_super* FUNC_4 (struct super_block*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


 int VAR_13 ;

 scalar_t__ FUNC_5 (int) ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (struct inode*,int,int ) ;
 int FUNC_10 (struct super_block*,scalar_t__) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,unsigned long long,...) ;
 int FUNC_15 (char*,struct inode*,unsigned long long) ;
 int FUNC_16 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int *,int ,int,struct inode*) ;
 scalar_t__ FUNC_19 (struct inode*) ;
 scalar_t__ FUNC_20 (struct ocfs2_super*) ;
 int FUNC_21 (struct ocfs2_dinode*) ;
 int FUNC_22 (struct inode*) ;
 int VAR_23 ;
 int FUNC_23 () ;
 int VAR_24 ;

void FUNC_24(struct inode *VAR_25, struct ocfs2_dinode *VAR_26,
     int VAR_27)
{
 struct super_block *VAR_28;
 struct ocfs2_super *VAR_29;
 int VAR_30 = 1;

 FUNC_15("(0x%p, size:%llu)\n", VAR_25,
     (unsigned long long)FUNC_13(VAR_26->i_size));

 VAR_28 = VAR_25->i_sb;
 VAR_29 = FUNC_4(VAR_28);

 if ((VAR_29->s_mount_opt & VAR_8) ||
     FUNC_20(VAR_29) || !FUNC_23())
  VAR_30 = 0;





 FUNC_1(!FUNC_3(VAR_26));



 FUNC_1(!(VAR_26->i_flags & FUNC_6(VAR_12)));
 FUNC_1(FUNC_12(VAR_26->i_fs_generation) != VAR_29->fs_generation);


 FUNC_2(VAR_25)->ip_clusters = FUNC_12(VAR_26->i_clusters);
 FUNC_2(VAR_25)->ip_attr = FUNC_12(VAR_26->i_attr);
 FUNC_2(VAR_25)->ip_dyn_features = FUNC_11(VAR_26->i_dyn_features);

 VAR_25->i_version = 1;
 VAR_25->i_generation = FUNC_12(VAR_26->i_generation);
 VAR_25->i_rdev = FUNC_7(FUNC_13(VAR_26->id1.dev1.i_rdev));
 VAR_25->i_mode = FUNC_11(VAR_26->i_mode);
 VAR_25->i_uid = FUNC_12(VAR_26->i_uid);
 VAR_25->i_gid = FUNC_12(VAR_26->i_gid);


 if (FUNC_5(VAR_25->i_mode) && !VAR_26->i_clusters)
  VAR_25->i_blocks = 0;
 else
  VAR_25->i_blocks = FUNC_19(VAR_25);
 VAR_25->i_mapping->a_ops = &VAR_15;
 VAR_25->i_atime.tv_sec = FUNC_13(VAR_26->i_atime);
 VAR_25->i_atime.tv_nsec = FUNC_12(VAR_26->i_atime_nsec);
 VAR_25->i_mtime.tv_sec = FUNC_13(VAR_26->i_mtime);
 VAR_25->i_mtime.tv_nsec = FUNC_12(VAR_26->i_mtime_nsec);
 VAR_25->i_ctime.tv_sec = FUNC_13(VAR_26->i_ctime);
 VAR_25->i_ctime.tv_nsec = FUNC_12(VAR_26->i_ctime_nsec);

 if (FUNC_2(VAR_25)->ip_blkno != FUNC_13(VAR_26->i_blkno))
  FUNC_14(VAR_0,
       "ip_blkno %llu != i_blkno %llu!\n",
       (unsigned long long)FUNC_2(VAR_25)->ip_blkno,
       (unsigned long long)FUNC_13(VAR_26->i_blkno));

 VAR_25->i_nlink = FUNC_21(VAR_26);

 if (VAR_26->i_flags & FUNC_6(VAR_11)) {
  FUNC_2(VAR_25)->ip_flags |= VAR_3;
  VAR_25->i_flags |= VAR_14;
 }

 if (VAR_26->i_flags & FUNC_6(VAR_4)) {
  FUNC_2(VAR_25)->ip_flags |= VAR_2;
  FUNC_14(0, "local alloc inode: i_ino=%lu\n", VAR_25->i_ino);
 } else if (VAR_26->i_flags & FUNC_6(VAR_1)) {
  FUNC_2(VAR_25)->ip_flags |= VAR_2;
 } else if (VAR_26->i_flags & FUNC_6(VAR_9)) {
  VAR_25->i_flags |= VAR_14;
 } else if (VAR_26->i_flags & FUNC_6(VAR_10)) {
  FUNC_14(0, "superblock inode: i_ino=%lu\n", VAR_25->i_ino);


  FUNC_0();
 }

 switch (VAR_25->i_mode & VAR_13) {
     case 128:
      if (VAR_30)
       VAR_25->i_fop = &VAR_21;
      else
       VAR_25->i_fop = &VAR_22;
      VAR_25->i_op = &VAR_20;
      FUNC_8(VAR_25, FUNC_13(VAR_26->i_size));
      break;
     case 130:
      VAR_25->i_op = &VAR_16;
      if (VAR_30)
       VAR_25->i_fop = &VAR_17;
      else
       VAR_25->i_fop = &VAR_18;
      FUNC_8(VAR_25, FUNC_13(VAR_26->i_size));
      break;
     case 129:
      if (FUNC_17(VAR_25))
   VAR_25->i_op = &VAR_19;
      else
   VAR_25->i_op = &VAR_24;
      FUNC_8(VAR_25, FUNC_13(VAR_26->i_size));
      break;
     default:
      VAR_25->i_op = &VAR_23;
      FUNC_9(VAR_25, VAR_25->i_mode,
           VAR_25->i_rdev);
      break;
 }

 if (VAR_27) {
  VAR_25->i_ino = FUNC_10(VAR_25->i_sb,
          FUNC_13(VAR_26->i_blkno));






  FUNC_1(FUNC_12(VAR_26->i_flags) & VAR_11);

  FUNC_18(&FUNC_2(VAR_25)->ip_inode_lockres,
       VAR_5, 0, VAR_25);

  FUNC_18(&FUNC_2(VAR_25)->ip_open_lockres,
       VAR_6, 0, VAR_25);
 }

 FUNC_18(&FUNC_2(VAR_25)->ip_rw_lockres,
      VAR_7, VAR_25->i_generation,
      VAR_25);

 FUNC_22(VAR_25);

 FUNC_2(VAR_25)->ip_last_used_slot = 0;
 FUNC_2(VAR_25)->ip_last_used_group = 0;
 FUNC_16();
}
