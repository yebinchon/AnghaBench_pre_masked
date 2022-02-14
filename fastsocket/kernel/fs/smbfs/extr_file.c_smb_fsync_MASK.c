
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {int dummy; } ;
struct file {int dummy; } ;
struct dentry {int d_inode; } ;
struct TYPE_2__ {int fileid; } ;


 int FUNC_0 (struct dentry*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 struct smb_sb_info* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct smb_sb_info*,int ) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_0, struct dentry * VAR_1, int VAR_2)
{
 struct smb_sb_info *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 FUNC_2("sync file %s/%s\n", FUNC_0(VAR_1));
 VAR_4 = FUNC_4(VAR_3, FUNC_1(VAR_1->d_inode)->fileid);
 return VAR_4;
}
