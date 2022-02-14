
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {TYPE_2__* d_inode; TYPE_1__* d_parent; } ;
struct TYPE_4__ {int i_mode; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_0, void *VAR_1)
{
 struct inode *VAR_2 = VAR_0->d_parent->d_inode;


 if (FUNC_0(VAR_0->d_inode->i_mode))
  return FUNC_1(VAR_2, VAR_0);

 return FUNC_2(VAR_2, VAR_0);
}
