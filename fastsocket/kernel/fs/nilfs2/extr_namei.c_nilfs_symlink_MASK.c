
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {unsigned int s_blocksize; } ;
struct nilfs_transaction_info {int dummy; } ;
struct inode {struct super_block* i_sb; TYPE_1__* i_mapping; int * i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int VAR_3 ;
 struct inode* FUNC_5 (struct inode*,int) ;
 int VAR_4 ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,struct nilfs_transaction_info*,int) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct inode*,char const*,unsigned int) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_5, struct dentry *VAR_6,
    const char *VAR_7)
{
 struct nilfs_transaction_info VAR_8;
 struct super_block *VAR_9 = VAR_5->i_sb;
 unsigned VAR_10 = FUNC_10(VAR_7)+1;
 struct inode *VAR_11;
 int VAR_12;

 if (VAR_10 > VAR_9->s_blocksize)
  return -VAR_0;

 VAR_12 = FUNC_7(VAR_5->i_sb, &VAR_8, 1);
 if (VAR_12)
  return VAR_12;

 VAR_11 = FUNC_5(VAR_5, VAR_1 | VAR_2);
 VAR_12 = FUNC_1(VAR_11);
 if (FUNC_0(VAR_11))
  goto out;


 VAR_11->i_op = &VAR_4;
 VAR_11->i_mapping->a_ops = &VAR_3;
 VAR_12 = FUNC_9(VAR_11, VAR_7, VAR_10);
 if (VAR_12)
  goto out_fail;




 VAR_12 = FUNC_4(VAR_6, VAR_11);
out:
 if (!VAR_12)
  VAR_12 = FUNC_8(VAR_5->i_sb);
 else
  FUNC_6(VAR_5->i_sb);

 return VAR_12;

out_fail:
 FUNC_2(VAR_11);
 FUNC_3(VAR_11);
 goto out;
}
