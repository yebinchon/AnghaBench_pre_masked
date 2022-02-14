
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ protocol; } ;
struct smb_sb_info {TYPE_1__ opt; } ;
struct qstr {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct smb_sb_info*,char*,int,struct dentry*,struct qstr*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct smb_sb_info *VAR_1, char *VAR_2, int VAR_3,
      struct dentry *VAR_4, struct qstr *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0)
  goto out;
 if (VAR_1->opt.protocol <= VAR_0)
  FUNC_1(VAR_2, VAR_6);
out:
 return VAR_6;
}
