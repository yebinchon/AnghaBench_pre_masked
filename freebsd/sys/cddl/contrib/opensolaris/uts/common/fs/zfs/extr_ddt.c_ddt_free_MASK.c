
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dde_cv; int * dde_repair_abd; int ** dde_lead_zio; int dde_loading; } ;
typedef TYPE_1__ ddt_entry_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(ddt_entry_t *VAR_1)
{
 FUNC_0(!VAR_1->dde_loading);

 for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1->dde_lead_zio[VAR_2] == ((void*)0));

 if (VAR_1->dde_repair_abd != ((void*)0))
  FUNC_1(VAR_1->dde_repair_abd);

 FUNC_2(&VAR_1->dde_cv);
 FUNC_3(VAR_1, sizeof (*VAR_1));
}
