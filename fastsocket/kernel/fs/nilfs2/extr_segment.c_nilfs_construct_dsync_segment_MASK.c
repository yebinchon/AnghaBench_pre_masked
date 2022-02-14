
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_transaction_info {int dummy; } ;
struct nilfs_sc_info {void* sc_dsync_end; void* sc_dsync_start; struct nilfs_inode_info* sc_dsync_inode; int sc_flags; } ;
struct nilfs_sb_info {int s_inode_lock; int s_nilfs; } ;
struct nilfs_inode_info {int i_state; } ;
struct inode {int dummy; } ;
typedef void* loff_t ;


 int VAR_0 ;
 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nilfs_sb_info* FUNC_1 (struct super_block*) ;
 struct nilfs_sc_info* FUNC_2 (struct nilfs_sb_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct nilfs_sc_info*,int ) ;
 int FUNC_5 (struct nilfs_sc_info*) ;
 scalar_t__ FUNC_6 (struct nilfs_sb_info*,int ) ;
 int FUNC_7 (struct nilfs_sb_info*,struct nilfs_transaction_info*,int ) ;
 int FUNC_8 (struct nilfs_sb_info*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

int FUNC_12(struct super_block *VAR_7, struct inode *VAR_8,
      loff_t VAR_9, loff_t VAR_10)
{
 struct nilfs_sb_info *VAR_11 = FUNC_1(VAR_7);
 struct nilfs_sc_info *VAR_12 = FUNC_2(VAR_11);
 struct nilfs_inode_info *VAR_13;
 struct nilfs_transaction_info VAR_14;
 int VAR_15 = 0;

 if (!VAR_12)
  return -VAR_0;

 FUNC_7(VAR_11, &VAR_14, 0);

 VAR_13 = FUNC_0(VAR_8);
 if (FUNC_11(VAR_2, &VAR_13->i_state) ||
     FUNC_6(VAR_11, VAR_6) ||
     FUNC_11(VAR_4, &VAR_12->sc_flags) ||
     FUNC_3(VAR_11->s_nilfs)) {
  FUNC_8(VAR_11);
  VAR_15 = FUNC_5(VAR_12);
  return VAR_15;
 }

 FUNC_9(&VAR_11->s_inode_lock);
 if (!FUNC_11(VAR_3, &VAR_13->i_state) &&
     !FUNC_11(VAR_1, &VAR_13->i_state)) {
  FUNC_10(&VAR_11->s_inode_lock);
  FUNC_8(VAR_11);
  return 0;
 }
 FUNC_10(&VAR_11->s_inode_lock);
 VAR_12->sc_dsync_inode = VAR_13;
 VAR_12->sc_dsync_start = VAR_9;
 VAR_12->sc_dsync_end = VAR_10;

 VAR_15 = FUNC_4(VAR_12, VAR_5);

 FUNC_8(VAR_11);
 return VAR_15;
}
