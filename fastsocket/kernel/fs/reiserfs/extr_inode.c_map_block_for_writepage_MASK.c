
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct reiserfs_transaction_handle {scalar_t__ t_trans_id; } ;
struct item_head {int dummy; } ;
struct inode {int i_size; int i_ino; TYPE_1__* i_sb; } ;
struct cpu_key {int dummy; } ;
struct buffer_head {int b_size; scalar_t__ b_blocknr; int b_page; } ;
typedef int loff_t ;
typedef int __le32 ;
struct TYPE_21__ {int pos_in_item; } ;
struct TYPE_20__ {int s_blocksize_bits; } ;


 scalar_t__ FUNC_0 (struct buffer_head*,struct item_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct item_head*,struct item_head*) ;
 scalar_t__ FUNC_6 (struct cpu_key*) ;
 scalar_t__ FUNC_7 (int,TYPE_1__*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_1__*) ;
 struct item_head* FUNC_10 (TYPE_2__*) ;
 int * FUNC_11 (TYPE_2__*) ;
 struct buffer_head* FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (struct item_head*) ;
 scalar_t__ FUNC_14 (int,struct item_head*) ;
 scalar_t__ FUNC_15 (struct item_head*) ;
 scalar_t__ FUNC_16 (struct item_head*,TYPE_2__*) ;
 int FUNC_17 (struct reiserfs_transaction_handle*,TYPE_1__*,int) ;
 int FUNC_18 (struct reiserfs_transaction_handle*,TYPE_1__*,int) ;
 int FUNC_19 (struct reiserfs_transaction_handle*,TYPE_1__*,struct buffer_head*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct buffer_head*) ;
 int FUNC_23 (struct cpu_key*,struct inode*,int,int ,int) ;
 int FUNC_24 (scalar_t__,char*,int) ;
 char* FUNC_25 (int ) ;
 TYPE_2__ VAR_8 ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (struct inode*,unsigned long,struct buffer_head*,int) ;
 int FUNC_28 (TYPE_1__*,struct buffer_head*,int) ;
 int FUNC_29 (TYPE_1__*,struct buffer_head*) ;
 int FUNC_30 (struct inode*) ;
 int FUNC_31 (TYPE_1__*,char*,char*,int) ;
 int FUNC_32 (TYPE_1__*) ;
 int FUNC_33 (TYPE_1__*) ;
 int FUNC_34 (TYPE_1__*,struct cpu_key*,TYPE_2__*) ;
 int FUNC_35 (struct buffer_head*,int ,struct inode*) ;
 int FUNC_36 (struct cpu_key*,scalar_t__) ;
 int FUNC_37 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_38(struct inode *VAR_9,
       struct buffer_head *VAR_10,
       unsigned long VAR_11)
{
 struct reiserfs_transaction_handle VAR_12;
 int VAR_13;
 struct item_head VAR_14;
 struct item_head *VAR_15;
 struct buffer_head *VAR_16;
 __le32 *VAR_17;
 struct cpu_key VAR_18;
 FUNC_1(VAR_8);
 int VAR_19;
 int VAR_20 = VAR_4;
 loff_t VAR_21 = ((loff_t)VAR_11 << VAR_9->i_sb->s_blocksize_bits)+1;
 int VAR_22;
 int VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25;
 int VAR_26 = 0;


 VAR_12.t_trans_id = 0;

 if (!FUNC_3(VAR_10)) {
  return -VAR_0;
 }

 FUNC_20(VAR_10->b_page);
      start_over:
 FUNC_32(VAR_9->i_sb);
 FUNC_23(&VAR_18, VAR_9, VAR_21, VAR_7, 3);

      research:
 VAR_22 = FUNC_34(VAR_9->i_sb, &VAR_18, &VAR_8);
 if (VAR_22 != VAR_6) {
  VAR_23 = 1;
  goto out;
 }

 VAR_16 = FUNC_12(&VAR_8);
 VAR_15 = FUNC_10(&VAR_8);
 VAR_17 = FUNC_11(&VAR_8);
 VAR_19 = VAR_8.pos_in_item;


 if (FUNC_14(VAR_22, VAR_15)) {
  if (VAR_24 > 0) {
   FUNC_31(VAR_9->i_sb, "clm-6002",
      "bytes_copied %d", VAR_24);
  }
  if (!FUNC_8(VAR_17, VAR_19)) {

   VAR_23 = 1;
   goto out;
  }
  FUNC_35(VAR_10,
         FUNC_8(VAR_17, VAR_19), VAR_9);
 } else if (FUNC_15(VAR_15)) {
  char *VAR_27;
  VAR_27 = FUNC_25(VAR_10->b_page);
  VAR_27 += (VAR_21 - 1) & (VAR_5 - 1);
  VAR_25 = FUNC_13(VAR_15) - VAR_19;

  VAR_13 = FUNC_9(VAR_9->i_sb);
  FUNC_5(&VAR_14, VAR_15);

  if (!VAR_26) {

   VAR_22 = FUNC_17(&VAR_12, VAR_9->i_sb, VAR_20);
   if (VAR_22)
    goto out;
   FUNC_30(VAR_9);
   VAR_26 = 1;
   if (FUNC_7(VAR_13, VAR_9->i_sb)
       && FUNC_16(&VAR_14, &VAR_8)) {
    FUNC_29(VAR_9->i_sb,
         VAR_16);
    goto research;
   }
  }

  FUNC_28(VAR_9->i_sb, VAR_16, 1);

  if (FUNC_7(VAR_13, VAR_9->i_sb)
      && FUNC_16(&VAR_14, &VAR_8)) {
   FUNC_29(VAR_9->i_sb, VAR_16);
   goto research;
  }

  FUNC_24(FUNC_0(VAR_16, VAR_15) + VAR_19, VAR_27 + VAR_24,
         VAR_25);

  FUNC_19(&VAR_12, VAR_9->i_sb, VAR_16);
  VAR_24 += VAR_25;
  FUNC_35(VAR_10, 0, VAR_9);


  if (VAR_24 < VAR_10->b_size &&
      (VAR_21 + VAR_24) < VAR_9->i_size) {
   FUNC_36(&VAR_18,
          FUNC_6(&VAR_18) +
          VAR_25);
   goto research;
  }
 } else {
  FUNC_31(VAR_9->i_sb, "clm-6003",
     "bad item inode %lu", VAR_9->i_ino);
  VAR_22 = -VAR_0;
  goto out;
 }
 VAR_22 = 0;

      out:
 FUNC_26(&VAR_8);
 if (VAR_26) {
  int VAR_28 = FUNC_18(&VAR_12, VAR_9->i_sb, VAR_20);
  if (VAR_28)
   VAR_22 = VAR_28;
  VAR_26 = 0;
 }
 FUNC_33(VAR_9->i_sb);


 if (VAR_23) {
  VAR_22 = FUNC_27(VAR_9, VAR_11, VAR_10,
         VAR_1 | VAR_3
         | VAR_2);
  if (!VAR_22) {
   if (!FUNC_2(VAR_10)
       || VAR_10->b_blocknr == 0) {

    VAR_23 = 0;
    goto start_over;
   }
  }
 }
 FUNC_21(VAR_10->b_page);

 if (!VAR_22 && FUNC_2(VAR_10) && VAR_10->b_blocknr == 0) {



  FUNC_22(VAR_10);
  FUNC_4(VAR_10);
  FUNC_37(VAR_10);
 }
 return VAR_22;
}
