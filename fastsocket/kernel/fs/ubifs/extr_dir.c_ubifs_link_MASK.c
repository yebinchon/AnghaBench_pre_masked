
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_inode {int ui_size; int data_len; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_dent; int dirtied_ino; int dirtied_ino_d; } ;
struct inode {scalar_t__ i_nlink; int i_size; int i_ctime; int i_mtime; int i_count; int i_mutex; int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int name; int len; } ;
struct dentry {TYPE_2__ d_name; struct inode* d_inode; } ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (char*,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct inode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_13 (struct inode*) ;
 struct ubifs_inode* FUNC_14 (struct inode*) ;
 int FUNC_15 (struct ubifs_info*,struct inode*,TYPE_2__*,struct inode*,int ,int ) ;
 int FUNC_16 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_17 (struct inode*,struct inode*) ;

__attribute__((used)) static int FUNC_18(struct dentry *VAR_1, struct inode *VAR_2,
        struct dentry *VAR_3)
{
 struct ubifs_info *VAR_4 = VAR_2->i_sb->s_fs_info;
 struct inode *VAR_5 = VAR_1->d_inode;
 struct ubifs_inode *VAR_6 = FUNC_14(VAR_5);
 struct ubifs_inode *VAR_7 = FUNC_14(VAR_2);
 int VAR_8, VAR_9 = FUNC_1(VAR_3->d_name.len);
 struct ubifs_budget_req VAR_10 = { .new_dent = 1, .dirtied_ino = 2,
    .dirtied_ino_d = FUNC_0(VAR_6->data_len, 8) };






 FUNC_5("dent '%.*s' to ino %lu (nlink %d) in dir ino %lu",
  VAR_3->d_name.len, VAR_3->d_name.name, VAR_5->i_ino,
  VAR_5->i_nlink, VAR_2->i_ino);
 FUNC_11(FUNC_10(&VAR_2->i_mutex));
 FUNC_11(FUNC_10(&VAR_5->i_mutex));
  if (VAR_5->i_nlink == 0)
   return -VAR_0;

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_12(VAR_4, &VAR_10);
 if (VAR_8)
  return VAR_8;

 FUNC_9(VAR_2, VAR_5);
 FUNC_7(VAR_5);
 FUNC_2(&VAR_5->i_count);
 VAR_5->i_ctime = FUNC_13(VAR_5);
 VAR_2->i_size += VAR_9;
 VAR_7->ui_size = VAR_2->i_size;
 VAR_2->i_mtime = VAR_2->i_ctime = VAR_5->i_ctime;
 VAR_8 = FUNC_15(VAR_4, VAR_2, &VAR_3->d_name, VAR_5, 0, 0);
 if (VAR_8)
  goto out_cancel;
 FUNC_17(VAR_2, VAR_5);

 FUNC_16(VAR_4, &VAR_10);
 FUNC_3(VAR_3, VAR_5);
 return 0;

out_cancel:
 VAR_2->i_size -= VAR_9;
 VAR_7->ui_size = VAR_2->i_size;
 FUNC_6(VAR_5);
 FUNC_17(VAR_2, VAR_5);
 FUNC_16(VAR_4, &VAR_10);
 FUNC_8(VAR_5);
 return VAR_8;
}
