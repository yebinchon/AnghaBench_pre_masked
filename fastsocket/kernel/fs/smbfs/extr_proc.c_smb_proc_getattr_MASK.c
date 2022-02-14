
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {TYPE_1__* ops; } ;
struct smb_fattr {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* getattr ) (struct smb_sb_info*,struct dentry*,struct smb_fattr*) ;} ;


 struct smb_sb_info* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct smb_sb_info*,struct smb_fattr*) ;
 int FUNC_2 (struct smb_sb_info*,struct smb_fattr*) ;
 int FUNC_3 (struct smb_sb_info*,struct dentry*,struct smb_fattr*) ;

int
FUNC_4(struct dentry *VAR_0, struct smb_fattr *VAR_1)
{
 struct smb_sb_info *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_2(VAR_2, VAR_1);
 VAR_3 = VAR_2->ops->getattr(VAR_2, VAR_0, VAR_1);
 FUNC_1(VAR_2, VAR_1);

 return VAR_3;
}
