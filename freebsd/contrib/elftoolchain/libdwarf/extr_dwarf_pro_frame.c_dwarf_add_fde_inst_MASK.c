
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Unsigned ;
typedef int Dwarf_Small ;
typedef int * Dwarf_P_Fde ;
typedef int Dwarf_Error ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ,int *) ;

Dwarf_P_Fde
FUNC_2(Dwarf_P_Fde VAR_3, Dwarf_Small VAR_4, Dwarf_Unsigned VAR_5,
    Dwarf_Unsigned VAR_6, Dwarf_Error *VAR_7)
{
 int VAR_8;

 if (VAR_3 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_7, VAR_0);
  return (VAR_2);
 }

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 if (VAR_8 != VAR_1)
  return (VAR_2);

 return (VAR_3);
}
