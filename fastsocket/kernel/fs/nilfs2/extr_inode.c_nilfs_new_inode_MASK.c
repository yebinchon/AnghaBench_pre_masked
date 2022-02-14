
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_sb_info {int s_next_gen_lock; int s_next_generation; int s_inodes_count; int s_ifile; } ;
struct nilfs_inode_info {int i_state; int i_flags; scalar_t__ i_cno; scalar_t__ i_dir_start_lookup; int i_bmap; int i_bh; } ;
struct inode {int i_mode; scalar_t__ i_nlink; scalar_t__ i_generation; int i_ctime; int i_atime; int i_mtime; int i_ino; int i_gid; int i_uid; int i_mapping; struct super_block* i_sb; } ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct nilfs_inode_info* FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nilfs_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (struct inode*) ;
 struct inode* FUNC_15 (struct super_block*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *,int *) ;
 int FUNC_18 (struct inode*,struct inode*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (int ,int*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int) ;

struct inode *FUNC_24(struct inode *VAR_9, int VAR_10)
{
 struct super_block *VAR_11 = VAR_9->i_sb;
 struct nilfs_sb_info *VAR_12 = FUNC_2(VAR_11);
 struct inode *VAR_13;
 struct nilfs_inode_info *VAR_14;
 int VAR_15 = -VAR_1;
 ino_t VAR_16;

 VAR_13 = FUNC_15(VAR_11);
 if (FUNC_23(!VAR_13))
  goto failed;

 FUNC_13(VAR_13->i_mapping,
        FUNC_12(VAR_13->i_mapping) & ~VAR_8);

 VAR_14 = FUNC_1(VAR_13);
 VAR_14->i_state = 1 << VAR_6;

 VAR_15 = FUNC_17(VAR_12->s_ifile, &VAR_16, &VAR_14->i_bh);
 if (FUNC_23(VAR_15))
  goto failed_ifile_create_inode;


 FUNC_6(&VAR_12->s_inodes_count);

 VAR_13->i_uid = FUNC_8();
 if (VAR_9->i_mode & VAR_7) {
  VAR_13->i_gid = VAR_9->i_gid;
  if (FUNC_3(VAR_10))
   VAR_10 |= VAR_7;
 } else
  VAR_13->i_gid = FUNC_7();

 VAR_13->i_mode = VAR_10;
 VAR_13->i_ino = VAR_16;
 VAR_13->i_mtime = VAR_13->i_atime = VAR_13->i_ctime = VAR_0;

 if (FUNC_5(VAR_10) || FUNC_3(VAR_10) || FUNC_4(VAR_10)) {
  VAR_15 = FUNC_16(VAR_14->i_bmap, ((void*)0));
  if (VAR_15 < 0)
   goto failed_bmap;

  FUNC_20(VAR_5, &VAR_14->i_state);

 }

 VAR_14->i_flags = FUNC_1(VAR_9)->i_flags;
 if (FUNC_4(VAR_10))
  VAR_14->i_flags &= ~(VAR_4 | VAR_2);
 if (!FUNC_3(VAR_10))
  VAR_14->i_flags &= ~VAR_3;



 VAR_14->i_dir_start_lookup = 0;
 VAR_14->i_cno = 0;
 FUNC_19(VAR_13);
 FUNC_21(&VAR_12->s_next_gen_lock);
 VAR_13->i_generation = VAR_12->s_next_generation++;
 FUNC_22(&VAR_12->s_next_gen_lock);
 FUNC_9(VAR_13);

 VAR_15 = FUNC_18(VAR_13, VAR_9);
 if (FUNC_23(VAR_15))
  goto failed_acl;



 FUNC_14(VAR_13);
 return VAR_13;

 failed_acl:
 failed_bmap:
 VAR_13->i_nlink = 0;
 FUNC_10(VAR_13);

 goto failed;

 failed_ifile_create_inode:
 FUNC_11(VAR_13);
 FUNC_10(VAR_13);

 failed:
 return FUNC_0(VAR_15);
}
