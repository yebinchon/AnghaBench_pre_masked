
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int dummy; } ;
struct posix_acl {int a_count; } ;
struct inode {int i_sb; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct reiserfs_transaction_handle*,int ,size_t) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,int ,size_t) ;
 int FUNC_6 (struct posix_acl*,int ) ;
 struct posix_acl* FUNC_7 (struct posix_acl*,int ) ;
 int FUNC_8 (struct posix_acl*) ;
 int FUNC_9 (int ) ;
 struct posix_acl* FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct reiserfs_transaction_handle*,struct inode*,int ,struct posix_acl*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 size_t FUNC_15 (struct inode*,int ) ;

int FUNC_16(struct inode *VAR_5)
{
 struct posix_acl *VAR_6, *VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_5->i_mode))
  return -VAR_2;

 if (FUNC_3(VAR_5) == VAR_4 ||
     !FUNC_11(VAR_5->i_sb)) {
  return 0;
 }

 VAR_6 = FUNC_10(VAR_5, VAR_0);
 if (!VAR_6)
  return 0;
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 VAR_7 = FUNC_7(VAR_6, VAR_3);
 FUNC_8(VAR_6);
 if (!VAR_7)
  return -VAR_1;
 VAR_8 = FUNC_6(VAR_7, VAR_5->i_mode);
 if (!VAR_8) {
  struct reiserfs_transaction_handle VAR_9;
  size_t VAR_10 = FUNC_15(VAR_5,
          FUNC_9(VAR_7->a_count));
  FUNC_13(VAR_5->i_sb);
  VAR_8 = FUNC_4(&VAR_9, VAR_5->i_sb, VAR_10 * 2);
  if (!VAR_8) {
   int VAR_11;
   VAR_8 = FUNC_12(&VAR_9, VAR_5, VAR_0,
       VAR_7);
   VAR_11 = FUNC_5(&VAR_9, VAR_5->i_sb, VAR_10 * 2);
   if (VAR_11)
    VAR_8 = VAR_11;
  }
  FUNC_14(VAR_5->i_sb);
 }
 FUNC_8(VAR_7);
 return VAR_8;
}
