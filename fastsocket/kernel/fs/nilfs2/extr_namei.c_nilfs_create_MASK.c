
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_transaction_info {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int i_sb; TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_4 (struct inode*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct nilfs_transaction_info*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5,
   struct nameidata *VAR_6)
{
 struct inode *VAR_7;
 struct nilfs_transaction_info VAR_8;
 int VAR_9;

 VAR_9 = FUNC_6(VAR_3->i_sb, &VAR_8, 1);
 if (VAR_9)
  return VAR_9;
 VAR_7 = FUNC_4(VAR_3, VAR_5);
 VAR_9 = FUNC_1(VAR_7);
 if (!FUNC_0(VAR_7)) {
  VAR_7->i_op = &VAR_1;
  VAR_7->i_fop = &VAR_2;
  VAR_7->i_mapping->a_ops = &VAR_0;
  FUNC_2(VAR_7);
  VAR_9 = FUNC_3(VAR_4, VAR_7);
 }
 if (!VAR_9)
  VAR_9 = FUNC_7(VAR_3->i_sb);
 else
  FUNC_5(VAR_3->i_sb);

 return VAR_9;
}
