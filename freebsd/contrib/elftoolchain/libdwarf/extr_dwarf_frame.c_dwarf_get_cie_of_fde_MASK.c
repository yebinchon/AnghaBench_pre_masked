
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fde_cie; int * fde_dbg; } ;
typedef TYPE_1__* Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef int Dwarf_Cie ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(Dwarf_Fde VAR_3, Dwarf_Cie *VAR_4, Dwarf_Error *VAR_5)
{
 Dwarf_Debug VAR_6;

 VAR_6 = VAR_3 != ((void*)0) ? VAR_3->fde_dbg : ((void*)0);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_5, VAR_0);
  return (VAR_1);
 }

 *VAR_4 = VAR_3->fde_cie;

 return (VAR_2);
}
