
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int dw_offset_or_block_len; int dw_regnum; int dw_offset_relevant; } ;
struct TYPE_10__ {int dw_offset_or_block_len; int dw_regnum; int dw_offset_relevant; } ;
struct TYPE_9__ {scalar_t__ dbg_frame_cfa_value; scalar_t__ dbg_frame_rule_table_size; } ;
struct TYPE_8__ {scalar_t__ fde_initloc; scalar_t__ fde_adrange; TYPE_2__* fde_dbg; } ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Regtable3 ;
typedef scalar_t__ Dwarf_Half ;
typedef TYPE_1__* Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Debug ;
typedef scalar_t__ Dwarf_Addr ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int **,scalar_t__*,int *) ;

int
FUNC_2(Dwarf_Fde VAR_9, Dwarf_Half VAR_10,
    Dwarf_Addr VAR_11, Dwarf_Signed *VAR_12,
    Dwarf_Signed *VAR_13, Dwarf_Signed *VAR_14, Dwarf_Addr *VAR_15,
    Dwarf_Error *VAR_16)
{
 Dwarf_Regtable3 *VAR_17;
 Dwarf_Debug VAR_18;
 Dwarf_Addr VAR_19;
 int VAR_20;

 VAR_18 = VAR_9 != ((void*)0) ? VAR_9->fde_dbg : ((void*)0);

 if (VAR_9 == ((void*)0) || VAR_12 == ((void*)0) || VAR_13 == ((void*)0) ||
     VAR_14 == ((void*)0) || VAR_15 == ((void*)0)) {
  FUNC_0(VAR_18, VAR_16, VAR_1);
  return (VAR_5);
 }

 if (VAR_11 < VAR_9->fde_initloc ||
     VAR_11 >= VAR_9->fde_initloc + VAR_9->fde_adrange) {
  FUNC_0(VAR_18, VAR_16, VAR_4);
  return (VAR_5);
 }

 VAR_20 = FUNC_1(VAR_9, VAR_11, &VAR_17, &VAR_19,
     VAR_16);
 if (VAR_20 != VAR_3)
  return (VAR_5);

 if (VAR_10 == VAR_18->dbg_frame_cfa_value) {

  *VAR_12 = VAR_0.dw_offset_relevant;
  *VAR_13 = VAR_0.dw_regnum;
  *VAR_14 = VAR_0.dw_offset_or_block_len;
 } else {

  if (VAR_10 >= VAR_18->dbg_frame_rule_table_size ||
      VAR_10 >= VAR_7) {
   FUNC_0(VAR_18, VAR_16, VAR_2);
   return (VAR_5);
  }

  *VAR_12 = VAR_8.dw_offset_relevant;
  *VAR_13 = VAR_8.dw_regnum;
  *VAR_14 = VAR_8.dw_offset_or_block_len;
 }

 *VAR_15 = VAR_19;

 return (VAR_6);
}
