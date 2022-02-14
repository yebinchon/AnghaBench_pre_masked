
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Unsigned ;
typedef int * Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int,char*,char*,int *) ;

int
FUNC_2(Dwarf_P_Debug VAR_3, Dwarf_Unsigned VAR_4, char *VAR_5,
    char *VAR_6, Dwarf_Error *VAR_7)
{

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_7, VAR_0);
  return (VAR_1);
 }

 return (FUNC_1(VAR_3, VAR_2, VAR_4, -1, VAR_5,
     VAR_6, VAR_7));
}
