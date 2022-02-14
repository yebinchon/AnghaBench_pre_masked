
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct dentry {int dummy; } ;
typedef int __u16 ;


 int FUNC_0 () ;
 struct smb_sb_info* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct smb_sb_info*,int ,int ) ;

int
FUNC_3(struct dentry *VAR_0, __u16 VAR_1)
{
 struct smb_sb_info *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1, FUNC_0());
 return VAR_3;
}
