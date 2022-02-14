
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct ocfs2_super {int s_mount_opt; } ;
struct inode {int i_mode; int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (struct posix_acl*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct posix_acl* FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int *,struct inode*,int *,int ,struct posix_acl*,int *,int *) ;
 int FUNC_6 (struct posix_acl*,int ) ;
 struct posix_acl* FUNC_7 (struct posix_acl*,int ) ;
 int FUNC_8 (struct posix_acl*) ;

int FUNC_9(struct inode *VAR_5)
{
 struct ocfs2_super *VAR_6 = FUNC_1(VAR_5->i_sb);
 struct posix_acl *VAR_7, *VAR_8;
 int VAR_9;

 if (FUNC_3(VAR_5->i_mode))
  return -VAR_2;

 if (!(VAR_6->s_mount_opt & VAR_4))
  return 0;

 VAR_7 = FUNC_4(VAR_5, VAR_0);
 if (FUNC_0(VAR_7) || !VAR_7)
  return FUNC_2(VAR_7);
 VAR_8 = FUNC_7(VAR_7, VAR_3);
 FUNC_8(VAR_7);
 if (!VAR_8)
  return -VAR_1;
 VAR_9 = FUNC_6(VAR_8, VAR_5->i_mode);
 if (!VAR_9)
  VAR_9 = FUNC_5(((void*)0), VAR_5, ((void*)0), VAR_0,
        VAR_8, ((void*)0), ((void*)0));
 FUNC_8(VAR_8);
 return VAR_9;
}
