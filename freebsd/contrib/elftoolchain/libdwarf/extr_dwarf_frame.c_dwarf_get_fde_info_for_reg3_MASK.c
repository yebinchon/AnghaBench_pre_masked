
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int dw_block_ptr; int dw_offset_or_block_len; int dw_regnum; int dw_offset_relevant; int dw_value_type; } ;
struct TYPE_8__ {scalar_t__ dbg_frame_rule_table_size; } ;
struct TYPE_7__ {scalar_t__ fde_initloc; scalar_t__ fde_adrange; TYPE_2__* fde_dbg; } ;
typedef int Dwarf_Small ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Regtable3 ;
typedef int Dwarf_Ptr ;
typedef scalar_t__ Dwarf_Half ;
typedef TYPE_1__* Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Debug ;
typedef scalar_t__ Dwarf_Addr ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int **,scalar_t__*,int *) ;

int
FUNC_2(Dwarf_Fde VAR_7, Dwarf_Half VAR_8,
    Dwarf_Addr VAR_9, Dwarf_Small *VAR_10,
    Dwarf_Signed *VAR_11, Dwarf_Signed *VAR_12,
    Dwarf_Signed *VAR_13, Dwarf_Ptr *VAR_14,
    Dwarf_Addr *VAR_15, Dwarf_Error *VAR_16)
{
 Dwarf_Regtable3 *VAR_17;
 Dwarf_Debug VAR_18;
 Dwarf_Addr VAR_19;
 int VAR_20;

 VAR_18 = VAR_7 != ((void*)0) ? VAR_7->fde_dbg : ((void*)0);

 if (VAR_7 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0) ||
     VAR_12 == ((void*)0) || VAR_13 == ((void*)0) ||
     VAR_14 == ((void*)0) || VAR_15 == ((void*)0)) {
  FUNC_0(VAR_18, VAR_16, VAR_0);
  return (VAR_4);
 }

 if (VAR_9 < VAR_7->fde_initloc ||
     VAR_9 >= VAR_7->fde_initloc + VAR_7->fde_adrange) {
  FUNC_0(VAR_18, VAR_16, VAR_3);
  return (VAR_4);
 }

 VAR_20 = FUNC_1(VAR_7, VAR_9, &VAR_17, &VAR_19,
     VAR_16);
 if (VAR_20 != VAR_2)
  return (VAR_4);

 if (VAR_8 >= VAR_18->dbg_frame_rule_table_size) {
  FUNC_0(VAR_18, VAR_16, VAR_1);
  return (VAR_4);
 }

 *VAR_10 = VAR_6.dw_value_type;
 *VAR_11 = VAR_6.dw_offset_relevant;
 *VAR_12 = VAR_6.dw_regnum;
 *VAR_13 = VAR_6.dw_offset_or_block_len;
 *VAR_14 = VAR_6.dw_block_ptr;
 *VAR_15 = VAR_19;

 return (VAR_5);
}
