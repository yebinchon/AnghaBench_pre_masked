
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int xattr_root; struct dentry* priv_root; } ;
struct TYPE_3__ {int i_mutex; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 struct dentry* FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,struct dentry*,int) ;

__attribute__((used)) static struct dentry *FUNC_8(struct super_block *VAR_2, int VAR_3)
{
 struct dentry *VAR_4 = FUNC_1(VAR_2)->priv_root;
 struct dentry *VAR_5;
 if (!VAR_4->d_inode)
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_4->d_inode->i_mutex, VAR_1);

 VAR_5 = FUNC_2(FUNC_1(VAR_2)->xattr_root);
 if (!VAR_5)
  VAR_5 = FUNC_0(-VAR_0);
 else if (!VAR_5->d_inode) {
  int VAR_6 = -VAR_0;
  if (FUNC_6(VAR_3))
   VAR_6 = FUNC_7(VAR_4->d_inode, VAR_5, 0700);
  if (VAR_6) {
   FUNC_3(VAR_5);
   VAR_5 = FUNC_0(VAR_6);
  }
 }

 FUNC_5(&VAR_4->d_inode->i_mutex);
 return VAR_5;
}
