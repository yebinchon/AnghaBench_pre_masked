
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int * i_security; } ;
struct TYPE_2__ {int (* inode_alloc_security ) (struct inode*) ;} ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct inode*) ;

int FUNC_3(struct inode *VAR_1)
{
 int VAR_2;

 VAR_1->i_security = ((void*)0);
 VAR_2 = VAR_0->inode_alloc_security(VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_1(VAR_1);
 return VAR_2;
}
