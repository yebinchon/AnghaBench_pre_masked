
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* d_instantiate ) (struct dentry*,struct inode*) ;} ;


 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct dentry *VAR_1, struct inode *VAR_2)
{
 if (FUNC_2(VAR_2 && FUNC_0(VAR_2)))
  return;
 VAR_0->d_instantiate(VAR_1, VAR_2);
}
