
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Unsigned ;
typedef int * Dwarf_P_Die ;
typedef int * Dwarf_P_Debug ;
typedef int Dwarf_P_Attribute ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ,int ,int ,int *,int *,int *) ;

Dwarf_P_Attribute
FUNC_2(Dwarf_P_Debug VAR_3, Dwarf_P_Die VAR_4, Dwarf_Half VAR_5,
    Dwarf_Unsigned VAR_6, Dwarf_Unsigned VAR_7, Dwarf_Error *VAR_8)
{
 Dwarf_Attribute VAR_9;
 int VAR_10;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_8, VAR_0);
  return (VAR_2);
 }

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     ((void*)0), &VAR_9, VAR_8);
 if (VAR_10 != VAR_1)
  return (VAR_2);

 return (VAR_9);

}
