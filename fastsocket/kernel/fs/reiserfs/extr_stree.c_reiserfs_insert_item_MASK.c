
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct treepath {int dummy; } ;
struct tree_balance {int key; } ;
struct reiserfs_transaction_handle {TYPE_1__* t_super; int t_trans_id; } ;
struct item_head {int dummy; } ;
struct inode {int i_uid; TYPE_1__* i_sb; int i_mode; } ;
struct cpu_key {int on_disk_key; } ;
struct TYPE_8__ {int s_blocksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (struct tree_balance*,struct item_head*,char const*,int ) ;
 int FUNC_4 (int ,struct tree_balance*,struct item_head*,char const*) ;
 scalar_t__ FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct item_head*) ;
 int FUNC_8 (struct item_head*) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,struct tree_balance*,TYPE_1__*,struct treepath*,scalar_t__) ;
 int VAR_13 ;
 scalar_t__ FUNC_10 (struct item_head*) ;
 int FUNC_11 (struct treepath*) ;
 int FUNC_12 (TYPE_1__*,int ,char*,int,int ,int ) ;
 int FUNC_13 (TYPE_1__*,char*,char*,struct cpu_key const*) ;
 int FUNC_14 (TYPE_1__*,struct cpu_key const*,struct treepath*) ;
 int FUNC_15 (struct tree_balance*) ;
 scalar_t__ FUNC_16 (struct inode*,int) ;
 int FUNC_17 (struct inode*,int) ;

int FUNC_18(struct reiserfs_transaction_handle *VAR_14,
    struct treepath *VAR_15, const struct cpu_key *VAR_16,
    struct item_head *VAR_17, struct inode *VAR_18,
    const char *VAR_19)
{
 struct tree_balance VAR_20;
 int VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;

 FUNC_0(!VAR_14->t_trans_id);

 if (VAR_18) {
  VAR_22 = FUNC_6(VAR_18->i_sb);
  VAR_23 = FUNC_8(VAR_17);




  if (!FUNC_2(VAR_18->i_mode) && FUNC_10(VAR_17))
   VAR_23 = VAR_18->i_sb->s_blocksize + VAR_12;







  if (FUNC_16(VAR_18, VAR_23)) {
   FUNC_11(VAR_15);
   return -VAR_1;
  }
 }
 FUNC_9(VAR_14, &VAR_20, VAR_14->t_super, VAR_15,
         VAR_5 + FUNC_8(VAR_17));




 if (VAR_18 && FUNC_5(VAR_22, VAR_18->i_sb)) {
  goto search_again;
 }

 while ((VAR_21 =
  FUNC_4(VAR_8, &VAR_20, VAR_17,
     VAR_19)) == VAR_11) {
       search_again:

  FUNC_1(VAR_14->t_super, VAR_13);
  VAR_21 = FUNC_14(VAR_14->t_super, VAR_16, VAR_15);
  if (VAR_21 == VAR_6) {
   VAR_21 = -VAR_3;
   goto error_out;
  }
  if (VAR_21 == VAR_7) {
   FUNC_13(VAR_14->t_super, "PAP-5760",
      "key %K already exists in the tree",
      VAR_16);
   VAR_21 = -VAR_2;
   goto error_out;
  }
 }


 if (VAR_21 == VAR_0) {
  FUNC_3(&VAR_20, VAR_17, VAR_19, VAR_8);
  return 0;
 }

 VAR_21 = (VAR_21 == VAR_9) ? -VAR_4 : -VAR_3;
      error_out:

 FUNC_15(&VAR_20);





 if (VAR_18)
  FUNC_17(VAR_18, VAR_23);
 return VAR_21;
}
