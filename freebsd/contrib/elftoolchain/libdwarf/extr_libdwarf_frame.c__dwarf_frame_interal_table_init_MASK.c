
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dbg_frame_rule_table_size; TYPE_1__* dbg_internal_reg_table; } ;
struct TYPE_6__ {int rt3_reg_table_size; int * rt3_rules; } ;
typedef int Dwarf_Regtable_Entry3 ;
typedef TYPE_1__ Dwarf_Regtable3 ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Debug ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(Dwarf_Debug VAR_2, Dwarf_Error *VAR_3)
{
 Dwarf_Regtable3 *VAR_4;

 if (VAR_2->dbg_internal_reg_table != ((void*)0))
  return (VAR_1);


 if ((VAR_4 = FUNC_1(1, sizeof(Dwarf_Regtable3))) == ((void*)0)) {
  FUNC_0(VAR_2, VAR_3, VAR_0);
  return (VAR_0);
 }

 VAR_4->rt3_reg_table_size = VAR_2->dbg_frame_rule_table_size;
 if ((VAR_4->rt3_rules = FUNC_1(VAR_4->rt3_reg_table_size,
     sizeof(Dwarf_Regtable_Entry3))) == ((void*)0)) {
  FUNC_2(VAR_4);
  FUNC_0(VAR_2, VAR_3, VAR_0);
  return (VAR_0);
 }

 VAR_2->dbg_internal_reg_table = VAR_4;

 return (VAR_1);
}
