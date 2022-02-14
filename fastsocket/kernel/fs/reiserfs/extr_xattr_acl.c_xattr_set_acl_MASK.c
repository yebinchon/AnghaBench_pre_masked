
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int dummy; } ;
struct posix_acl {int dummy; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct reiserfs_transaction_handle*,int ,size_t) ;
 int FUNC_4 (struct reiserfs_transaction_handle*,int ,size_t) ;
 struct posix_acl* FUNC_5 (void const*,size_t) ;
 int FUNC_6 (struct posix_acl*) ;
 int FUNC_7 (struct posix_acl*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,struct inode*,int,struct posix_acl*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,size_t) ;

__attribute__((used)) static int
FUNC_14(struct inode *VAR_2, int VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct posix_acl *VAR_6;
 int VAR_7, VAR_8;
 struct reiserfs_transaction_handle VAR_9;
 size_t VAR_10;
 if (!FUNC_8(VAR_2->i_sb))
  return -VAR_0;
 if (!FUNC_2(VAR_2))
  return -VAR_1;

 if (VAR_4) {
  VAR_6 = FUNC_5(VAR_4, VAR_5);
  if (FUNC_0(VAR_6)) {
   return FUNC_1(VAR_6);
  } else if (VAR_6) {
   VAR_7 = FUNC_7(VAR_6);
   if (VAR_7)
    goto release_and_out;
  }
 } else
  VAR_6 = ((void*)0);




 VAR_10 = FUNC_12(VAR_2) +
    FUNC_13(VAR_2, VAR_5) * 2;

 FUNC_10(VAR_2->i_sb);
 VAR_7 = FUNC_3(&VAR_9, VAR_2->i_sb, VAR_10);
 if (VAR_7 == 0) {
  VAR_7 = FUNC_9(&VAR_9, VAR_2, VAR_3, VAR_6);
  VAR_8 = FUNC_4(&VAR_9, VAR_2->i_sb, VAR_10);
  if (VAR_8)
   VAR_7 = VAR_8;
 }
 FUNC_11(VAR_2->i_sb);

      release_and_out:
 FUNC_6(VAR_6);
 return VAR_7;
}
