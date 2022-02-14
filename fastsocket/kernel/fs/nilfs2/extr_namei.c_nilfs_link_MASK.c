
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_transaction_info {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_sb; int i_count; int i_ctime; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct nilfs_transaction_info*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_3, struct inode *VAR_4,
        struct dentry *VAR_5)
{
 struct inode *VAR_6 = VAR_3->d_inode;
 struct nilfs_transaction_info VAR_7;
 int VAR_8;

 if (VAR_6->i_nlink >= VAR_2)
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_4->i_sb, &VAR_7, 1);
 if (VAR_8)
  return VAR_8;

 VAR_6->i_ctime = VAR_0;
 FUNC_1(VAR_6);
 FUNC_0(&VAR_6->i_count);

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (!VAR_8)
  VAR_8 = FUNC_5(VAR_4->i_sb);
 else
  FUNC_3(VAR_4->i_sb);

 return VAR_8;
}
