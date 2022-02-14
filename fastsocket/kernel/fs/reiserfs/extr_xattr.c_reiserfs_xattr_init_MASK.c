
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int s_flags; int s_xattr; TYPE_2__* s_root; } ;
struct dentry {TYPE_3__* d_inode; } ;
struct TYPE_8__ {int s_mount_opt; struct dentry* xattr_root; struct dentry* priv_root; } ;
struct TYPE_7__ {int i_mutex; } ;
struct TYPE_6__ {TYPE_1__* d_inode; } ;
struct TYPE_5__ {int i_mutex; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 TYPE_4__* FUNC_2 (struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (int ,struct dentry*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct super_block*) ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct super_block*) ;

int FUNC_11(struct super_block *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 struct dentry *VAR_9 = FUNC_2(VAR_6)->priv_root;

 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8)
  goto error;

 if (!VAR_9->d_inode && !(VAR_7 & VAR_1)) {
  FUNC_6(&VAR_6->s_root->d_inode->i_mutex);
  VAR_8 = FUNC_4(FUNC_2(VAR_6)->priv_root);
  FUNC_7(&VAR_6->s_root->d_inode->i_mutex);
 }

 if (VAR_9->d_inode) {
  VAR_6->s_xattr = VAR_5;
  FUNC_6(&VAR_9->d_inode->i_mutex);
  if (!FUNC_2(VAR_6)->xattr_root) {
   struct dentry *VAR_10;
   VAR_10 = FUNC_5(VAR_4, VAR_9,
      FUNC_9(VAR_4));
   if (!FUNC_0(VAR_10))
    FUNC_2(VAR_6)->xattr_root = VAR_10;
   else
    VAR_8 = FUNC_1(VAR_10);
  }
  FUNC_7(&VAR_9->d_inode->i_mutex);
 }

error:
 if (VAR_8) {
  FUNC_3(VAR_3, &(FUNC_2(VAR_6)->s_mount_opt));
  FUNC_3(VAR_2, &(FUNC_2(VAR_6)->s_mount_opt));
 }


 if (FUNC_8(VAR_6))
  VAR_6->s_flags |= VAR_0;
 else
  VAR_6->s_flags &= ~VAR_0;

 return VAR_8;
}
