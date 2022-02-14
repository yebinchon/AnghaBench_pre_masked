
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Frame_Op ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,int ,int *,int *,int *,int *) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;

int
FUNC_4(Dwarf_Debug VAR_2, uint8_t VAR_3, uint8_t *VAR_4,
    Dwarf_Unsigned VAR_5, Dwarf_Frame_Op **VAR_6, Dwarf_Signed *VAR_7,
    Dwarf_Error *VAR_8)
{
 Dwarf_Frame_Op *VAR_9;
 Dwarf_Unsigned VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_10,
     ((void*)0), ((void*)0), VAR_8);
 if (VAR_11 != VAR_1)
  return (VAR_11);

 if ((VAR_9 = FUNC_2(VAR_10, sizeof(Dwarf_Frame_Op))) == ((void*)0)) {
  FUNC_0(VAR_2, VAR_8, VAR_0);
  return (VAR_0);
 }

 VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_10,
     VAR_9, ((void*)0), VAR_8);
 if (VAR_11 != VAR_1) {
  FUNC_3(VAR_9);
  return (VAR_11);
 }

 *VAR_6 = VAR_9;
 *VAR_7 = VAR_10;

 return (VAR_1);
}
