
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ protocol; } ;
struct smb_sb_info {TYPE_2__* mnt; TYPE_1__ opt; } ;
struct smb_fattr {int f_mtime; } ;
struct inode {int i_mtime; int i_mode; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_6__ {scalar_t__ access; } ;
struct TYPE_5__ {int flags; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 struct smb_sb_info* FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct smb_sb_info*,struct inode*) ;
 int FUNC_7 (struct smb_sb_info*,struct dentry*,scalar_t__) ;
 int FUNC_8 (struct smb_sb_info*,struct inode*,struct smb_fattr*) ;
 int FUNC_9 (struct smb_sb_info*,struct dentry*,struct smb_fattr*) ;

int
FUNC_10(struct dentry *VAR_4, struct smb_fattr *VAR_5)
{
 struct smb_sb_info *VAR_6 = FUNC_4(VAR_4);
 struct inode *VAR_7 = VAR_4->d_inode;
 int VAR_8;

 FUNC_3("setting %s/%s, open=%d\n",
  FUNC_0(VAR_4), FUNC_5(VAR_7));


 if (VAR_6->opt.protocol >= VAR_3 &&
     !(VAR_6->mnt->flags & VAR_1)) {
  if (FUNC_5(VAR_7) && FUNC_1(VAR_7)->access != VAR_2)
   VAR_8 = FUNC_8(VAR_6, VAR_7, VAR_5);
  else
   VAR_8 = FUNC_9(VAR_6, VAR_4, VAR_5);
 } else {



  VAR_8 = 0;
  if (FUNC_2(VAR_7->i_mode)) {





   VAR_8 = -VAR_0;
   if (!FUNC_5(VAR_7))
    FUNC_7(VAR_6, VAR_4, VAR_2);
   if (FUNC_5(VAR_7)) {
    VAR_7->i_mtime = VAR_5->f_mtime;
    VAR_8 = FUNC_6(VAR_6, VAR_7);
   }
  }
 }

 return VAR_8;
}
