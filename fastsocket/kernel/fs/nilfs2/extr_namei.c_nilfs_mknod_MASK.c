
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_transaction_info {int dummy; } ;
struct inode {int i_sb; int i_mode; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 struct inode* FUNC_6 (struct inode*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct nilfs_transaction_info*,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3, dev_t VAR_4)
{
 struct inode *VAR_5;
 struct nilfs_transaction_info VAR_6;
 int VAR_7;

 if (!FUNC_4(VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_8(VAR_1->i_sb, &VAR_6, 1);
 if (VAR_7)
  return VAR_7;
 VAR_5 = FUNC_6(VAR_1, VAR_3);
 VAR_7 = FUNC_1(VAR_5);
 if (!FUNC_0(VAR_5)) {
  FUNC_2(VAR_5, VAR_5->i_mode, VAR_4);
  FUNC_3(VAR_5);
  VAR_7 = FUNC_5(VAR_2, VAR_5);
 }
 if (!VAR_7)
  VAR_7 = FUNC_9(VAR_1->i_sb);
 else
  FUNC_7(VAR_1->i_sb);

 return VAR_7;
}
