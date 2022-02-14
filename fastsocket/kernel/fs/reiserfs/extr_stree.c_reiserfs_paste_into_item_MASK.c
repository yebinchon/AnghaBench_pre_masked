
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int dummy; } ;
struct tree_balance {int key; } ;
struct reiserfs_transaction_handle {int t_super; int t_trans_id; } ;
struct inode {int i_uid; int i_sb; } ;
struct cpu_key {int on_disk_key; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct treepath*,struct cpu_key const*) ;
 int FUNC_3 (struct tree_balance*,int *,char const*,int ) ;
 int FUNC_4 (int ,struct tree_balance*,int *,char const*) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,struct tree_balance*,int ,struct treepath*,int) ;
 int FUNC_8 (int *) ;
 int VAR_11 ;
 int FUNC_9 (struct treepath*) ;
 int FUNC_10 (int ,int ,char*,int,int ,int ) ;
 int FUNC_11 (int ,char*,char*,struct cpu_key const*) ;
 int FUNC_12 (int ,struct cpu_key const*,struct treepath*) ;
 int FUNC_13 (struct tree_balance*) ;
 scalar_t__ FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct inode*,int) ;

int FUNC_16(struct reiserfs_transaction_handle *VAR_12, struct treepath *VAR_13,
        const struct cpu_key *VAR_14,
        struct inode *VAR_15,
        const char *VAR_16,
        int VAR_17)
{
 struct tree_balance VAR_18;
 int VAR_19;
 int VAR_20;

 FUNC_0(!VAR_12->t_trans_id);

 VAR_20 = FUNC_6(VAR_15->i_sb);
 if (FUNC_14(VAR_15, VAR_17)) {
  FUNC_9(VAR_13);
  return -VAR_1;
 }
 FUNC_7(VAR_12, &VAR_18, VAR_12->t_super, VAR_13,
         VAR_17);





 if (FUNC_5(VAR_20, VAR_15->i_sb)) {
  goto search_again;
 }

 while ((VAR_19 =
  FUNC_4(VAR_6, &VAR_18, ((void*)0),
     VAR_16)) == VAR_10) {
       search_again:

  FUNC_1(VAR_12->t_super, VAR_11);
  VAR_19 =
      FUNC_12(VAR_12->t_super, VAR_14,
            VAR_13);
  if (VAR_19 == VAR_5) {
   VAR_19 = -VAR_3;
   goto error_out;
  }
  if (VAR_19 == VAR_8) {
   FUNC_11(VAR_15->i_sb, "PAP-5710",
      "entry or pasted byte (%K) exists",
      VAR_14);
   VAR_19 = -VAR_2;
   goto error_out;
  }



 }



 if (VAR_19 == VAR_0) {
  FUNC_3(&VAR_18, ((void*)0) , VAR_16, VAR_6);
  return 0;
 }
 VAR_19 = (VAR_19 == VAR_7) ? -VAR_4 : -VAR_3;
      error_out:

 FUNC_13(&VAR_18);






 FUNC_15(VAR_15, VAR_17);
 return VAR_19;
}
