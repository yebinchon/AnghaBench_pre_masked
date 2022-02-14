
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int (* inode_init_security ) (struct inode*,struct inode*,char**,void**,size_t*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct inode*,struct inode*,char**,void**,size_t*) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct inode *VAR_2, struct inode *VAR_3,
      char **VAR_4, void **VAR_5, size_t *VAR_6)
{
 if (FUNC_2(FUNC_0(VAR_2)))
  return -VAR_0;
 return VAR_1->inode_init_security(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
