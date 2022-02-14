
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct ocfs2_super {int s_mount_opt; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct posix_acl* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 struct posix_acl* FUNC_4 (char*,int) ;
 int FUNC_5 (struct inode*,struct buffer_head*,int,char*,char*,int) ;

__attribute__((used)) static struct posix_acl *FUNC_6(struct inode *VAR_7,
           int VAR_8,
           struct buffer_head *VAR_9)
{
 struct ocfs2_super *VAR_10 = FUNC_1(VAR_7->i_sb);
 int VAR_11;
 char *VAR_12 = ((void*)0);
 struct posix_acl *VAR_13;
 int VAR_14;

 if (!(VAR_10->s_mount_opt & VAR_4))
  return ((void*)0);

 switch (VAR_8) {
 case 129:
  VAR_11 = VAR_5;
  break;
 case 128:
  VAR_11 = VAR_6;
  break;
 default:
  return FUNC_0(-VAR_0);
 }

 VAR_14 = FUNC_5(VAR_7, VAR_9, VAR_11, "", ((void*)0), 0);
 if (VAR_14 > 0) {
  VAR_12 = FUNC_3(VAR_14, VAR_3);
  if (!VAR_12)
   return FUNC_0(-VAR_2);
  VAR_14 = FUNC_5(VAR_7, VAR_9, VAR_11,
      "", VAR_12, VAR_14);
 }

 if (VAR_14 > 0)
  VAR_13 = FUNC_4(VAR_12, VAR_14);
 else if (VAR_14 == -VAR_1 || VAR_14 == 0)
  VAR_13 = ((void*)0);
 else
  VAR_13 = FUNC_0(VAR_14);

 FUNC_2(VAR_12);

 return VAR_13;
}
