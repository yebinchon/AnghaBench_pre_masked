
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {unsigned int s_blocksize; unsigned int s_blocksize_bits; } ;
struct nilfs_transaction_info {int dummy; } ;
struct nilfs_inode_info {int i_state; } ;
struct inode {unsigned int i_size; int i_ctime; int i_mtime; int i_mapping; struct super_block* i_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct nilfs_inode_info* FUNC_3 (struct inode*) ;
 int VAR_1 ;
 int FUNC_4 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_5 (int ,unsigned int,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,struct inode*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct super_block*,struct nilfs_transaction_info*,int ) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct nilfs_inode_info*,unsigned long) ;
 int FUNC_11 (int ,int *) ;

void FUNC_12(struct inode *VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6;
 struct nilfs_transaction_info VAR_7;
 struct super_block *VAR_8 = VAR_4->i_sb;
 struct nilfs_inode_info *VAR_9 = FUNC_3(VAR_4);

 if (!FUNC_11(VAR_1, &VAR_9->i_state))
  return;
 if (FUNC_0(VAR_4) || FUNC_1(VAR_4))
  return;

 VAR_6 = VAR_8->s_blocksize;
 VAR_5 = (VAR_4->i_size + VAR_6 - 1) >> VAR_8->s_blocksize_bits;
 FUNC_8(VAR_8, &VAR_7, 0);

 FUNC_5(VAR_4->i_mapping, VAR_4->i_size, VAR_3);

 FUNC_10(VAR_9, VAR_5);

 VAR_4->i_mtime = VAR_4->i_ctime = VAR_0;
 if (FUNC_2(VAR_4))
  FUNC_7(VAR_2);

 FUNC_6(FUNC_4(VAR_8), VAR_4, 0);
 FUNC_9(VAR_8);


}
