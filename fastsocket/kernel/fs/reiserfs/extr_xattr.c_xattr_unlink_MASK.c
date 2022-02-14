
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; int i_mutex; } ;
struct dentry {TYPE_2__* d_inode; } ;
struct TYPE_4__ {int i_mutex; } ;
struct TYPE_3__ {int (* unlink ) (struct inode*,struct dentry*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct dentry*) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct dentry *VAR_2)
{
 int VAR_3;
 FUNC_0(!FUNC_2(&VAR_1->i_mutex));
 FUNC_6(VAR_1);

 FUNC_3(&VAR_2->d_inode->i_mutex, VAR_0);
 VAR_3 = VAR_1->i_op->unlink(VAR_1, VAR_2);
 FUNC_4(&VAR_2->d_inode->i_mutex);

 if (!VAR_3)
  FUNC_1(VAR_2);
 return VAR_3;
}
