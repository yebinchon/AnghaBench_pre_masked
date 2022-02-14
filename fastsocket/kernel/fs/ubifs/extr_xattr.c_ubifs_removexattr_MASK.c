
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int inum; } ;
struct qstr {char const* name; int len; } ;
struct inode {int i_nlink; int i_ino; int i_mutex; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int name; int len; } ;
struct dentry {TYPE_2__ d_name; struct inode* d_inode; } ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int FUNC_2 (struct qstr*) ;
 int FUNC_3 (char*,char const*,int ,int ,int ) ;
 struct inode* FUNC_4 (struct ubifs_info*,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ubifs_info*,struct inode*,struct inode*,struct qstr*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct ubifs_info*,union ubifs_key*,struct ubifs_dent_node*,struct qstr*) ;
 int FUNC_14 (struct ubifs_info*,union ubifs_key*,int ,struct qstr*) ;

int FUNC_15(struct dentry *VAR_5, const char *VAR_6)
{
 struct inode *VAR_7, *VAR_8 = VAR_5->d_inode;
 struct ubifs_info *VAR_9 = VAR_8->i_sb->s_fs_info;
 struct qstr VAR_10 = { .name = VAR_6, .len = FUNC_11(VAR_6) };
 struct ubifs_dent_node *VAR_11;
 union ubifs_key VAR_12;
 int VAR_13;

 FUNC_3("xattr '%s', ino %lu ('%.*s')", VAR_6,
  VAR_8->i_ino, VAR_5->d_name.len, VAR_5->d_name.name);
 FUNC_12(FUNC_9(&VAR_8->i_mutex));

 VAR_13 = FUNC_2(&VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_11 = FUNC_7(VAR_4, VAR_3);
 if (!VAR_11)
  return -VAR_2;

 FUNC_14(VAR_9, &VAR_12, VAR_8->i_ino, &VAR_10);
 VAR_13 = FUNC_13(VAR_9, &VAR_12, VAR_11, &VAR_10);
 if (VAR_13) {
  if (VAR_13 == -VAR_1)
   VAR_13 = -VAR_0;
  goto out_free;
 }

 VAR_7 = FUNC_4(VAR_9, FUNC_8(VAR_11->inum));
 if (FUNC_0(VAR_7)) {
  VAR_13 = FUNC_1(VAR_7);
  goto out_free;
 }

 FUNC_12(VAR_7->i_nlink == 1);
 VAR_7->i_nlink = 0;
 VAR_13 = FUNC_10(VAR_9, VAR_8, VAR_7, &VAR_10);
 if (VAR_13)
  VAR_7->i_nlink = 1;


 FUNC_5(VAR_7);

out_free:
 FUNC_6(VAR_11);
 return VAR_13;
}
