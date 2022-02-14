
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cie_addrsize; int * cie_dbg; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef int * Dwarf_Ptr ;
typedef int Dwarf_Frame_Op ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_1__* Dwarf_Cie ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int *,int ,int **,int *,int *) ;

int
FUNC_2(Dwarf_Cie VAR_4, Dwarf_Ptr VAR_5,
    Dwarf_Unsigned VAR_6, Dwarf_Frame_Op **VAR_7, Dwarf_Signed *VAR_8,
    Dwarf_Error *VAR_9)
{
 Dwarf_Debug VAR_10;
 int VAR_11;

 VAR_10 = VAR_4 != ((void*)0) ? VAR_4->cie_dbg : ((void*)0);

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0 ||
     VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  FUNC_0(VAR_10, VAR_9, VAR_0);
  return (VAR_2);
 }

 VAR_11 = FUNC_1(VAR_10, VAR_4->cie_addrsize, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9);
 if (VAR_11 != VAR_1)
  return (VAR_2);

 return (VAR_3);
}
