
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Off ;
typedef int Dwarf_Error ;
typedef int Dwarf_Die ;
typedef int Dwarf_Debug ;
typedef int Dwarf_Attribute ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,char const**,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(Dwarf_Debug VAR_3, Dwarf_Die VAR_4)
{
 Dwarf_Die VAR_5;
 Dwarf_Attribute VAR_6;
 Dwarf_Off VAR_7;
 Dwarf_Error VAR_8;
 const char *VAR_9;
 char *VAR_10;

 if (FUNC_1(VAR_4, VAR_0, &VAR_9, &VAR_8) == VAR_2) {
  if ((VAR_10 = FUNC_4(VAR_9)) == ((void*)0)) {
   FUNC_5("strdup");
   return (((void*)0));
  }
  return (VAR_10);
 }

 if (FUNC_0(VAR_4, VAR_1, &VAR_6, &VAR_8) != VAR_2)
  return (((void*)0));

 if (FUNC_2(VAR_6, &VAR_7, &VAR_8) != VAR_2)
  return (((void*)0));

 if (FUNC_3(VAR_3, VAR_7, &VAR_5, &VAR_8) != VAR_2)
  return (((void*)0));

 return (FUNC_6(VAR_3, VAR_5));
}
