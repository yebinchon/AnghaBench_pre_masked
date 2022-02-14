
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {unsigned long d_time; struct inode* d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int ) ;
 unsigned long FUNC_2 (struct smb_sb_info*) ;
 int FUNC_3 (char*,int ,unsigned long) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 unsigned long VAR_0 ;
 int FUNC_5 () ;
 struct smb_sb_info* FUNC_6 (struct dentry*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct dentry * VAR_1, struct nameidata *VAR_2)
{
 struct smb_sb_info *VAR_3 = FUNC_6(VAR_1);
 struct inode * VAR_4 = VAR_1->d_inode;
 unsigned long VAR_5 = VAR_0 - VAR_1->d_time;
 int VAR_6;






 VAR_6 = (VAR_5 <= FUNC_2(VAR_3));






 if (VAR_4) {
  FUNC_5();
  if (FUNC_4(VAR_4)) {
   FUNC_1("%s/%s has dud inode\n", FUNC_0(VAR_1));
   VAR_6 = 0;
  } else if (!VAR_6)
   VAR_6 = (FUNC_7(VAR_1) == 0);
  FUNC_8();
 } else {



 }
 return VAR_6;
}
