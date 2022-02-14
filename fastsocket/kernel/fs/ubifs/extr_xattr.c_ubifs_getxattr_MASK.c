
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_inode {size_t data_len; size_t xattr_size; int data; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int inum; } ;
struct qstr {char const* name; int len; } ;
struct inode {size_t i_size; int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int name; int len; } ;
struct dentry {TYPE_2__ d_name; struct inode* d_inode; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_5 ;
 int FUNC_2 (struct qstr*) ;
 int FUNC_3 (char*,size_t,size_t) ;
 int FUNC_4 (char*,char const*,int ,int ,int ,size_t) ;
 struct inode* FUNC_5 (struct ubifs_info*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*,int ,size_t) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int) ;
 struct ubifs_inode* FUNC_13 (struct inode*) ;
 int FUNC_14 (struct ubifs_info*,union ubifs_key*,struct ubifs_dent_node*,struct qstr*) ;
 int FUNC_15 (struct ubifs_info*,union ubifs_key*,int ,struct qstr*) ;

ssize_t FUNC_16(struct dentry *VAR_6, const char *VAR_7, void *VAR_8,
         size_t VAR_9)
{
 struct inode *VAR_10, *VAR_11 = VAR_6->d_inode;
 struct ubifs_info *VAR_12 = VAR_11->i_sb->s_fs_info;
 struct qstr VAR_13 = { .name = VAR_7, .len = FUNC_11(VAR_7) };
 struct ubifs_inode *VAR_14;
 struct ubifs_dent_node *VAR_15;
 union ubifs_key VAR_16;
 int VAR_17;

 FUNC_4("xattr '%s', ino %lu ('%.*s'), buf size %zd", VAR_7,
  VAR_11->i_ino, VAR_6->d_name.len, VAR_6->d_name.name, VAR_9);

 VAR_17 = FUNC_2(&VAR_13);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_15 = FUNC_8(VAR_5, VAR_4);
 if (!VAR_15)
  return -VAR_2;

 FUNC_15(VAR_12, &VAR_16, VAR_11->i_ino, &VAR_13);
 VAR_17 = FUNC_14(VAR_12, &VAR_16, VAR_15, &VAR_13);
 if (VAR_17) {
  if (VAR_17 == -VAR_1)
   VAR_17 = -VAR_0;
  goto out_unlock;
 }

 VAR_10 = FUNC_5(VAR_12, FUNC_9(VAR_15->inum));
 if (FUNC_0(VAR_10)) {
  VAR_17 = FUNC_1(VAR_10);
  goto out_unlock;
 }

 VAR_14 = FUNC_13(VAR_10);
 FUNC_12(VAR_10->i_size == VAR_14->data_len);
 FUNC_12(FUNC_13(VAR_11)->xattr_size > VAR_14->data_len);

 if (VAR_8) {

  if (VAR_14->data_len > VAR_9) {
   FUNC_3("buffer size %zd, xattr len %d",
    VAR_9, VAR_14->data_len);
   VAR_17 = -VAR_3;
   goto out_iput;
  }

  FUNC_10(VAR_8, VAR_14->data, VAR_14->data_len);
 }
 VAR_17 = VAR_14->data_len;

out_iput:
 FUNC_6(VAR_10);
out_unlock:
 FUNC_7(VAR_15);
 return VAR_17;
}
