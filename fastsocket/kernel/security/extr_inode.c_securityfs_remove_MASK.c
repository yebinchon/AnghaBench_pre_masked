
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; struct dentry* d_parent; } ;
struct TYPE_3__ {int i_mutex; int i_mode; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*,struct dentry*) ;
 int FUNC_8 (TYPE_1__*,struct dentry*) ;

void FUNC_9(struct dentry *VAR_2)
{
 struct dentry *VAR_3;

 if (!VAR_2 || FUNC_0(VAR_2))
  return;

 VAR_3 = VAR_2->d_parent;
 if (!VAR_3 || !VAR_3->d_inode)
  return;

 FUNC_3(&VAR_3->d_inode->i_mutex);
 if (FUNC_5(VAR_2)) {
  if (VAR_2->d_inode) {
   if (FUNC_1(VAR_2->d_inode->i_mode))
    FUNC_7(VAR_3->d_inode, VAR_2);
   else
    FUNC_8(VAR_3->d_inode, VAR_2);
   FUNC_2(VAR_2);
  }
 }
 FUNC_4(&VAR_3->d_inode->i_mutex);
 FUNC_6(&VAR_0, &VAR_1);
}
