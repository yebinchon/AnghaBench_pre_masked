
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_security_handle {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int i_sb; int i_nlink; TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
struct TYPE_4__ {int len; int name; } ;
struct dentry {TYPE_2__ d_name; } ;
struct TYPE_3__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,int ,int) ;
 struct inode* FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,struct inode*,int) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,struct inode*,int ,int ,struct inode*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (struct reiserfs_transaction_handle*,struct inode*,int,int *,int ,struct dentry*,struct inode*,struct reiserfs_security_handle*) ;
 int FUNC_12 (struct inode*,struct inode*,struct reiserfs_security_handle*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct inode*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_5, struct dentry *VAR_6, int VAR_7,
      struct nameidata *VAR_8)
{
 int VAR_9;
 struct inode *VAR_10;

 int VAR_11 =
     VAR_1 * 2 +
     2 * (FUNC_0(VAR_5->i_sb) +
   FUNC_1(VAR_5->i_sb));
 struct reiserfs_transaction_handle VAR_12;
 struct reiserfs_security_handle VAR_13;

 if (!(VAR_10 = FUNC_7(VAR_5->i_sb))) {
  return -VAR_0;
 }
 FUNC_8(VAR_10, VAR_5, VAR_7);

 VAR_11 += FUNC_10(VAR_5);
 VAR_9 = FUNC_12(VAR_5, VAR_10, &VAR_13);
 if (VAR_9 < 0) {
  FUNC_3(VAR_10);
  return VAR_9;
 }
 VAR_11 += VAR_9;
 FUNC_15(VAR_5->i_sb);

 VAR_9 = FUNC_5(&VAR_12, VAR_5->i_sb, VAR_11);
 if (VAR_9) {
  FUNC_3(VAR_10);
  goto out_failed;
 }

 VAR_9 =
     FUNC_11(&VAR_12, VAR_5, VAR_7, ((void*)0), 0 , VAR_6,
          VAR_10, &VAR_13);
 if (VAR_9)
  goto out_failed;

 VAR_10->i_op = &VAR_3;
 VAR_10->i_fop = &VAR_4;
 VAR_10->i_mapping->a_ops = &VAR_2;

 VAR_9 =
     FUNC_9(&VAR_12, VAR_5, VAR_6->d_name.name,
          VAR_6->d_name.len, VAR_10, 1 );
 if (VAR_9) {
  int VAR_14;
  VAR_10->i_nlink--;
  FUNC_14(&VAR_12, VAR_10);
  VAR_14 = FUNC_6(&VAR_12, VAR_5->i_sb, VAR_11);
  if (VAR_14)
   VAR_9 = VAR_14;
  FUNC_17(VAR_10);
  FUNC_4(VAR_10);
  goto out_failed;
 }
 FUNC_13(VAR_10);
 FUNC_13(VAR_5);

 FUNC_2(VAR_6, VAR_10);
 FUNC_17(VAR_10);
 VAR_9 = FUNC_6(&VAR_12, VAR_5->i_sb, VAR_11);

      out_failed:
 FUNC_16(VAR_5->i_sb);
 return VAR_9;
}
