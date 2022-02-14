
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dbg_mode; int dbg_cu; } ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef int * Dwarf_CU ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

void
FUNC_5(Dwarf_P_Debug VAR_3)
{
 Dwarf_CU VAR_4;

 FUNC_3(VAR_3 != ((void*)0) && VAR_3->dbg_mode == VAR_0);

 VAR_4 = FUNC_0(&VAR_3->dbg_cu);
 if (VAR_4 != ((void*)0)) {
  FUNC_1(&VAR_3->dbg_cu, VAR_4, VAR_1, VAR_2);
  FUNC_2(VAR_4);
  FUNC_4(VAR_4);
 }
}
