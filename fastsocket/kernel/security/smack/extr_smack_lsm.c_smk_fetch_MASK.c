
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* getxattr ) (struct dentry*,int ,char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int) ;
 int FUNC_1 (struct dentry*,int ,char*,int) ;

__attribute__((used)) static char *FUNC_2(struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;
 char VAR_5[VAR_0];

 if (VAR_2->i_op->getxattr == ((void*)0))
  return ((void*)0);

 VAR_4 = VAR_2->i_op->getxattr(VAR_3, VAR_1, VAR_5, VAR_0);
 if (VAR_4 < 0)
  return ((void*)0);

 return FUNC_0(VAR_5, VAR_4);
}
