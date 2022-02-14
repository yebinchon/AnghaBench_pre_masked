
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_sb; } ;
struct ufs_sb_info {unsigned int s_mount_opt; } ;
struct seq_file {int dummy; } ;
struct match_token {unsigned int token; int pattern; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct ufs_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;
 struct match_token* VAR_4 ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_5, struct vfsmount *VAR_6)
{
 struct ufs_sb_info *VAR_7 = FUNC_1(VAR_6->mnt_sb);
 unsigned VAR_8 = VAR_7->s_mount_opt & VAR_3;
 const struct match_token *VAR_9 = VAR_4;

 while (VAR_9->token != VAR_1 && VAR_9->token != VAR_8)
  ++VAR_9;
 FUNC_0(VAR_9->token == VAR_1);
 FUNC_2(VAR_5, ",%s", VAR_9->pattern);

 VAR_8 = VAR_7->s_mount_opt & VAR_2;
 while (VAR_9->token != VAR_0 && VAR_9->token != VAR_8)
  ++VAR_9;
 FUNC_0(VAR_9->token == VAR_0);
 FUNC_2(VAR_5, ",%s", VAR_9->pattern);

 return 0;
}
