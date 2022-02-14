
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_transaction_info {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct iattr {int ia_valid; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct iattr*) ;
 int FUNC_1 (struct inode*,struct iattr*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*,struct nilfs_transaction_info*,int ) ;
 int FUNC_6 (struct super_block*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct dentry *VAR_1, struct iattr *VAR_2)
{
 struct nilfs_transaction_info VAR_3;
 struct inode *VAR_4 = VAR_1->d_inode;
 struct super_block *VAR_5 = VAR_4->i_sb;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_5, &VAR_3, 0);
 if (FUNC_7(VAR_6))
  return VAR_6;
 VAR_6 = FUNC_1(VAR_4, VAR_2);
 if (!VAR_6 && (VAR_2->ia_valid & VAR_0))
  VAR_6 = FUNC_3(VAR_4);
 if (FUNC_2(!VAR_6))
  VAR_6 = FUNC_6(VAR_5);
 else
  FUNC_4(VAR_5);

 return VAR_6;
}
