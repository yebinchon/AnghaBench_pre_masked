
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; int i_mutex; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* mkdir ) (struct inode*,struct dentry*,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,struct dentry*,int) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct dentry *VAR_1, int VAR_2)
{
 FUNC_0(!FUNC_1(&VAR_0->i_mutex));
 FUNC_3(VAR_0);
 return VAR_0->i_op->mkdir(VAR_0, VAR_1, VAR_2);
}
