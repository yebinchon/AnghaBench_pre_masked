
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dva_t ;
struct TYPE_4__ {int * ddp_dva; } ;
typedef TYPE_1__ ddt_phys_t ;
struct TYPE_5__ {TYPE_1__* dde_phys; } ;
typedef TYPE_2__ ddt_entry_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;

int
FUNC_3(ddt_entry_t *VAR_2)
{
 ddt_phys_t *VAR_3 = &VAR_2->dde_phys[VAR_0];
 dva_t *VAR_4 = VAR_3->ddp_dva;
 int VAR_5 = 0 - FUNC_1(VAR_4);

 for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_4++)
  if (FUNC_2(VAR_4))
   VAR_5++;

 FUNC_0(VAR_5 >= 0 && VAR_5 < VAR_1);

 return (VAR_5);
}
