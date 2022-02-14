
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_security_handle {int length; int value; int name; } ;
struct inode {int dummy; } ;
typedef int XATTR_SECURITY_PREFIX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct reiserfs_transaction_handle*,struct inode*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct reiserfs_transaction_handle *VAR_4,
       struct inode *VAR_5,
       struct reiserfs_security_handle *VAR_6)
{
 int VAR_7;
 if (FUNC_1(VAR_6->name) < sizeof(XATTR_SECURITY_PREFIX))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6->name, VAR_6->value,
       VAR_6->length, VAR_3);
 if (VAR_7 == -VAR_1 || VAR_7 == -VAR_2)
  VAR_7 = 0;

 return VAR_7;
}
