
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_inode {int ui_size; } ;
struct ubifs_info {scalar_t__ nospace_rp; scalar_t__ nospace; } ;
struct ubifs_budget_req {int mod_dent; int dirtied_ino; } ;
struct inode {int i_size; int i_ctime; int i_mtime; int i_mutex; int i_ino; int i_nlink; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int name; int len; } ;
struct dentry {TYPE_2__ d_name; struct inode* d_inode; } ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_10 (struct inode*) ;
 struct ubifs_inode* FUNC_11 (struct inode*) ;
 int FUNC_12 (struct ubifs_info*,struct inode*,TYPE_2__*,struct inode*,int,int ) ;
 int FUNC_13 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_14 (struct inode*,struct inode*) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct ubifs_info *VAR_3 = VAR_1->i_sb->s_fs_info;
 struct inode *VAR_4 = VAR_2->d_inode;
 struct ubifs_inode *VAR_5 = FUNC_11(VAR_1);
 int VAR_6 = FUNC_0(VAR_2->d_name.len);
 int VAR_7, VAR_8 = 1;
 struct ubifs_budget_req VAR_9 = { .mod_dent = 1, .dirtied_ino = 2 };
 FUNC_2("dent '%.*s' from ino %lu (nlink %d) in dir ino %lu",
  VAR_2->d_name.len, VAR_2->d_name.name, VAR_4->i_ino,
  VAR_4->i_nlink, VAR_1->i_ino);
 FUNC_8(FUNC_6(&VAR_1->i_mutex));
 FUNC_8(FUNC_6(&VAR_4->i_mutex));
 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_9(VAR_3, &VAR_9);
 if (VAR_7) {
  if (VAR_7 != -VAR_0)
   return VAR_7;
  VAR_8 = 0;
 }

 FUNC_5(VAR_1, VAR_4);
 VAR_4->i_ctime = FUNC_10(VAR_1);
 FUNC_3(VAR_4);
 VAR_1->i_size -= VAR_6;
 VAR_5->ui_size = VAR_1->i_size;
 VAR_1->i_mtime = VAR_1->i_ctime = VAR_4->i_ctime;
 VAR_7 = FUNC_12(VAR_3, VAR_1, &VAR_2->d_name, VAR_4, 1, 0);
 if (VAR_7)
  goto out_cancel;
 FUNC_14(VAR_1, VAR_4);

 if (VAR_8)
  FUNC_13(VAR_3, &VAR_9);
 else {

  VAR_3->nospace = VAR_3->nospace_rp = 0;
  FUNC_7();
 }
 return 0;

out_cancel:
 VAR_1->i_size += VAR_6;
 VAR_5->ui_size = VAR_1->i_size;
 FUNC_4(VAR_4);
 FUNC_14(VAR_1, VAR_4);
 if (VAR_8)
  FUNC_13(VAR_3, &VAR_9);
 return VAR_7;
}
