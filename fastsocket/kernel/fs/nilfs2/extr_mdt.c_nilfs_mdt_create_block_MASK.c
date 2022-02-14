
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {int ns_bdev; TYPE_1__* ns_writer; } ;
struct super_block {int dummy; } ;
struct nilfs_transaction_info {int dummy; } ;
struct inode {int i_mapping; struct super_block* i_sb; } ;
struct buffer_head {int b_page; int b_bdev; } ;
struct TYPE_4__ {struct the_nilfs* mi_nilfs; } ;
struct TYPE_3__ {struct super_block* s_super; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (int) ;
 struct buffer_head* FUNC_6 (struct inode*,int ,unsigned long,int ) ;
 int FUNC_7 (struct inode*,unsigned long,struct buffer_head*,void (*) (struct inode*,struct buffer_head*,void*)) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*,struct nilfs_transaction_info*,int ) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_3, unsigned long VAR_4,
      struct buffer_head **VAR_5,
      void (*VAR_6)(struct inode *,
           struct buffer_head *,
           void *))
{
 struct the_nilfs *VAR_7 = FUNC_0(VAR_3)->mi_nilfs;
 struct super_block *VAR_8 = VAR_3->i_sb;
 struct nilfs_transaction_info VAR_9;
 struct buffer_head *VAR_10;
 int VAR_11;

 if (!VAR_8) {




  if (!VAR_7->ns_writer) {
   FUNC_1(1);
   VAR_11 = -VAR_2;
   goto out;
  }
  VAR_8 = VAR_7->ns_writer->s_super;
 }

 FUNC_9(VAR_8, &VAR_9, 0);

 VAR_11 = -VAR_1;
 VAR_10 = FUNC_6(VAR_3, VAR_3->i_mapping, VAR_4, 0);
 if (FUNC_12(!VAR_10))
  goto failed_unlock;

 VAR_11 = -VAR_0;
 if (FUNC_3(VAR_10))
  goto failed_bh;

 FUNC_14(VAR_10);
 if (FUNC_3(VAR_10))
  goto failed_bh;

 VAR_10->b_bdev = VAR_7->ns_bdev;
 VAR_11 = FUNC_7(VAR_3, VAR_4, VAR_10, VAR_6);
 if (FUNC_5(!VAR_11)) {
  FUNC_4(VAR_10);
  *VAR_5 = VAR_10;
 }

 failed_bh:
 FUNC_13(VAR_10->b_page);
 FUNC_11(VAR_10->b_page);
 FUNC_2(VAR_10);

 failed_unlock:
 if (FUNC_5(!VAR_11))
  VAR_11 = FUNC_10(VAR_8);
 else
  FUNC_8(VAR_8);
 out:
 return VAR_11;
}
