
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int t_trans_id; } ;
struct reiserfs_inode_info {scalar_t__ i_prealloc_count; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int) ;
 struct reiserfs_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct reiserfs_transaction_handle*,struct reiserfs_inode_info*) ;

void FUNC_3(struct reiserfs_transaction_handle *VAR_0,
          struct inode *VAR_1)
{
 struct reiserfs_inode_info *VAR_2 = FUNC_1(VAR_1);
 FUNC_0(!VAR_0->t_trans_id);
 if (VAR_2->i_prealloc_count)
  FUNC_2(VAR_0, VAR_2);
}
