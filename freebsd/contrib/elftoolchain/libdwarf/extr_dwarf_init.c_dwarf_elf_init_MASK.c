
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Elf ;
typedef int Dwarf_Ptr ;
typedef int Dwarf_Handler ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ) ;

int
FUNC_6(Elf *VAR_7, int VAR_8, Dwarf_Handler VAR_9, Dwarf_Ptr VAR_10,
    Dwarf_Debug *VAR_11, Dwarf_Error *VAR_12)
{
 Dwarf_Debug VAR_13;
 int VAR_14;

 if (VAR_7 == ((void*)0) || VAR_11 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_12, VAR_1);
  return (VAR_4);
 }

 if (VAR_8 != VAR_0) {
  FUNC_0(((void*)0), VAR_12, VAR_1);
  return (VAR_4);
 }

 if (FUNC_1(&VAR_13, VAR_8, VAR_12) != VAR_3)
  return (VAR_4);

 if (FUNC_3(VAR_13, VAR_7, VAR_12) != VAR_3) {
  FUNC_5(VAR_13);
  return (VAR_4);
 }

 if ((VAR_14 = FUNC_4(VAR_13, 0, VAR_9, VAR_10, VAR_12)) !=
     VAR_3) {
  FUNC_2(VAR_13);
  FUNC_5(VAR_13);
  if (VAR_14 == VAR_2)
   return (VAR_5);
  else
   return (VAR_4);
 }

 *VAR_11 = VAR_13;

 return (VAR_6);
}
