
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct qnx4_sb_info* s_fs_info; int * s_root; int s_flags; scalar_t__ s_magic; int * s_op; } ;
struct qnx4_super_block {int dummy; } ;
struct qnx4_sb_info {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __le32 ;
struct TYPE_2__ {struct qnx4_super_block* sb; struct buffer_head* sb_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct buffer_head*) ;
 int * FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct qnx4_sb_info*) ;
 struct qnx4_sb_info* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;
 char* FUNC_9 (struct super_block*) ;
 struct inode* FUNC_10 (struct super_block*,int) ;
 TYPE_1__* FUNC_11 (struct super_block*) ;
 int VAR_8 ;
 struct buffer_head* FUNC_12 (struct super_block*,int) ;
 int FUNC_13 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_14(struct super_block *VAR_9, void *VAR_10, int VAR_11)
{
 struct buffer_head *VAR_12;
 struct inode *VAR_13;
 const char *VAR_14;
 struct qnx4_sb_info *VAR_15;
 int VAR_16 = -VAR_0;

 VAR_15 = FUNC_6(sizeof(struct qnx4_sb_info), VAR_2);
 if (!VAR_15)
  return -VAR_1;
 VAR_9->s_fs_info = VAR_15;

 FUNC_13(VAR_9, VAR_4);




 VAR_12 = FUNC_12(VAR_9, 1);
 if (!VAR_12) {
  FUNC_8("qnx4: unable to read the superblock\n");
  goto outnobh;
 }
 if ( FUNC_7((__le32*) VAR_12->b_data) != VAR_7 ) {
  if (!VAR_11)
   FUNC_8("qnx4: wrong fsid in superblock.\n");
  goto out;
 }
 VAR_9->s_op = &VAR_8;
 VAR_9->s_magic = VAR_7;
 VAR_9->s_flags |= VAR_3;
 FUNC_11(VAR_9)->sb_buf = VAR_12;
 FUNC_11(VAR_9)->sb = (struct qnx4_super_block *) VAR_12->b_data;



 VAR_14 = FUNC_9(VAR_9);
 if (VAR_14 != ((void*)0)) {
   if (!VAR_11)
    FUNC_8("qnx4: %s\n", VAR_14);
  goto out;
 }


 VAR_13 = FUNC_10(VAR_9, VAR_6 * VAR_5);
 if (FUNC_0(VAR_13)) {
   FUNC_8("qnx4: get inode failed\n");
  VAR_16 = FUNC_1(VAR_13);
   goto out;
  }

 VAR_16 = -VAR_1;
  VAR_9->s_root = FUNC_3(VAR_13);
  if (VAR_9->s_root == ((void*)0))
   goto outi;

 FUNC_2(VAR_12);

 return 0;

      outi:
 FUNC_4(VAR_13);
      out:
 FUNC_2(VAR_12);
      outnobh:
 FUNC_5(VAR_15);
 VAR_9->s_fs_info = ((void*)0);
 return VAR_16;
}
