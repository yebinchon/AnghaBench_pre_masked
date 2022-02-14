
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dbg_mode; int * dbg_eh_frame; int * dbg_frame; TYPE_1__* dbg_internal_reg_table; } ;
struct TYPE_5__ {struct TYPE_5__* rt3_rules; } ;
typedef TYPE_1__ Dwarf_Regtable3 ;
typedef TYPE_2__* Dwarf_Debug ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(Dwarf_Debug VAR_1)
{
 Dwarf_Regtable3 *VAR_2;

 FUNC_1(VAR_1 != ((void*)0) && VAR_1->dbg_mode == VAR_0);

 if (VAR_1->dbg_internal_reg_table) {
  VAR_2 = VAR_1->dbg_internal_reg_table;
  FUNC_2(VAR_2->rt3_rules);
  FUNC_2(VAR_2);
  VAR_1->dbg_internal_reg_table = ((void*)0);
 }

 if (VAR_1->dbg_frame) {
  FUNC_0(VAR_1->dbg_frame);
  VAR_1->dbg_frame = ((void*)0);
 }

 if (VAR_1->dbg_eh_frame) {
  FUNC_0(VAR_1->dbg_eh_frame);
  VAR_1->dbg_eh_frame = ((void*)0);
 }
}
