
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct ima_iint_cache {int refcount; int mutex; } ;
struct file {TYPE_1__* f_dentry; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ima_iint_cache*,struct inode*,struct file*) ;
 int VAR_1 ;
 struct ima_iint_cache* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct file *VAR_3)
{
 struct inode *VAR_4 = VAR_3->f_dentry->d_inode;
 struct ima_iint_cache *VAR_5;

 if (!VAR_1 || !VAR_2 || !FUNC_0(VAR_4->i_mode))
  return;
 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return;

 FUNC_4(&VAR_5->mutex);
 FUNC_1(VAR_5, VAR_4, VAR_3);
 FUNC_5(&VAR_5->mutex);
 FUNC_3(&VAR_5->refcount, VAR_0);
}
