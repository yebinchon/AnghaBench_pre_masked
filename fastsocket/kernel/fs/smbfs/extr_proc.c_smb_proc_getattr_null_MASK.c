
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {TYPE_1__* ops; } ;
struct smb_fattr {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* getattr ) (struct smb_sb_info*,struct dentry*,struct smb_fattr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct smb_sb_info*,struct smb_fattr*) ;
 int FUNC_1 (struct smb_sb_info*,struct smb_fattr*) ;
 scalar_t__ FUNC_2 (struct smb_sb_info*) ;
 int FUNC_3 (struct smb_sb_info*,struct dentry*,struct smb_fattr*) ;

__attribute__((used)) static int
FUNC_4(struct smb_sb_info *VAR_1, struct dentry *VAR_2,
     struct smb_fattr *VAR_3)
{
 int VAR_4;

 if (FUNC_2(VAR_1) < 0)
  return -VAR_0;

 FUNC_1(VAR_1, VAR_3);
 VAR_4 = VAR_1->ops->getattr(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_1, VAR_3);

 return VAR_4;
}
