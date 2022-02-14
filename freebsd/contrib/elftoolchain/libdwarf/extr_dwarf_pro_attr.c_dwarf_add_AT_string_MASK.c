
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * Dwarf_P_Die ;
typedef int * Dwarf_P_Debug ;
typedef int Dwarf_P_Attribute ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,int ,char*,int *) ;

Dwarf_P_Attribute
FUNC_2(Dwarf_P_Debug VAR_3, Dwarf_P_Die VAR_4, Dwarf_Half VAR_5,
    char *VAR_6, Dwarf_Error *VAR_7)
{
 Dwarf_Attribute VAR_8;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_7, VAR_0);
  return (VAR_2);
 }



 if (FUNC_1(VAR_4, &VAR_8, VAR_5, VAR_6, VAR_7) !=
     VAR_1)
  return (VAR_2);

 return (VAR_8);
}
