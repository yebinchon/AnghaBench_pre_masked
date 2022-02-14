
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_sb_info {int s_inodes_count; int s_ifile; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;


 struct nilfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct inode *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->i_sb;
 struct nilfs_sb_info *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_0);

 (void) FUNC_3(VAR_2->s_ifile, VAR_0->i_ino);
 FUNC_1(&VAR_2->s_inodes_count);
}
