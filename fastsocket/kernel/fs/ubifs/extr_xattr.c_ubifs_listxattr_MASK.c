
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_inode {int xattr_names; int xattr_cnt; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int key; int nlen; int * name; } ;
struct qstr {scalar_t__ len; int * name; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int name; int len; } ;
struct dentry {TYPE_2__ d_name; struct inode* d_inode; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ubifs_dent_node*) ;
 int FUNC_1 (struct ubifs_dent_node*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct qstr*) ;
 int FUNC_4 (char*,int ,int ,int ,size_t) ;
 int FUNC_5 (struct ubifs_info*,int *,union ubifs_key*) ;
 int FUNC_6 (struct ubifs_dent_node*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_9 (char*,int *,scalar_t__) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int) ;
 struct ubifs_inode* FUNC_12 (struct inode*) ;
 struct ubifs_dent_node* FUNC_13 (struct ubifs_info*,union ubifs_key*,struct qstr*) ;
 scalar_t__ FUNC_14 (int) ;

ssize_t FUNC_15(struct dentry *VAR_4, char *VAR_5, size_t VAR_6)
{
 union ubifs_key VAR_7;
 struct inode *VAR_8 = VAR_4->d_inode;
 struct ubifs_info *VAR_9 = VAR_8->i_sb->s_fs_info;
 struct ubifs_inode *VAR_10 = FUNC_12(VAR_8);
 struct ubifs_dent_node *VAR_11, *VAR_12 = ((void*)0);
 int VAR_13, VAR_14, VAR_15 = 0;
 struct qstr VAR_16 = { .name = ((void*)0) };

 FUNC_4("ino %lu ('%.*s'), buffer size %zd", VAR_8->i_ino,
  VAR_4->d_name.len, VAR_4->d_name.name, VAR_6);

 VAR_14 = VAR_10->xattr_names + VAR_10->xattr_cnt;
 if (!VAR_5)




  return VAR_14;

 if (VAR_14 > VAR_6)
  return -VAR_2;

 FUNC_8(VAR_9, &VAR_7, VAR_8->i_ino);
 while (1) {
  int VAR_17;

  VAR_11 = FUNC_13(VAR_9, &VAR_7, &VAR_16);
  if (FUNC_0(VAR_11)) {
   VAR_13 = FUNC_1(VAR_11);
   break;
  }

  VAR_16.name = VAR_11->name;
  VAR_16.len = FUNC_7(VAR_11->nlen);

  VAR_17 = FUNC_3(&VAR_16);
  if (FUNC_14(VAR_17 < 0)) {
   VAR_13 = VAR_17;
   break;
  }


  if (VAR_17 != VAR_3 || FUNC_2(VAR_0)) {
   FUNC_9(VAR_5 + VAR_15, VAR_16.name, VAR_16.len + 1);
   VAR_15 += VAR_16.len + 1;
  }

  FUNC_6(VAR_12);
  VAR_12 = VAR_11;
  FUNC_5(VAR_9, &VAR_11->key, &VAR_7);
 }

 FUNC_6(VAR_12);
 if (VAR_13 != -VAR_1) {
  FUNC_11("cannot find next direntry, error %d", VAR_13);
  return VAR_13;
 }

 FUNC_10(VAR_15 <= VAR_6);
 return VAR_15;
}
