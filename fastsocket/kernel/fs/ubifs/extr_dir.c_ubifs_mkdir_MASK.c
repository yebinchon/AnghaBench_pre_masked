
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_inode {int ui_size; int ui_mutex; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_ino; int new_dent; } ;
struct inode {int i_size; int i_ctime; int i_mtime; int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int name; int len; } ;
struct dentry {TYPE_2__ d_name; } ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (char*,int ,int ,int,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_13 (char*,int) ;
 struct ubifs_inode* FUNC_14 (struct inode*) ;
 int FUNC_15 (struct ubifs_info*,struct inode*,TYPE_2__*,struct inode*,int ,int ) ;
 struct inode* FUNC_16 (struct ubifs_info*,struct inode*,int) ;
 int FUNC_17 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 struct inode *VAR_4;
 struct ubifs_inode *VAR_5 = FUNC_14(VAR_1);
 struct ubifs_info *VAR_6 = VAR_1->i_sb->s_fs_info;
 int VAR_7, VAR_8 = FUNC_0(VAR_2->d_name.len);
 struct ubifs_budget_req VAR_9 = { .new_ino = 1, .new_dent = 1 };






 FUNC_4("dent '%.*s', mode %#x in dir ino %lu",
  VAR_2->d_name.len, VAR_2->d_name.name, VAR_3, VAR_1->i_ino);

 VAR_7 = FUNC_12(VAR_6, &VAR_9);
 if (VAR_7)
  return VAR_7;

 VAR_4 = FUNC_16(VAR_6, VAR_1, VAR_0 | VAR_3);
 if (FUNC_1(VAR_4)) {
  VAR_7 = FUNC_2(VAR_4);
  goto out_budg;
 }

 FUNC_10(&VAR_5->ui_mutex);
 FUNC_7(VAR_4);
 FUNC_6(VAR_4);
 FUNC_6(VAR_1);
 VAR_1->i_size += VAR_8;
 VAR_5->ui_size = VAR_1->i_size;
 VAR_1->i_mtime = VAR_1->i_ctime = VAR_4->i_ctime;
 VAR_7 = FUNC_15(VAR_6, VAR_1, &VAR_2->d_name, VAR_4, 0, 0);
 if (VAR_7) {
  FUNC_13("cannot create directory, error %d", VAR_7);
  goto out_cancel;
 }
 FUNC_11(&VAR_5->ui_mutex);

 FUNC_17(VAR_6, &VAR_9);
 FUNC_3(VAR_2, VAR_4);
 return 0;

out_cancel:
 VAR_1->i_size -= VAR_8;
 VAR_5->ui_size = VAR_1->i_size;
 FUNC_5(VAR_1);
 FUNC_11(&VAR_5->ui_mutex);
 FUNC_9(VAR_4);
 FUNC_8(VAR_4);
out_budg:
 FUNC_17(VAR_6, &VAR_9);
 return VAR_7;
}
