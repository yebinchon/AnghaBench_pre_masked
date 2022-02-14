
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int dw_regnum; } ;
struct TYPE_13__ {int cie_daf; int cie_caf; int cie_addrsize; int cie_instlen; int cie_initinst; } ;
struct TYPE_12__ {int dbg_frame_rule_initial_value; TYPE_1__* dbg_internal_reg_table; } ;
struct TYPE_11__ {unsigned long long fde_initloc; int fde_instlen; int fde_inst; TYPE_4__* fde_cie; TYPE_3__* fde_dbg; } ;
struct TYPE_10__ {int rt3_reg_table_size; TYPE_5__* rt3_rules; TYPE_5__ rt3_cfa_rule; } ;
typedef int Dwarf_Regtable_Entry3 ;
typedef TYPE_1__ Dwarf_Regtable3 ;
typedef TYPE_2__* Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef TYPE_3__* Dwarf_Debug ;
typedef TYPE_4__* Dwarf_Cie ;
typedef unsigned long long Dwarf_Addr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*,int ,int ,int ,int ,int ,unsigned long long,unsigned long long,unsigned long long*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;

int
FUNC_3(Dwarf_Fde VAR_1, Dwarf_Addr VAR_2,
    Dwarf_Regtable3 **VAR_3, Dwarf_Addr *VAR_4, Dwarf_Error *VAR_5)
{
 Dwarf_Debug VAR_6;
 Dwarf_Cie VAR_7;
 Dwarf_Regtable3 *VAR_8;
 Dwarf_Addr VAR_9;
 int VAR_10, VAR_11;

 FUNC_1(VAR_3 != ((void*)0));

 VAR_6 = VAR_1->fde_dbg;
 FUNC_1(VAR_6 != ((void*)0));

 VAR_8 = VAR_6->dbg_internal_reg_table;


 FUNC_2(&VAR_8->rt3_cfa_rule, 0, sizeof(Dwarf_Regtable_Entry3));
 FUNC_2(VAR_8->rt3_rules, 0, VAR_8->rt3_reg_table_size *
     sizeof(Dwarf_Regtable_Entry3));


 for (VAR_10 = 0; VAR_10 < VAR_8->rt3_reg_table_size; VAR_10++)
  VAR_8->rt3_rules[VAR_10].dw_regnum = VAR_6->dbg_frame_rule_initial_value;


 VAR_7 = VAR_1->fde_cie;
 FUNC_1(VAR_7 != ((void*)0));
 VAR_11 = FUNC_0(VAR_6, VAR_8, VAR_7->cie_addrsize,
     VAR_7->cie_initinst, VAR_7->cie_instlen, VAR_7->cie_caf, VAR_7->cie_daf, 0,
     ~0ULL, &VAR_9, VAR_5);
 if (VAR_11 != VAR_0)
  return (VAR_11);


 if (VAR_2 >= VAR_1->fde_initloc) {
  VAR_11 = FUNC_0(VAR_6, VAR_8, VAR_7->cie_addrsize,
      VAR_1->fde_inst, VAR_1->fde_instlen, VAR_7->cie_caf,
      VAR_7->cie_daf, VAR_1->fde_initloc, VAR_2, &VAR_9, VAR_5);
  if (VAR_11 != VAR_0)
   return (VAR_11);
 }

 *VAR_3 = VAR_8;
 *VAR_4 = VAR_9;

 return (VAR_0);
}
