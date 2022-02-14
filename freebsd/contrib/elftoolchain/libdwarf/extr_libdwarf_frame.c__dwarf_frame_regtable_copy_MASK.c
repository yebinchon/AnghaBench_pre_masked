
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int dw_regnum; } ;
struct TYPE_11__ {int dbg_frame_undefined_value; } ;
struct TYPE_10__ {int rt3_reg_table_size; TYPE_3__* rt3_rules; TYPE_3__ rt3_cfa_rule; } ;
typedef int Dwarf_Regtable_Entry3 ;
typedef TYPE_1__ Dwarf_Regtable3 ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Debug ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,int) ;

int
FUNC_5(Dwarf_Debug VAR_2, Dwarf_Regtable3 **VAR_3,
    Dwarf_Regtable3 *VAR_4, Dwarf_Error *VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_4 != ((void*)0));

 if (*VAR_3 == ((void*)0)) {
  if ((*VAR_3 = FUNC_3(sizeof(Dwarf_Regtable3))) == ((void*)0)) {
   FUNC_0(VAR_2, VAR_5, VAR_0);
   return (VAR_0);
  }
  (*VAR_3)->rt3_reg_table_size = VAR_4->rt3_reg_table_size;
  (*VAR_3)->rt3_rules = FUNC_3(VAR_4->rt3_reg_table_size *
      sizeof(Dwarf_Regtable_Entry3));
  if ((*VAR_3)->rt3_rules == ((void*)0)) {
   FUNC_2(*VAR_3);
   FUNC_0(VAR_2, VAR_5, VAR_0);
   return (VAR_0);
  }
 }

 FUNC_4(&(*VAR_3)->rt3_cfa_rule, &VAR_4->rt3_cfa_rule,
     sizeof(Dwarf_Regtable_Entry3));

 for (VAR_6 = 0; VAR_6 < (*VAR_3)->rt3_reg_table_size &&
      VAR_6 < VAR_4->rt3_reg_table_size; VAR_6++)
  FUNC_4(&(*VAR_3)->rt3_rules[VAR_6], &VAR_4->rt3_rules[VAR_6],
      sizeof(Dwarf_Regtable_Entry3));

 for (; VAR_6 < (*VAR_3)->rt3_reg_table_size; VAR_6++)
  (*VAR_3)->rt3_rules[VAR_6].dw_regnum =
      VAR_2->dbg_frame_undefined_value;

 return (VAR_1);
}
