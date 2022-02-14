
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_2__* s_root; } ;
struct dentry {int d_inode; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (char*,TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int,int,int) ;

int FUNC_9(struct super_block *VAR_3, char *VAR_4,
  int VAR_5, int VAR_6)
{
 struct dentry *VAR_7;
 int VAR_8;

 FUNC_4(&VAR_3->s_root->d_inode->i_mutex);
 VAR_7 = FUNC_3(VAR_4, VAR_3->s_root, FUNC_7(VAR_4));
 FUNC_5(&VAR_3->s_root->d_inode->i_mutex);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (!VAR_7->d_inode) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_8 = FUNC_6(VAR_7);
 if (!VAR_8)
  VAR_8 = FUNC_8(VAR_7->d_inode, VAR_6, VAR_5,
    VAR_1 | VAR_0);

out:
 FUNC_2(VAR_7);
 return VAR_8;
}
