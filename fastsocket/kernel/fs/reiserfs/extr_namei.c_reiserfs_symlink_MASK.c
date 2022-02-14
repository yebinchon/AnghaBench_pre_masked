
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_security_handle {int dummy; } ;
struct inode {TYPE_3__* i_sb; int i_nlink; TYPE_1__* i_mapping; int * i_op; } ;
struct TYPE_11__ {int len; int name; } ;
struct dentry {TYPE_2__ d_name; } ;
struct TYPE_12__ {int s_blocksize; } ;
struct TYPE_10__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,TYPE_3__*,int) ;
 int FUNC_8 (struct reiserfs_transaction_handle*,TYPE_3__*,int) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int,int ) ;
 int FUNC_11 (char*,char const*,int ) ;
 struct inode* FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (struct inode*,struct inode*,int) ;
 int FUNC_14 (char*,int,int ) ;
 int FUNC_15 (struct reiserfs_transaction_handle*,struct inode*,int ,int ,struct inode*,int) ;
 int VAR_6 ;
 int FUNC_16 (struct reiserfs_transaction_handle*,struct inode*,int,char*,int ,struct dentry*,struct inode*,struct reiserfs_security_handle*) ;
 int FUNC_17 (struct inode*,struct inode*,struct reiserfs_security_handle*) ;
 int VAR_7 ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (char const*) ;
 int FUNC_23 (struct inode*) ;

__attribute__((used)) static int FUNC_24(struct inode *VAR_8,
       struct dentry *VAR_9, const char *VAR_10)
{
 int VAR_11;
 struct inode *VAR_12;
 char *VAR_13;
 int VAR_14;
 struct reiserfs_transaction_handle VAR_15;
 struct reiserfs_security_handle VAR_16;
 int VAR_17 = VAR_4 | VAR_5;

 int VAR_18 =
     VAR_3 * 3 +
     2 * (FUNC_1(VAR_8->i_sb) +
   FUNC_2(VAR_8->i_sb));

 if (!(VAR_12 = FUNC_12(VAR_8->i_sb))) {
  return -VAR_1;
 }
 FUNC_13(VAR_12, VAR_8, VAR_17);

 VAR_11 = FUNC_17(VAR_8, VAR_12, &VAR_16);
 if (VAR_11 < 0) {
  FUNC_5(VAR_12);
  return VAR_11;
 }
 VAR_18 += VAR_11;

 FUNC_20(VAR_8->i_sb);
 VAR_14 = FUNC_3(FUNC_22(VAR_10));
 if (VAR_14 > FUNC_0(VAR_8->i_sb->s_blocksize)) {
  VAR_11 = -VAR_0;
  FUNC_5(VAR_12);
  goto out_failed;
 }

 VAR_13 = FUNC_10(VAR_14, VAR_2);
 if (!VAR_13) {
  FUNC_5(VAR_12);
  VAR_11 = -VAR_1;
  goto out_failed;
 }
 FUNC_11(VAR_13, VAR_10, FUNC_22(VAR_10));
 FUNC_14(VAR_13, VAR_14, FUNC_22(VAR_10));

 VAR_11 = FUNC_7(&VAR_15, VAR_8->i_sb, VAR_18);
 if (VAR_11) {
  FUNC_5(VAR_12);
  FUNC_9(VAR_13);
  goto out_failed;
 }

 VAR_11 =
     FUNC_16(&VAR_15, VAR_8, VAR_17, VAR_13, FUNC_22(VAR_10),
          VAR_9, VAR_12, &VAR_16);
 FUNC_9(VAR_13);
 if (VAR_11) {
  goto out_failed;
 }

 FUNC_18(VAR_12);
 FUNC_18(VAR_8);

 VAR_12->i_op = &VAR_7;
 VAR_12->i_mapping->a_ops = &VAR_6;





 VAR_11 = FUNC_15(&VAR_15, VAR_8, VAR_9->d_name.name,
        VAR_9->d_name.len, VAR_12, 1 );
 if (VAR_11) {
  int VAR_19;
  VAR_12->i_nlink--;
  FUNC_19(&VAR_15, VAR_12);
  VAR_19 = FUNC_8(&VAR_15, VAR_8->i_sb, VAR_18);
  if (VAR_19)
   VAR_11 = VAR_19;
  FUNC_23(VAR_12);
  FUNC_6(VAR_12);
  goto out_failed;
 }

 FUNC_4(VAR_9, VAR_12);
 FUNC_23(VAR_12);
 VAR_11 = FUNC_8(&VAR_15, VAR_8->i_sb, VAR_18);
      out_failed:
 FUNC_21(VAR_8->i_sb);
 return VAR_11;
}
