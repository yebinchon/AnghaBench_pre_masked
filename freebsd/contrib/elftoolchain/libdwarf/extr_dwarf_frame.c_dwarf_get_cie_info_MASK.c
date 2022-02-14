
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cie_instlen; int cie_initinst; int cie_ra; int cie_daf; int cie_caf; scalar_t__ cie_augment; int cie_version; int cie_length; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Small ;
typedef int Dwarf_Ptr ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Cie ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(Dwarf_Cie VAR_3, Dwarf_Unsigned *VAR_4,
    Dwarf_Small *VAR_5, char **VAR_6, Dwarf_Unsigned *VAR_7,
    Dwarf_Unsigned *VAR_8, Dwarf_Half *VAR_9, Dwarf_Ptr *VAR_10,
    Dwarf_Unsigned *VAR_11, Dwarf_Error *VAR_12)
{

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) ||
     VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) ||
     VAR_10 == ((void*)0) || VAR_11 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_12, VAR_0);
  return (VAR_1);
 }

 *VAR_4 = VAR_3->cie_length;
 *VAR_5 = VAR_3->cie_version;
 *VAR_6 = (char *) VAR_3->cie_augment;
 *VAR_7 = VAR_3->cie_caf;
 *VAR_8 = VAR_3->cie_daf;
 *VAR_9 = VAR_3->cie_ra;
 *VAR_10 = VAR_3->cie_initinst;
 *VAR_11 = VAR_3->cie_instlen;

 return (VAR_2);
}
