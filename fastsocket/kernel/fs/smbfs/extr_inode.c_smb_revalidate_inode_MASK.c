
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {int dummy; } ;
struct inode {int i_ino; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {scalar_t__ oldmtime; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct smb_sb_info*) ;
 int FUNC_3 (char*,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 () ;
 struct smb_sb_info* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 () ;

int
FUNC_9(struct dentry *VAR_1)
{
 struct smb_sb_info *VAR_2 = FUNC_5(VAR_1);
 struct inode *VAR_3 = VAR_1->d_inode;
 int VAR_4 = 0;

 FUNC_0("smb_revalidate_inode\n");
 FUNC_4();




 if (FUNC_7(VAR_0, FUNC_1(VAR_3)->oldmtime + FUNC_2(VAR_2))) {
  FUNC_3("up-to-date, ino=%ld, jiffies=%lu, oldtime=%lu\n",
   VAR_3->i_ino, VAR_0, FUNC_1(VAR_3)->oldmtime);
  goto out;
 }

 VAR_4 = FUNC_6(VAR_1);
out:
 FUNC_8();
 return VAR_4;
}
