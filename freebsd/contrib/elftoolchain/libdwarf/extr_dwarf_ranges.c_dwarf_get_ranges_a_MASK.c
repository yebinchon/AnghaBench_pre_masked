
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int die_cu; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Ranges ;
typedef int Dwarf_Off ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Die ;
typedef int * Dwarf_Debug ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int **,int *,int *,int *) ;

int
FUNC_2(Dwarf_Debug VAR_2, Dwarf_Off VAR_3, Dwarf_Die VAR_4,
    Dwarf_Ranges **VAR_5, Dwarf_Signed *VAR_6, Dwarf_Unsigned *VAR_7,
    Dwarf_Error *VAR_8)
{

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
  FUNC_0(VAR_2, VAR_8, VAR_0);
  return (VAR_1);
 }

 return (FUNC_1(VAR_2, VAR_4->die_cu, VAR_3, VAR_5, VAR_6,
     VAR_7, VAR_8));
}
