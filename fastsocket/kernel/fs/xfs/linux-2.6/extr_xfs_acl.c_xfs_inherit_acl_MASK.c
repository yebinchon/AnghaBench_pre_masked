
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct posix_acl* FUNC_1 (struct posix_acl*,int ) ;
 int FUNC_2 (struct posix_acl*,int *) ;
 int FUNC_3 (struct posix_acl*) ;
 int FUNC_4 (struct inode*,int ,struct posix_acl*) ;
 int FUNC_5 (struct inode*,int ) ;

int
FUNC_6(struct inode *VAR_4, struct posix_acl *VAR_5)
{
 struct posix_acl *VAR_6;
 mode_t VAR_7;
 int VAR_8 = 0, VAR_9 = 0;

 if (FUNC_0(VAR_4->i_mode)) {
  VAR_8 = FUNC_4(VAR_4, VAR_1, VAR_5);
  if (VAR_8)
   return VAR_8;
 }

 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_7 = VAR_4->i_mode;
 VAR_8 = FUNC_2(VAR_6, &VAR_7);
 if (VAR_8 < 0)
  goto out_release_clone;






 if (VAR_8 > 0)
  VAR_9 = 1;

 VAR_8 = FUNC_5(VAR_4, VAR_7);
 if (VAR_8)
  goto out_release_clone;

 if (VAR_9)
  VAR_8 = FUNC_4(VAR_4, VAR_0, VAR_6);

 out_release_clone:
 FUNC_3(VAR_6);
 return VAR_8;
}
