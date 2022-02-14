
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* dmd_macro; } ;
struct TYPE_5__ {scalar_t__ dbg_mode; scalar_t__ dbgp_mdcnt; TYPE_2__* dbgp_mdlist; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef TYPE_2__ Dwarf_Macro_Details ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(Dwarf_P_Debug VAR_1)
{
 Dwarf_Macro_Details *VAR_2;
 int VAR_3;

 FUNC_0(VAR_1 != ((void*)0) && VAR_1->dbg_mode == VAR_0);
 if (VAR_1->dbgp_mdlist == ((void*)0))
  return;

 FUNC_0(VAR_1->dbgp_mdcnt > 0);
 for (VAR_3 = 0; (Dwarf_Unsigned) VAR_3 < VAR_1->dbgp_mdcnt; VAR_3++) {
  VAR_2 = &VAR_1->dbgp_mdlist[VAR_3];
  if (VAR_2->dmd_macro)
   FUNC_1(VAR_2->dmd_macro);
 }
 FUNC_1(VAR_1->dbgp_mdlist);
 VAR_1->dbgp_mdlist = ((void*)0);
 VAR_1->dbgp_mdcnt = 0;
}
