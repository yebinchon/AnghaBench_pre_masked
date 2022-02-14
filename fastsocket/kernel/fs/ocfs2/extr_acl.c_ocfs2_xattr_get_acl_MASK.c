
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct ocfs2_super {int s_mount_opt; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (struct posix_acl*) ;
 struct posix_acl* FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct posix_acl*) ;
 int FUNC_5 (struct posix_acl*,void*,size_t) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3,
          int VAR_4,
          void *VAR_5,
          size_t VAR_6)
{
 struct ocfs2_super *VAR_7 = FUNC_1(VAR_3->i_sb);
 struct posix_acl *VAR_8;
 int VAR_9;

 if (!(VAR_7->s_mount_opt & VAR_2))
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_3, VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_2(VAR_8);
 if (VAR_8 == ((void*)0))
  return -VAR_0;
 VAR_9 = FUNC_5(VAR_8, VAR_5, VAR_6);
 FUNC_4(VAR_8);

 return VAR_9;
}
