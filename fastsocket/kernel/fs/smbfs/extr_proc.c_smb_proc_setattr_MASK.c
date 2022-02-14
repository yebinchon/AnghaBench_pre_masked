
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_fattr {int attr; } ;
struct dentry {int d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int ,int ) ;
 struct smb_sb_info* FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct smb_sb_info*,struct dentry*,int ) ;

int
FUNC_5(struct dentry *VAR_0, struct smb_fattr *VAR_1)
{
 struct smb_sb_info *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 FUNC_1("setting %s/%s, open=%d\n",
  FUNC_0(VAR_0), FUNC_3(VAR_0->d_inode));
 VAR_3 = FUNC_4(VAR_2, VAR_0, VAR_1->attr);
 return VAR_3;
}
