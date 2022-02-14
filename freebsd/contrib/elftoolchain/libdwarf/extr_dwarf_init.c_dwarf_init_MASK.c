
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Elf ;
typedef int Dwarf_Ptr ;
typedef int Dwarf_Handler ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int *) ;
 int * FUNC_6 (int,int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(int VAR_10, int VAR_11, Dwarf_Handler VAR_12, Dwarf_Ptr VAR_13,
    Dwarf_Debug *VAR_14, Dwarf_Error *VAR_15)
{
 Dwarf_Debug VAR_16;
 Elf *VAR_17;
 int VAR_18;

 if (VAR_10 < 0 || VAR_14 == ((void*)0)) {
  FUNC_1(((void*)0), VAR_15, VAR_1);
  return (VAR_4);
 }

 if (VAR_11 != VAR_0) {
  FUNC_1(((void*)0), VAR_15, VAR_1);
  return (VAR_4);
 }

 if (FUNC_7(VAR_8) == VAR_9) {
  FUNC_0(((void*)0), VAR_15);
  return (VAR_4);
 }

 if ((VAR_17 = FUNC_6(VAR_10, VAR_7, ((void*)0))) == ((void*)0)) {
  FUNC_0(((void*)0), VAR_15);
  return (VAR_4);
 }

 if (FUNC_2(&VAR_16, VAR_11, VAR_15) != VAR_3)
  return (VAR_4);

 if (FUNC_4(VAR_16, VAR_17, VAR_15) != VAR_3) {
  FUNC_8(VAR_16);
  return (VAR_4);
 }

 if ((VAR_18 = FUNC_5(VAR_16, 0, VAR_12, VAR_13, VAR_15)) !=
     VAR_3) {
  FUNC_3(VAR_16);
  FUNC_8(VAR_16);
  if (VAR_18 == VAR_2)
   return (VAR_5);
  else
   return (VAR_4);
 }

 *VAR_14 = VAR_16;

 return (VAR_6);
}
