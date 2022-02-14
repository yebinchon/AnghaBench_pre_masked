
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct smb_sb_info {int dummy; } ;
struct smb_fattr {int f_ino; int f_mtime; int attr; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct smb_sb_info*,struct smb_fattr*) ;
 int FUNC_2 (struct smb_sb_info*,struct smb_fattr*) ;

void
FUNC_3(struct smb_sb_info *VAR_1, struct smb_fattr *VAR_2,
       struct super_block *VAR_3)
{
 FUNC_2(VAR_1, VAR_2);
 VAR_2->attr = VAR_0;
 VAR_2->f_ino = 2;
 VAR_2->f_mtime = FUNC_0(VAR_3);
 FUNC_1(VAR_1, VAR_2);
}
