
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {scalar_t__ va_nlink; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
typedef struct puffs_node* puffs_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (struct puffs_usermount*) ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(struct puffs_usermount *VAR_1, puffs_cookie_t VAR_2)
{
 struct puffs_node *VAR_3 = VAR_2;

 if (VAR_3->pn_va.va_nlink == 0)
  FUNC_1(FUNC_0(VAR_1), VAR_0);
 return 0;
}
