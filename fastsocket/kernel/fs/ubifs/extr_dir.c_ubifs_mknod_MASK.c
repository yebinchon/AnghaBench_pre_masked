
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_dev_desc {int dummy; } ubifs_dev_desc ;
struct ubifs_inode {int ui_size; int data_len; int ui_mutex; union ubifs_dev_desc* data; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_ino; int new_dent; int dirtied_ino; int new_ino_d; } ;
struct inode {int i_size; int i_ctime; int i_mtime; int i_mode; int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int name; int len; } ;
struct dentry {TYPE_2__ d_name; } ;
typedef int dev_t ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (struct inode*,int ,int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (union ubifs_dev_desc*) ;
 union ubifs_dev_desc* FUNC_12 (int,int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_18 (union ubifs_dev_desc*,int ) ;
 struct ubifs_inode* FUNC_19 (struct inode*) ;
 int FUNC_20 (struct ubifs_info*,struct inode*,TYPE_2__*,struct inode*,int ,int ) ;
 struct inode* FUNC_21 (struct ubifs_info*,struct inode*,int) ;
 int FUNC_22 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_23(struct inode *VAR_3, struct dentry *VAR_4,
         int VAR_5, dev_t VAR_6)
{
 struct inode *VAR_7;
 struct ubifs_inode *VAR_8;
 struct ubifs_inode *VAR_9 = FUNC_19(VAR_3);
 struct ubifs_info *VAR_10 = VAR_3->i_sb->s_fs_info;
 union ubifs_dev_desc *VAR_11 = ((void*)0);
 int VAR_12 = FUNC_1(VAR_4->d_name.len);
 int VAR_13, VAR_14 = 0;
 struct ubifs_budget_req VAR_15 = { .new_ino = 1, .new_dent = 1,
     .new_ino_d = FUNC_0(VAR_14, 8),
     .dirtied_ino = 1 };






 FUNC_7("dent '%.*s' in dir ino %lu",
  VAR_4->d_name.len, VAR_4->d_name.name, VAR_3->i_ino);

 if (!FUNC_16(VAR_6))
  return -VAR_0;

 if (FUNC_4(VAR_5) || FUNC_5(VAR_5)) {
  VAR_11 = FUNC_12(sizeof(union ubifs_dev_desc), VAR_2);
  if (!VAR_11)
   return -VAR_1;
  VAR_14 = FUNC_18(VAR_11, VAR_6);
 }

 VAR_13 = FUNC_17(VAR_10, &VAR_15);
 if (VAR_13) {
  FUNC_11(VAR_11);
  return VAR_13;
 }

 VAR_7 = FUNC_21(VAR_10, VAR_3, VAR_5);
 if (FUNC_2(VAR_7)) {
  FUNC_11(VAR_11);
  VAR_13 = FUNC_3(VAR_7);
  goto out_budg;
 }

 FUNC_8(VAR_7, VAR_7->i_mode, VAR_6);
 VAR_7->i_size = FUNC_19(VAR_7)->ui_size = VAR_14;
 VAR_8 = FUNC_19(VAR_7);
 VAR_8->data = VAR_11;
 VAR_8->data_len = VAR_14;

 FUNC_14(&VAR_9->ui_mutex);
 VAR_3->i_size += VAR_12;
 VAR_9->ui_size = VAR_3->i_size;
 VAR_3->i_mtime = VAR_3->i_ctime = VAR_7->i_ctime;
 VAR_13 = FUNC_20(VAR_10, VAR_3, &VAR_4->d_name, VAR_7, 0, 0);
 if (VAR_13)
  goto out_cancel;
 FUNC_15(&VAR_9->ui_mutex);

 FUNC_22(VAR_10, &VAR_15);
 FUNC_9(VAR_7);
 FUNC_6(VAR_4, VAR_7);
 return 0;

out_cancel:
 VAR_3->i_size -= VAR_12;
 VAR_9->ui_size = VAR_3->i_size;
 FUNC_15(&VAR_9->ui_mutex);
 FUNC_13(VAR_7);
 FUNC_10(VAR_7);
out_budg:
 FUNC_22(VAR_10, &VAR_15);
 return VAR_13;
}
