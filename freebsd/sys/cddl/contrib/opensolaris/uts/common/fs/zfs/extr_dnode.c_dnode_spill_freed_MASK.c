
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* dn_rm_spillblk; int dn_mtx; } ;
typedef TYPE_1__ dnode_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static boolean_t
FUNC_2(dnode_t *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->dn_mtx);
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->dn_rm_spillblk[VAR_3] == VAR_0)
   break;
 }
 FUNC_1(&VAR_2->dn_mtx);
 return (VAR_3 < VAR_1);
}
