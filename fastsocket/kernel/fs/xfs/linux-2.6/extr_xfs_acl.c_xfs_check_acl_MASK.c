
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 struct xfs_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct xfs_inode*) ;
 int FUNC_4 (struct inode*,struct posix_acl*,int) ;
 int FUNC_5 (struct posix_acl*) ;
 int FUNC_6 (struct xfs_inode*) ;
 struct posix_acl* FUNC_7 (struct inode*,int ) ;

int
FUNC_8(struct inode *VAR_2, int VAR_3)
{
 struct xfs_inode *VAR_4 = FUNC_2(VAR_2);
 struct posix_acl *VAR_5;
 int VAR_6 = -VAR_1;

 FUNC_6(VAR_4);





 if (!FUNC_3(VAR_4))
  return -VAR_1;

 VAR_5 = FUNC_7(VAR_2, VAR_0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 if (VAR_5) {
  VAR_6 = FUNC_4(VAR_2, VAR_5, VAR_3);
  FUNC_5(VAR_5);
 }

 return VAR_6;
}
