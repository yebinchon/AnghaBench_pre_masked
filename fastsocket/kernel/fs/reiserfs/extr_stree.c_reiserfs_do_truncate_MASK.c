
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct reiserfs_transaction_handle {int t_blocks_allocated; int t_trans_id; } ;
struct page {int dummy; } ;
struct item_head {int dummy; } ;
struct inode {int i_size; void* i_ctime; void* i_mtime; TYPE_2__* i_sb; int i_mode; } ;
struct TYPE_14__ {struct cpu_key* k_objectid; } ;
struct cpu_key {TYPE_1__ on_disk_key; } ;
typedef int loff_t ;
struct TYPE_16__ {int reada; int pos_in_item; } ;
struct TYPE_15__ {int s_blocksize; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct item_head* FUNC_2 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,char*,int,int,struct cpu_key*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (struct item_head*) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,TYPE_2__*,scalar_t__) ;
 int FUNC_10 (struct reiserfs_transaction_handle*,TYPE_2__*,int) ;
 scalar_t__ FUNC_11 (struct reiserfs_transaction_handle*,int ) ;
 int FUNC_12 (struct item_head*) ;
 int FUNC_13 (struct cpu_key*,struct inode*,int ,int ,int) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct item_head*,int ) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (struct reiserfs_transaction_handle*,TYPE_3__*,struct cpu_key*,struct inode*,struct page*,int) ;
 int FUNC_19 (TYPE_2__*,char*,char*,...) ;
 scalar_t__ FUNC_20 (struct reiserfs_transaction_handle*) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_23 (TYPE_2__*,char*,char*) ;
 TYPE_3__ VAR_10 ;
 int FUNC_24 (TYPE_2__*,struct cpu_key*,TYPE_3__*) ;
 int FUNC_25 (struct cpu_key*,int) ;
 int FUNC_26 (struct reiserfs_transaction_handle*,struct inode*) ;

int FUNC_27(struct reiserfs_transaction_handle *VAR_11,
     struct inode *VAR_12,
    struct page *VAR_13,
    int VAR_14



    )
{
 FUNC_1(VAR_10);
 struct item_head *VAR_15;
 struct cpu_key VAR_16;
 loff_t VAR_17,
  VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21 = 0;

 FUNC_0(!VAR_11->t_trans_id);
 if (!
     (FUNC_7(VAR_12->i_mode) || FUNC_5(VAR_12->i_mode)
      || FUNC_6(VAR_12->i_mode)))
  return 0;

 if (FUNC_5(VAR_12->i_mode)) {

  FUNC_26(VAR_11, VAR_12);
  return 0;
 }


 VAR_18 = VAR_12->i_size;


 FUNC_13(&VAR_16, VAR_12, FUNC_14(VAR_12),
       VAR_9, 3);

 VAR_20 =
     FUNC_24(VAR_12->i_sb, &VAR_16,
           &VAR_10);
 if (VAR_20 == VAR_3) {
  FUNC_19(VAR_12->i_sb, "vs-5657",
          "i/o failure occurred trying to truncate %K",
          &VAR_16);
  VAR_21 = -VAR_1;
  goto out;
 }
 if (VAR_20 == VAR_8 || VAR_20 == VAR_2) {
  FUNC_19(VAR_12->i_sb, "PAP-5660",
          "wrong result %d of search for %K", VAR_20,
          &VAR_16);

  VAR_21 = -VAR_1;
  goto out;
 }

 VAR_10.pos_in_item--;


 VAR_15 = FUNC_2(&VAR_10);
 if (FUNC_8(VAR_15))
  VAR_17 = 0;
 else {
  loff_t VAR_22 = FUNC_12(VAR_15);
  int VAR_23 =
      FUNC_15(VAR_15, VAR_12->i_sb->s_blocksize);




  VAR_17 = VAR_22 + VAR_23 - 1;
 }




 if (VAR_18 == 0)
  VAR_10.reada = VAR_6 | VAR_7;

 if (VAR_17 == 0 || VAR_17 < VAR_18) {
  goto update_and_out;
 }


 FUNC_25(&VAR_16, VAR_17);

 do {

  VAR_19 =
      FUNC_18(VAR_11, &VAR_10, &VAR_16,
        VAR_12, VAR_13, VAR_18);
  if (VAR_19 < 0) {
   FUNC_23(VAR_12->i_sb, "vs-5665",
      "reiserfs_cut_from_item failed");
   FUNC_17(&VAR_10);
   return 0;
  }

  FUNC_3(VAR_19 > VAR_17,
         "PAP-5670: reiserfs_cut_from_item: too many bytes deleted: deleted %d, file_size %lu, item_key %K",
         VAR_19, VAR_17, &VAR_16);


  VAR_17 -= VAR_19;

  FUNC_25(&VAR_16, VAR_17);
  if (FUNC_11(VAR_11, 0) ||
      FUNC_20(VAR_11) <= VAR_4) {
   int VAR_24 = VAR_11->t_blocks_allocated;
   FUNC_16(&VAR_10);

   if (VAR_14) {
    VAR_12->i_mtime = VAR_0;
    VAR_12->i_ctime = VAR_0;
   }
   FUNC_22(VAR_11, VAR_12);

   VAR_21 = FUNC_10(VAR_11, VAR_12->i_sb, VAR_24);
   if (VAR_21)
    goto out;
   VAR_21 = FUNC_9(VAR_11, VAR_12->i_sb,
         VAR_4 + VAR_5 * 4) ;
   if (VAR_21)
    goto out;
   FUNC_21(VAR_12);
  }
 } while (VAR_17 > FUNC_4(VAR_18) &&
   FUNC_24(VAR_12->i_sb, &VAR_16,
         &VAR_10) == VAR_8);

 FUNC_3(VAR_17 > FUNC_4(VAR_18),
        "PAP-5680: truncate did not finish: new_file_size %Ld, current %Ld, oid %d",
        VAR_18, VAR_17, VAR_16.on_disk_key.k_objectid);

      update_and_out:
 if (VAR_14) {

  VAR_12->i_mtime = VAR_0;
  VAR_12->i_ctime = VAR_0;
 }
 FUNC_22(VAR_11, VAR_12);

      out:
 FUNC_16(&VAR_10);
 return VAR_21;
}
