
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nilfs_transaction_info {int dummy; } ;
struct nilfs_inode_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ nrpages; } ;
struct inode {TYPE_1__ i_data; struct super_block* i_sb; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 struct nilfs_inode_info* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct super_block*,struct nilfs_transaction_info*,int ) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct nilfs_inode_info*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (int ) ;

void FUNC_11(struct inode *VAR_1)
{
 struct nilfs_transaction_info VAR_2;
 struct super_block *VAR_3 = VAR_1->i_sb;
 struct nilfs_inode_info *VAR_4 = FUNC_1(VAR_1);

 if (FUNC_10(FUNC_3(VAR_1))) {
  if (VAR_1->i_data.nrpages)
   FUNC_9(&VAR_1->i_data, 0);
  FUNC_2(VAR_1);
  return;
 }
 FUNC_6(VAR_3, &VAR_2, 0);

 if (VAR_1->i_data.nrpages)
  FUNC_9(&VAR_1->i_data, 0);

 FUNC_8(VAR_4, 0);
 FUNC_4(VAR_1);

 if (FUNC_0(VAR_1))
  FUNC_5(VAR_0);
 FUNC_7(VAR_3);


}
