
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct inode {int dummy; } ;


 struct smb_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct smb_sb_info*,struct inode*) ;

int
FUNC_3(struct inode *VAR_0)
{
 int VAR_1 = 0;

 if (FUNC_1(VAR_0)) {
  struct smb_sb_info *VAR_2 = FUNC_0(VAR_0);
  VAR_1 = FUNC_2(VAR_2, VAR_0);
 }
 return VAR_1;
}
