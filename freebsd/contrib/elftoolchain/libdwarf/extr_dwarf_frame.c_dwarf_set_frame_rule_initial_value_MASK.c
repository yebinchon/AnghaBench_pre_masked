
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dbg_frame_rule_initial_value; } ;
typedef int Dwarf_Half ;
typedef TYPE_1__* Dwarf_Debug ;



Dwarf_Half
FUNC_0(Dwarf_Debug VAR_0, Dwarf_Half VAR_1)
{
 Dwarf_Half VAR_2;

 VAR_2 = VAR_0->dbg_frame_rule_initial_value;
 VAR_0->dbg_frame_rule_initial_value = VAR_1;

 return (VAR_2);
}
