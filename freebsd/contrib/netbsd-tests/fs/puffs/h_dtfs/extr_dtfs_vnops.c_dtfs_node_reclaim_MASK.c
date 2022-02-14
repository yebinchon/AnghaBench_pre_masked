
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {scalar_t__ va_nlink; } ;
struct puffs_node {TYPE_1__ pn_va; } ;


 int FUNC_0 (struct puffs_node*) ;

int
FUNC_1(struct puffs_usermount *VAR_0, void *VAR_1)
{
 struct puffs_node *VAR_2 = VAR_1;

 if (VAR_2->pn_va.va_nlink == 0)
  FUNC_0(VAR_2);

 return 0;
}
