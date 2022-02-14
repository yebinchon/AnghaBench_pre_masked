
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {int dummy; } ;
struct smb_fattr {int f_size; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
typedef int __u16 ;
struct TYPE_2__ {int flags; int fileid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct smb_sb_info*,struct dentry*,struct smb_fattr*) ;
 int FUNC_3 (struct smb_sb_info*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct smb_sb_info *VAR_1, struct dentry *VAR_2,
      struct smb_fattr *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 int VAR_5;


 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto out;







 if (VAR_4 && FUNC_0(VAR_4)->flags & VAR_0 &&
     FUNC_1(VAR_4))
 {
  __u16 VAR_6 = FUNC_0(VAR_4)->fileid;
  VAR_3->f_size = FUNC_3(VAR_1, VAR_6, 2, 0);
 }

out:
 return VAR_5;
}
