
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nilfs_sb_info {int s_ifile; int s_nilfs; } ;
struct nilfs_inode {int i_device_code; } ;
struct inode {int i_mode; int * i_op; TYPE_1__* i_mapping; int * i_fop; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int mi_sem; } ;
struct TYPE_3__ {int * a_ops; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 struct nilfs_sb_info* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_0 ;
 struct inode* FUNC_10 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int ,unsigned long,struct buffer_head**) ;
 struct nilfs_inode* FUNC_12 (int ,unsigned long,struct buffer_head*) ;
 int FUNC_13 (int ,unsigned long,struct buffer_head*) ;
 int FUNC_14 (struct inode*,struct nilfs_inode*) ;
 int FUNC_15 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct super_block *VAR_7, unsigned long VAR_8,
         struct inode *VAR_9)
{
 struct nilfs_sb_info *VAR_10 = FUNC_1(VAR_7);
 struct inode *VAR_11 = FUNC_10(VAR_10->s_nilfs);
 struct buffer_head *VAR_12;
 struct nilfs_inode *VAR_13;
 int VAR_14;

 FUNC_6(&FUNC_0(VAR_11)->mi_sem);
 VAR_14 = FUNC_11(VAR_10->s_ifile, VAR_8, &VAR_12);
 if (FUNC_16(VAR_14))
  goto bad_inode;

 VAR_13 = FUNC_12(VAR_10->s_ifile, VAR_8, VAR_12);

 VAR_14 = FUNC_14(VAR_9, VAR_13);
 if (VAR_14)
  goto failed_unmap;

 if (FUNC_4(VAR_9->i_mode)) {
  VAR_9->i_op = &VAR_3;
  VAR_9->i_fop = &VAR_4;
  VAR_9->i_mapping->a_ops = &VAR_0;
 } else if (FUNC_2(VAR_9->i_mode)) {
  VAR_9->i_op = &VAR_1;
  VAR_9->i_fop = &VAR_2;
  VAR_9->i_mapping->a_ops = &VAR_0;
 } else if (FUNC_3(VAR_9->i_mode)) {
  VAR_9->i_op = &VAR_6;
  VAR_9->i_mapping->a_ops = &VAR_0;
 } else {
  VAR_9->i_op = &VAR_5;
  FUNC_7(
   VAR_9, VAR_9->i_mode,
   FUNC_9(FUNC_8(VAR_13->i_device_code)));
 }
 FUNC_13(VAR_10->s_ifile, VAR_8, VAR_12);
 FUNC_5(VAR_12);
 FUNC_17(&FUNC_0(VAR_11)->mi_sem);
 FUNC_15(VAR_9);
 return 0;

 failed_unmap:
 FUNC_13(VAR_10->s_ifile, VAR_8, VAR_12);
 FUNC_5(VAR_12);

 bad_inode:
 FUNC_17(&FUNC_0(VAR_11)->mi_sem);
 return VAR_14;
}
