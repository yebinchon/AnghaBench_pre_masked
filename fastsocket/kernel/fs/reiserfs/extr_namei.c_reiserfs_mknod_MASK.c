
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_security_handle {int dummy; } ;
struct inode {int i_sb; int i_nlink; int i_mode; int * i_op; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,int ,int) ;
 struct inode* FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,struct inode*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct reiserfs_transaction_handle*,struct inode*,int ,int ,struct inode*,int) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int FUNC_13 (struct reiserfs_transaction_handle*,struct inode*,int,int *,int ,struct dentry*,struct inode*,struct reiserfs_security_handle*) ;
 int FUNC_14 (struct inode*,struct inode*,struct reiserfs_security_handle*) ;
 int VAR_3 ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct inode*) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_4, struct dentry *VAR_5, int VAR_6,
     dev_t VAR_7)
{
 int VAR_8;
 struct inode *VAR_9;
 struct reiserfs_transaction_handle VAR_10;
 struct reiserfs_security_handle VAR_11;

 int VAR_12 =
     VAR_2 * 3 +
     2 * (FUNC_0(VAR_4->i_sb) +
   FUNC_1(VAR_4->i_sb));

 if (!FUNC_10(VAR_7))
  return -VAR_0;

 if (!(VAR_9 = FUNC_8(VAR_4->i_sb))) {
  return -VAR_1;
 }
 FUNC_9(VAR_9, VAR_4, VAR_6);

 VAR_12 += FUNC_12(VAR_4);
 VAR_8 = FUNC_14(VAR_4, VAR_9, &VAR_11);
 if (VAR_8 < 0) {
  FUNC_3(VAR_9);
  return VAR_8;
 }
 VAR_12 += VAR_8;
 FUNC_17(VAR_4->i_sb);

 VAR_8 = FUNC_6(&VAR_10, VAR_4->i_sb, VAR_12);
 if (VAR_8) {
  FUNC_3(VAR_9);
  goto out_failed;
 }

 VAR_8 =
     FUNC_13(&VAR_10, VAR_4, VAR_6, ((void*)0), 0 , VAR_5,
          VAR_9, &VAR_11);
 if (VAR_8) {
  goto out_failed;
 }

 VAR_9->i_op = &VAR_3;
 FUNC_4(VAR_9, VAR_9->i_mode, VAR_7);


 FUNC_16(&VAR_10, VAR_9);

 FUNC_15(VAR_9);
 FUNC_15(VAR_4);

 VAR_8 =
     FUNC_11(&VAR_10, VAR_4, VAR_5->d_name.name,
          VAR_5->d_name.len, VAR_9, 1 );
 if (VAR_8) {
  int VAR_13;
  VAR_9->i_nlink--;
  FUNC_16(&VAR_10, VAR_9);
  VAR_13 = FUNC_7(&VAR_10, VAR_4->i_sb, VAR_12);
  if (VAR_13)
   VAR_8 = VAR_13;
  FUNC_19(VAR_9);
  FUNC_5(VAR_9);
  goto out_failed;
 }

 FUNC_2(VAR_5, VAR_9);
 FUNC_19(VAR_9);
 VAR_8 = FUNC_7(&VAR_10, VAR_4->i_sb, VAR_12);

      out_failed:
 FUNC_18(VAR_4->i_sb);
 return VAR_8;
}
