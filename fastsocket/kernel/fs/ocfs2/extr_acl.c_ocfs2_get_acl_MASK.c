
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct ocfs2_super {int s_mount_opt; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;


 struct posix_acl* FUNC_0 (int) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int) ;
 struct posix_acl* FUNC_4 (struct inode*,int,struct buffer_head*) ;
 int FUNC_5 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_6 (struct inode*,int ) ;

__attribute__((used)) static struct posix_acl *FUNC_7(struct inode *VAR_1, int VAR_2)
{
 struct ocfs2_super *VAR_3 = FUNC_1(VAR_1->i_sb);
 struct buffer_head *VAR_4 = ((void*)0);
 struct posix_acl *VAR_5;
 int VAR_6;

 if (!(VAR_3->s_mount_opt & VAR_0))
  return ((void*)0);

 VAR_6 = FUNC_5(VAR_1, &VAR_4, 0);
 if (VAR_6 < 0) {
  FUNC_3(VAR_6);
  VAR_5 = FUNC_0(VAR_6);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_4);

 FUNC_6(VAR_1, 0);

 FUNC_2(VAR_4);

 return VAR_5;
}
