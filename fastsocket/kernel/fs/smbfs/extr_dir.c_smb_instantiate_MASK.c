
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int generation; } ;
struct smb_inode_info {int open; int access; int fileid; } ;
struct smb_fattr {int f_ino; } ;
struct inode {int dummy; } ;
struct dentry {int d_sb; } ;
typedef int __u16 ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int,int ) ;
 struct smb_inode_info* FUNC_2 (struct inode*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (int ,int) ;
 struct smb_sb_info* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*,int ) ;
 struct inode* FUNC_8 (int ,struct smb_fattr*) ;
 int FUNC_9 (struct dentry*,struct smb_fattr*) ;
 int FUNC_10 (struct dentry*) ;

__attribute__((used)) static int
FUNC_11(struct dentry *VAR_2, __u16 VAR_3, int VAR_4)
{
 struct smb_sb_info *VAR_5 = FUNC_6(VAR_2);
 struct inode *VAR_6;
 int VAR_7;
 struct smb_fattr VAR_8;

 FUNC_3("file %s/%s, fileid=%u\n", FUNC_0(VAR_2), VAR_3);

 VAR_7 = FUNC_9(VAR_2, &VAR_8);
 if (VAR_7)
  goto out_close;

 FUNC_10(VAR_2);
 VAR_8.f_ino = FUNC_5(VAR_2->d_sb, 2);
 VAR_6 = FUNC_8(VAR_2->d_sb, &VAR_8);
 if (!VAR_6)
  goto out_no_inode;

 if (VAR_4) {
  struct smb_inode_info *VAR_9 = FUNC_2(VAR_6);
  VAR_9->fileid = VAR_3;
  VAR_9->access = VAR_1;
  VAR_9->open = VAR_5->generation;
 }
 FUNC_4(VAR_2, VAR_6);
out:
 return VAR_7;

out_no_inode:
 VAR_7 = -VAR_0;
out_close:
 if (VAR_4) {
  FUNC_1("%s/%s failed, error=%d, closing %u\n",
    FUNC_0(VAR_2), VAR_7, VAR_3);
  FUNC_7(VAR_2, VAR_3);
 }
 goto out;
}
