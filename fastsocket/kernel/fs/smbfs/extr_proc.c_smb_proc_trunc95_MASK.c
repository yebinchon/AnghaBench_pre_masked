
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {int dummy; } ;
struct inode {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int fileid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct smb_sb_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct smb_sb_info*,int ) ;
 int FUNC_3 (struct inode*,int ) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_0, loff_t VAR_1)
{
 struct smb_sb_info *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_2, FUNC_0(VAR_0)->fileid);
 return VAR_3;
}
