
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fde_offset; TYPE_1__* fde_cie; int fde_cieoff; int fde_length; int fde_addr; int fde_adrange; int fde_initloc; int * fde_dbg; } ;
struct TYPE_4__ {int cie_index; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Ptr ;
typedef int Dwarf_Off ;
typedef TYPE_2__* Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef int Dwarf_Addr ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(Dwarf_Fde VAR_3, Dwarf_Addr *VAR_4, Dwarf_Unsigned *VAR_5,
    Dwarf_Ptr *VAR_6, Dwarf_Unsigned *VAR_7, Dwarf_Off *VAR_8,
    Dwarf_Signed *VAR_9, Dwarf_Off *VAR_10, Dwarf_Error *VAR_11)
{
 Dwarf_Debug VAR_12;

 VAR_12 = VAR_3 != ((void*)0) ? VAR_3->fde_dbg : ((void*)0);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) ||
     VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0) ||
     VAR_9 == ((void*)0) || VAR_10 == ((void*)0)) {
  FUNC_0(VAR_12, VAR_11, VAR_0);
  return (VAR_1);
 }

 *VAR_4 = VAR_3->fde_initloc;
 *VAR_5 = VAR_3->fde_adrange;
 *VAR_6 = VAR_3->fde_addr;
 *VAR_7 = VAR_3->fde_length;
 *VAR_8 = VAR_3->fde_cieoff;
 *VAR_9 = VAR_3->fde_cie->cie_index;
 *VAR_10 = VAR_3->fde_offset;

 return (VAR_2);
}
