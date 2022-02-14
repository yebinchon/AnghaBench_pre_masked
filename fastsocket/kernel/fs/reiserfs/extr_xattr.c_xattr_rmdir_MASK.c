
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; int i_mutex; } ;
struct dentry {TYPE_2__* d_inode; } ;
struct TYPE_4__ {int i_mutex; int i_flags; } ;
struct TYPE_3__ {int (* rmdir ) (struct inode*,struct dentry*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct dentry*) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;
 FUNC_0(!FUNC_4(&VAR_2->i_mutex));
 FUNC_8(VAR_2);

 FUNC_5(&VAR_3->d_inode->i_mutex, VAR_0);
 FUNC_2(VAR_3);
 VAR_4 = VAR_2->i_op->rmdir(VAR_2, VAR_3);
 if (!VAR_4)
  VAR_3->d_inode->i_flags |= VAR_1;
 FUNC_6(&VAR_3->d_inode->i_mutex);
 if (!VAR_4)
  FUNC_1(VAR_3);
 FUNC_3(VAR_3);

 return VAR_4;
}
