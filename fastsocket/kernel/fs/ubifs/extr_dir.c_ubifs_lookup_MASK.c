
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int inum; } ;
struct nameidata {int dummy; } ;
struct inode {TYPE_2__* i_sb; int i_ino; } ;
struct TYPE_5__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_6__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 scalar_t__ FUNC_4 (struct ubifs_dent_node*,TYPE_1__*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct ubifs_info*,union ubifs_key*,int ,TYPE_1__*) ;
 int FUNC_7 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,scalar_t__,int ,int) ;
 struct inode* FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (struct ubifs_info*,int) ;
 int FUNC_13 (struct ubifs_info*,union ubifs_key*,struct ubifs_dent_node*,TYPE_1__*) ;

__attribute__((used)) static struct dentry *FUNC_14(struct inode *VAR_7, struct dentry *VAR_8,
       struct nameidata *VAR_9)
{
 int VAR_10;
 union ubifs_key VAR_11;
 struct inode *VAR_12 = ((void*)0);
 struct ubifs_dent_node *VAR_13;
 struct ubifs_info *VAR_14 = VAR_7->i_sb->s_fs_info;

 FUNC_5("'%.*s' in dir ino %lu",
  VAR_8->d_name.len, VAR_8->d_name.name, VAR_7->i_ino);

 if (VAR_8->d_name.len > VAR_6)
  return FUNC_0(-VAR_1);

 VAR_13 = FUNC_8(VAR_5, VAR_4);
 if (!VAR_13)
  return FUNC_0(-VAR_3);

 FUNC_6(VAR_14, &VAR_11, VAR_7->i_ino, &VAR_8->d_name);

 VAR_10 = FUNC_13(VAR_14, &VAR_11, VAR_13, &VAR_8->d_name);
 if (VAR_10) {
  if (VAR_10 == -VAR_2) {
   FUNC_5("not found");
   goto done;
  }
  goto out;
 }

 if (FUNC_4(VAR_13, &VAR_8->d_name)) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_11(VAR_7->i_sb, FUNC_9(VAR_13->inum));
 if (FUNC_1(VAR_12)) {




  VAR_10 = FUNC_2(VAR_12);
  FUNC_10("dead directory entry '%.*s', error %d",
     VAR_8->d_name.len, VAR_8->d_name.name, VAR_10);
  FUNC_12(VAR_14, VAR_10);
  goto out;
 }

done:
 FUNC_7(VAR_13);




 FUNC_3(VAR_8, VAR_12);
 return ((void*)0);

out:
 FUNC_7(VAR_13);
 return FUNC_0(VAR_10);
}
