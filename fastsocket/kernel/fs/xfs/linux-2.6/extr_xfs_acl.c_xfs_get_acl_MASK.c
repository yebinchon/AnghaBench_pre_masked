
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct xfs_acl {int dummy; } ;
struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 struct posix_acl* VAR_0 ;


 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct posix_acl* FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct posix_acl*) ;
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 struct xfs_inode* FUNC_3 (struct inode*) ;
 struct posix_acl* FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct xfs_acl*) ;
 struct xfs_acl* FUNC_6 (int,int ) ;
 int FUNC_7 (struct inode*,int,struct posix_acl*) ;
 struct posix_acl* FUNC_8 (struct xfs_acl*) ;
 int FUNC_9 (struct xfs_inode*,unsigned char*,unsigned char*,int*,int ) ;

struct posix_acl *
FUNC_10(struct inode *VAR_7, int VAR_8)
{
 struct xfs_inode *VAR_9 = FUNC_3(VAR_7);
 struct posix_acl *VAR_10;
 struct xfs_acl *VAR_11;
 int VAR_12 = sizeof(struct xfs_acl);
 unsigned char *VAR_13;
 int VAR_14;

 VAR_10 = FUNC_4(VAR_7, VAR_8);
 if (VAR_10 != VAR_0)
  return VAR_10;

 switch (VAR_8) {
 case 129:
  VAR_13 = VAR_6;
  break;
 case 128:
  VAR_13 = VAR_5;
  break;
 default:
  FUNC_0();
 }






 VAR_11 = FUNC_6(sizeof(struct xfs_acl), VAR_4);
 if (!VAR_11)
  return FUNC_1(-VAR_3);

 VAR_14 = -FUNC_9(VAR_9, VAR_13, (unsigned char *)VAR_11,
       &VAR_12, VAR_1);
 if (VAR_14) {





  if (VAR_14 == -VAR_2) {
   VAR_10 = ((void*)0);
   goto out_update_cache;
  }
  goto out;
 }

 VAR_10 = FUNC_8(VAR_11);
 if (FUNC_2(VAR_10))
  goto out;

 out_update_cache:
 FUNC_7(VAR_7, VAR_8, VAR_10);
 out:
 FUNC_5(VAR_11);
 return VAR_10;
}
