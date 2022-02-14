
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dbg_frame_undefined_value; int dbg_frame_same_value; int dbg_frame_cfa_value; int dbg_frame_rule_initial_value; int dbg_frame_rule_table_size; } ;
typedef TYPE_1__* Dwarf_Debug ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_0(Dwarf_Debug VAR_5)
{


 VAR_5->dbg_frame_rule_table_size = VAR_1;
 VAR_5->dbg_frame_rule_initial_value = VAR_2;
 VAR_5->dbg_frame_cfa_value = VAR_0;
 VAR_5->dbg_frame_same_value = VAR_3;
 VAR_5->dbg_frame_undefined_value = VAR_4;
}
