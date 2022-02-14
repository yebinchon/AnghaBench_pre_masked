
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dbgp_flags; int dbgp_fdelen; int dbgp_fdelist; int dbgp_cielist; } ;
struct TYPE_7__ {void* fde_eoff; scalar_t__ fde_esymndx; scalar_t__ fde_symndx; scalar_t__ fde_adrange; void* fde_initloc; int * fde_cie; TYPE_2__* fde_dbg; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Fde ;
typedef int Dwarf_P_Die ;
typedef TYPE_2__* Dwarf_P_Debug ;
typedef int * Dwarf_P_Cie ;
typedef int Dwarf_Error ;
typedef void* Dwarf_Addr ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int * FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

Dwarf_Unsigned
FUNC_4(Dwarf_P_Debug VAR_5, Dwarf_P_Fde VAR_6, Dwarf_P_Die VAR_7,
    Dwarf_Unsigned VAR_8, Dwarf_Addr VAR_9, Dwarf_Unsigned VAR_10,
    Dwarf_Unsigned VAR_11, Dwarf_Unsigned VAR_12,
    Dwarf_Addr VAR_13, Dwarf_Error *VAR_14)
{
 Dwarf_P_Cie VAR_15;
 int VAR_16;






 (void) VAR_7;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_6->fde_dbg != VAR_5) {
  FUNC_0(VAR_5, VAR_14, VAR_1);
  return (VAR_2);
 }

 VAR_15 = FUNC_1(&VAR_5->dbgp_cielist);
 for (VAR_16 = 0; (Dwarf_Unsigned) VAR_16 < VAR_8; VAR_16++) {
  VAR_15 = FUNC_3(VAR_15, VAR_3);
  if (VAR_15 == ((void*)0))
   break;
 }
 if (VAR_15 == ((void*)0)) {
  FUNC_0(VAR_5, VAR_14, VAR_1);
  return (VAR_2);
 }

 if (VAR_12 > 0 &&
     (VAR_5->dbgp_flags & VAR_0) == 0) {
  FUNC_0(VAR_5, VAR_14, VAR_1);
  return (VAR_2);
 }

 VAR_6->fde_cie = VAR_15;
 VAR_6->fde_initloc = VAR_9;
 VAR_6->fde_adrange = VAR_10;
 VAR_6->fde_symndx = VAR_11;
 VAR_6->fde_esymndx = VAR_12;
 VAR_6->fde_eoff = VAR_13;

 FUNC_2(&VAR_5->dbgp_fdelist, VAR_6, VAR_4);

 return (VAR_5->dbgp_fdelen++);
}
