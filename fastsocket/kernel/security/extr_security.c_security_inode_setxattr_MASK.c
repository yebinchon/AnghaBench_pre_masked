
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_inode; } ;
struct TYPE_2__ {int (* inode_setxattr ) (struct dentry*,char const*,void const*,size_t,int) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct dentry*,char const*,void const*,size_t,int) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct dentry *VAR_1, const char *VAR_2,
       const void *VAR_3, size_t VAR_4, int VAR_5)
{
 if (FUNC_2(FUNC_0(VAR_1->d_inode)))
  return 0;
 return VAR_0->inode_setxattr(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
