
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_19__ {size_t dbg_frame_cfa_value; int dbg_frame_rule_table_size; } ;
struct TYPE_18__ {scalar_t__ fde_initloc; scalar_t__ fde_adrange; TYPE_6__* fde_dbg; } ;
struct TYPE_17__ {TYPE_1__* rules; } ;
struct TYPE_16__ {TYPE_2__* rt3_rules; } ;
struct TYPE_15__ {int dw_offset_or_block_len; int dw_regnum; int dw_offset_relevant; } ;
struct TYPE_14__ {int dw_offset; int dw_regnum; int dw_offset_relevant; } ;
struct TYPE_13__ {int dw_offset_or_block_len; int dw_regnum; int dw_offset_relevant; } ;
typedef TYPE_3__ Dwarf_Regtable3 ;
typedef TYPE_4__ Dwarf_Regtable ;
typedef size_t Dwarf_Half ;
typedef TYPE_5__* Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef TYPE_6__* Dwarf_Debug ;
typedef scalar_t__ Dwarf_Addr ;


 TYPE_12__ VAR_0 ;
 int FUNC_0 (TYPE_6__*,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (TYPE_5__*,scalar_t__,TYPE_3__**,scalar_t__*,int *) ;
 int FUNC_2 (int ) ;

int
FUNC_3(Dwarf_Fde VAR_7, Dwarf_Addr VAR_8,
    Dwarf_Regtable *VAR_9, Dwarf_Addr *VAR_10, Dwarf_Error *VAR_11)
{
 Dwarf_Debug VAR_12;
 Dwarf_Regtable3 *VAR_13;
 Dwarf_Addr VAR_14;
 Dwarf_Half VAR_15;
 int VAR_16, VAR_17;

 VAR_12 = VAR_7 != ((void*)0) ? VAR_7->fde_dbg : ((void*)0);

 if (VAR_7 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0)) {
  FUNC_0(VAR_12, VAR_11, VAR_1);
  return (VAR_4);
 }

 FUNC_2(VAR_12 != ((void*)0));

 if (VAR_8 < VAR_7->fde_initloc ||
     VAR_8 >= VAR_7->fde_initloc + VAR_7->fde_adrange) {
  FUNC_0(VAR_12, VAR_11, VAR_3);
  return (VAR_4);
 }

 VAR_17 = FUNC_1(VAR_7, VAR_8, &VAR_13, &VAR_14,
     VAR_11);
 if (VAR_17 != VAR_2)
  return (VAR_4);





 VAR_15 = VAR_12->dbg_frame_cfa_value;
 if (VAR_15 < VAR_6) {
  VAR_9->rules[VAR_15].dw_offset_relevant =
      VAR_0.dw_offset_relevant;
  VAR_9->rules[VAR_15].dw_regnum = VAR_0.dw_regnum;
  VAR_9->rules[VAR_15].dw_offset = VAR_0.dw_offset_or_block_len;
 }




 for (VAR_16 = 0; VAR_16 < VAR_6 && VAR_16 < VAR_12->dbg_frame_rule_table_size;
      VAR_16++) {


  if (VAR_16 == VAR_15)
   continue;

  VAR_9->rules[VAR_16].dw_offset_relevant =
      VAR_13->rt3_rules[VAR_16].dw_offset_relevant;
  VAR_9->rules[VAR_16].dw_regnum = VAR_13->rt3_rules[VAR_16].dw_regnum;
  VAR_9->rules[VAR_16].dw_offset =
      VAR_13->rt3_rules[VAR_16].dw_offset_or_block_len;
 }

 *VAR_10 = VAR_14;

 return (VAR_5);
}
