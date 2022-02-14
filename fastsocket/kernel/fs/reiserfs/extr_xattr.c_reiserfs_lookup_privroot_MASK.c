
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {TYPE_3__* s_root; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_8__ {struct dentry* priv_root; } ;
struct TYPE_7__ {TYPE_2__* d_inode; int * d_op; } ;
struct TYPE_6__ {int i_mutex; } ;
struct TYPE_5__ {int i_flags; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 TYPE_4__* FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 struct dentry* FUNC_3 (int ,TYPE_3__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;

int FUNC_8(struct super_block *VAR_3)
{
 struct dentry *VAR_4;
 int VAR_5 = 0;


 FUNC_4(&VAR_3->s_root->d_inode->i_mutex);
 VAR_4 = FUNC_3(VAR_0, VAR_3->s_root,
    FUNC_7(VAR_0));
 if (!FUNC_0(VAR_4)) {
  FUNC_2(VAR_3)->priv_root = VAR_4;
  if (!FUNC_6(VAR_3))
   VAR_3->s_root->d_op = &VAR_2;
  if (VAR_4->d_inode)
   VAR_4->d_inode->i_flags |= VAR_1;
 } else
  VAR_5 = FUNC_1(VAR_4);
 FUNC_5(&VAR_3->s_root->d_inode->i_mutex);

 return VAR_5;
}
