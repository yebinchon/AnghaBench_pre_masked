
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dw_block_ptr; int dw_offset_or_block_len; int dw_regnum; int dw_offset_relevant; int dw_value_type; } ;
struct TYPE_5__ {scalar_t__ fde_initloc; scalar_t__ fde_adrange; int * fde_dbg; } ;
typedef int Dwarf_Small ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Regtable3 ;
typedef int Dwarf_Ptr ;
typedef TYPE_1__* Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef scalar_t__ Dwarf_Addr ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int **,scalar_t__*,int *) ;

int
FUNC_2(Dwarf_Fde VAR_6, Dwarf_Addr VAR_7,
    Dwarf_Small *VAR_8, Dwarf_Signed *VAR_9,
    Dwarf_Signed *VAR_10, Dwarf_Signed *VAR_11,
    Dwarf_Ptr *VAR_12, Dwarf_Addr *VAR_13, Dwarf_Error *VAR_14)
{
 Dwarf_Regtable3 *VAR_15;
 Dwarf_Debug VAR_16;
 Dwarf_Addr VAR_17;
 int VAR_18;

 VAR_16 = VAR_6 != ((void*)0) ? VAR_6->fde_dbg : ((void*)0);

 if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) ||
     VAR_10 == ((void*)0) || VAR_11 == ((void*)0) ||
     VAR_12 == ((void*)0) || VAR_13 == ((void*)0)) {
  FUNC_0(VAR_16, VAR_14, VAR_1);
  return (VAR_4);
 }

 if (VAR_7 < VAR_6->fde_initloc ||
     VAR_7 >= VAR_6->fde_initloc + VAR_6->fde_adrange) {
  FUNC_0(VAR_16, VAR_14, VAR_3);
  return (VAR_4);
 }

 VAR_18 = FUNC_1(VAR_6, VAR_7, &VAR_15, &VAR_17,
     VAR_14);
 if (VAR_18 != VAR_2)
  return (VAR_4);

 *VAR_8 = VAR_0.dw_value_type;
 *VAR_9 = VAR_0.dw_offset_relevant;
 *VAR_10 = VAR_0.dw_regnum;
 *VAR_11 = VAR_0.dw_offset_or_block_len;
 *VAR_12 = VAR_0.dw_block_ptr;
 *VAR_13 = VAR_17;

 return (VAR_5);
}
