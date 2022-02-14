
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
struct inode {int i_ino; int i_mutex; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int name; int len; } ;
struct dentry {TYPE_2__ d_name; struct inode* d_inode; } ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ubifs_info*,struct inode*,struct inode*,void const*,size_t) ;
 int FUNC_3 (struct qstr*) ;
 int FUNC_4 (struct ubifs_info*,struct inode*,struct qstr*,void const*,size_t) ;
 int FUNC_5 (char*,char const*,int ,int ,int ,size_t) ;
 struct inode* FUNC_6 (struct ubifs_info*,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct ubifs_info*,union ubifs_key*,struct ubifs_dent_node*,struct qstr*) ;
 int FUNC_15 (struct ubifs_info*,union ubifs_key*,int ,struct qstr*) ;

int FUNC_16(struct dentry *VAR_10, const char *VAR_11,
     const void *VAR_12, size_t VAR_13, int VAR_14)
{
 struct inode *VAR_15, *VAR_16 = VAR_10->d_inode;
 struct ubifs_info *VAR_17 = VAR_16->i_sb->s_fs_info;
 struct qstr VAR_18 = { .name = VAR_11, .len = FUNC_12(VAR_11) };
 struct ubifs_dent_node *VAR_19;
 union ubifs_key VAR_20;
 int VAR_21, VAR_22;

 FUNC_5("xattr '%s', host ino %lu ('%.*s'), size %zd", VAR_11,
  VAR_16->i_ino, VAR_10->d_name.len, VAR_10->d_name.name, VAR_13);
 FUNC_13(FUNC_11(&VAR_16->i_mutex));

 if (VAR_13 > VAR_6)
  return -VAR_4;

 VAR_22 = FUNC_3(&VAR_18);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_19 = FUNC_9(VAR_7, VAR_5);
 if (!VAR_19)
  return -VAR_3;





 FUNC_15(VAR_17, &VAR_20, VAR_16->i_ino, &VAR_18);
 VAR_21 = FUNC_14(VAR_17, &VAR_20, VAR_19, &VAR_18);
 if (VAR_21) {
  if (VAR_21 != -VAR_2)
   goto out_free;

  if (VAR_14 & VAR_9)

   VAR_21 = -VAR_1;
  else
   VAR_21 = FUNC_4(VAR_17, VAR_16, &VAR_18, VAR_12, VAR_13);
  goto out_free;
 }

 if (VAR_14 & VAR_8) {

  VAR_21 = -VAR_0;
  goto out_free;
 }

 VAR_15 = FUNC_6(VAR_17, FUNC_10(VAR_19->inum));
 if (FUNC_0(VAR_15)) {
  VAR_21 = FUNC_1(VAR_15);
  goto out_free;
 }

 VAR_21 = FUNC_2(VAR_17, VAR_16, VAR_15, VAR_12, VAR_13);
 FUNC_7(VAR_15);

out_free:
 FUNC_8(VAR_19);
 return VAR_21;
}
