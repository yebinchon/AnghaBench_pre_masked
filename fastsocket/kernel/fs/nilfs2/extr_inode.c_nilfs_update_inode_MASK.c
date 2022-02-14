
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nilfs_sb_info {int s_ifile; } ;
struct nilfs_inode_info {int i_state; } ;
struct nilfs_inode {int dummy; } ;
struct inode {struct super_block* i_sb; int i_ino; } ;
struct buffer_head {int dummy; } ;
typedef int ino_t ;
struct TYPE_2__ {int mi_entry_size; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;
 struct nilfs_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct nilfs_inode*,int ,int ) ;
 struct nilfs_inode* FUNC_4 (int ,int ,struct buffer_head*) ;
 int FUNC_5 (int ,int ,struct buffer_head*) ;
 int FUNC_6 (struct inode*,struct nilfs_inode*,int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9(struct inode *VAR_2, struct buffer_head *VAR_3)
{
 ino_t VAR_4 = VAR_2->i_ino;
 struct nilfs_inode_info *VAR_5 = FUNC_0(VAR_2);
 struct super_block *VAR_6 = VAR_2->i_sb;
 struct nilfs_sb_info *VAR_7 = FUNC_2(VAR_6);
 struct nilfs_inode *VAR_8;

 VAR_8 = FUNC_4(VAR_7->s_ifile, VAR_4, VAR_3);


 if (FUNC_8(VAR_1, &VAR_5->i_state))
  FUNC_3(VAR_8, 0, FUNC_1(VAR_7->s_ifile)->mi_entry_size);
 FUNC_7(VAR_0, &VAR_5->i_state);

 FUNC_6(VAR_2, VAR_8, 0);



 FUNC_5(VAR_7->s_ifile, VAR_4, VAR_3);
}
