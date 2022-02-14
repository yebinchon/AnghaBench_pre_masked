
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_inode {int data_len; int ui_size; int ui_mutex; scalar_t__ data; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_ino; int new_dent; int dirtied_ino; int new_ino_d; } ;
struct inode {int i_size; int i_ctime; int i_mtime; int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int name; int len; } ;
struct dentry {TYPE_2__ d_name; } ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (char*,int ,int ,char const*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (int,int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (scalar_t__,char const*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (struct ubifs_info*,struct ubifs_budget_req*) ;
 struct ubifs_inode* FUNC_15 (struct inode*) ;
 int FUNC_16 (struct ubifs_info*,struct inode*,TYPE_2__*,struct inode*,int ,int ) ;
 struct inode* FUNC_17 (struct ubifs_info*,struct inode*,int) ;
 int FUNC_18 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_6, struct dentry *VAR_7,
    const char *VAR_8)
{
 struct inode *VAR_9;
 struct ubifs_inode *VAR_10;
 struct ubifs_inode *VAR_11 = FUNC_15(VAR_6);
 struct ubifs_info *VAR_12 = VAR_6->i_sb->s_fs_info;
 int VAR_13, VAR_14 = FUNC_13(VAR_8);
 int VAR_15 = FUNC_1(VAR_7->d_name.len);
 struct ubifs_budget_req VAR_16 = { .new_ino = 1, .new_dent = 1,
     .new_ino_d = FUNC_0(VAR_14, 8),
     .dirtied_ino = 1 };






 FUNC_5("dent '%.*s', target '%s' in dir ino %lu", VAR_7->d_name.len,
  VAR_7->d_name.name, VAR_8, VAR_6->i_ino);

 if (VAR_14 > VAR_5)
  return -VAR_0;

 VAR_13 = FUNC_14(VAR_12, &VAR_16);
 if (VAR_13)
  return VAR_13;

 VAR_9 = FUNC_17(VAR_12, VAR_6, VAR_3 | VAR_4);
 if (FUNC_2(VAR_9)) {
  VAR_13 = FUNC_3(VAR_9);
  goto out_budg;
 }

 VAR_10 = FUNC_15(VAR_9);
 VAR_10->data = FUNC_8(VAR_14 + 1, VAR_2);
 if (!VAR_10->data) {
  VAR_13 = -VAR_1;
  goto out_inode;
 }

 FUNC_10(VAR_10->data, VAR_8, VAR_14);
 ((char *)VAR_10->data)[VAR_14] = '\0';





 VAR_10->data_len = VAR_14;
 VAR_9->i_size = FUNC_15(VAR_9)->ui_size = VAR_14;

 FUNC_11(&VAR_11->ui_mutex);
 VAR_6->i_size += VAR_15;
 VAR_11->ui_size = VAR_6->i_size;
 VAR_6->i_mtime = VAR_6->i_ctime = VAR_9->i_ctime;
 VAR_13 = FUNC_16(VAR_12, VAR_6, &VAR_7->d_name, VAR_9, 0, 0);
 if (VAR_13)
  goto out_cancel;
 FUNC_12(&VAR_11->ui_mutex);

 FUNC_18(VAR_12, &VAR_16);
 FUNC_6(VAR_9);
 FUNC_4(VAR_7, VAR_9);
 return 0;

out_cancel:
 VAR_6->i_size -= VAR_15;
 VAR_11->ui_size = VAR_6->i_size;
 FUNC_12(&VAR_11->ui_mutex);
out_inode:
 FUNC_9(VAR_9);
 FUNC_7(VAR_9);
out_budg:
 FUNC_18(VAR_12, &VAR_16);
 return VAR_13;
}
