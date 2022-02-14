
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_transaction_info {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_sb; TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct inode*,struct inode*) ;
 struct inode* FUNC_8 (struct inode*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct nilfs_transaction_info*,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_6, struct dentry *VAR_7, int VAR_8)
{
 struct inode *VAR_9;
 struct nilfs_transaction_info VAR_10;
 int VAR_11;

 if (VAR_6->i_nlink >= VAR_1)
  return -VAR_0;

 VAR_11 = FUNC_10(VAR_6->i_sb, &VAR_10, 1);
 if (VAR_11)
  return VAR_11;

 FUNC_4(VAR_6);

 VAR_9 = FUNC_8(VAR_6, VAR_2 | VAR_8);
 VAR_11 = FUNC_1(VAR_9);
 if (FUNC_0(VAR_9))
  goto out_dir;

 VAR_9->i_op = &VAR_4;
 VAR_9->i_fop = &VAR_5;
 VAR_9->i_mapping->a_ops = &VAR_3;

 FUNC_4(VAR_9);

 VAR_11 = FUNC_7(VAR_9, VAR_6);
 if (VAR_11)
  goto out_fail;

 VAR_11 = FUNC_6(VAR_7, VAR_9);
 if (VAR_11)
  goto out_fail;

 FUNC_2(VAR_7, VAR_9);
out:
 if (!VAR_11)
  VAR_11 = FUNC_11(VAR_6->i_sb);
 else
  FUNC_9(VAR_6->i_sb);

 return VAR_11;

out_fail:
 FUNC_3(VAR_9);
 FUNC_3(VAR_9);
 FUNC_5(VAR_9);
out_dir:
 FUNC_3(VAR_6);
 goto out;
}
