
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smb_sb_info {TYPE_2__* mnt; } ;
struct smb_fattr {int f_ino; } ;
struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_3__ {scalar_t__ len; int name; } ;
struct dentry {int * d_op; int d_sb; TYPE_1__ d_name; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,char,scalar_t__) ;
 struct smb_sb_info* FUNC_7 (struct dentry*) ;
 struct inode* FUNC_8 (int ,struct smb_fattr*) ;
 int FUNC_9 (struct dentry*,struct smb_fattr*) ;
 int FUNC_10 (struct dentry*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 () ;

__attribute__((used)) static struct dentry *
FUNC_12(struct inode *VAR_8, struct dentry *VAR_9, struct nameidata *VAR_10)
{
 struct smb_fattr VAR_11;
 struct inode *VAR_12;
 int VAR_13;
 struct smb_sb_info *VAR_14;

 VAR_13 = -VAR_2;
 if (VAR_9->d_name.len > VAR_4)
  goto out;


 VAR_13 = -VAR_1;
 if (FUNC_6(VAR_9->d_name.name, '\\', VAR_9->d_name.len))
  goto out;

 FUNC_5();
 VAR_13 = FUNC_9(VAR_9, &VAR_11);






 VAR_12 = ((void*)0);
 if (VAR_13 == -VAR_3)
  goto add_entry;
 if (!VAR_13) {
  VAR_13 = -VAR_0;
  VAR_11.f_ino = FUNC_4(VAR_9->d_sb, 2);
  VAR_12 = FUNC_8(VAR_8->i_sb, &VAR_11);
  if (VAR_12) {
 add_entry:
   VAR_14 = FUNC_7(VAR_9);
   if (VAR_14->mnt->flags & VAR_5)
    VAR_9->d_op = &VAR_7;
   else
    VAR_9->d_op = &VAR_6;

   FUNC_3(VAR_9, VAR_12);
   FUNC_10(VAR_9);
   VAR_13 = 0;
  }
 }
 FUNC_11();
out:
 return FUNC_1(VAR_13);
}
