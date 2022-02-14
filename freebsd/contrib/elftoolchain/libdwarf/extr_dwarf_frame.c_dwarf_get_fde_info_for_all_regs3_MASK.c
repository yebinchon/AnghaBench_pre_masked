
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ fde_initloc; scalar_t__ fde_adrange; int * fde_dbg; } ;
struct TYPE_9__ {int * rt3_rules; } ;
typedef TYPE_1__ Dwarf_Regtable3 ;
typedef TYPE_2__* Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef scalar_t__ Dwarf_Addr ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,TYPE_1__**,scalar_t__*,int *) ;
 int FUNC_2 (int *,TYPE_1__**,TYPE_1__*,int *) ;
 int FUNC_3 (int ) ;

int
FUNC_4(Dwarf_Fde VAR_5, Dwarf_Addr VAR_6,
    Dwarf_Regtable3 *VAR_7, Dwarf_Addr *VAR_8, Dwarf_Error *VAR_9)
{
 Dwarf_Regtable3 *VAR_10;
 Dwarf_Debug VAR_11;
 Dwarf_Addr VAR_12;
 int VAR_13;

 VAR_11 = VAR_5 != ((void*)0) ? VAR_5->fde_dbg : ((void*)0);

 if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0) || VAR_7->rt3_rules == ((void*)0) ||
     VAR_8 == ((void*)0)) {
  FUNC_0(VAR_11, VAR_9, VAR_0);
  return (VAR_3);
 }

 FUNC_3(VAR_11 != ((void*)0));

 if (VAR_6 < VAR_5->fde_initloc ||
     VAR_6 >= VAR_5->fde_initloc + VAR_5->fde_adrange) {
  FUNC_0(VAR_11, VAR_9, VAR_2);
  return (VAR_3);
 }

 VAR_13 = FUNC_1(VAR_5, VAR_6, &VAR_10, &VAR_12,
     VAR_9);
 if (VAR_13 != VAR_1)
  return (VAR_3);

 VAR_13 = FUNC_2(VAR_11, &VAR_7, VAR_10, VAR_9);
 if (VAR_13 != VAR_1)
  return (VAR_3);

 *VAR_8 = VAR_12;

 return (VAR_4);
}
