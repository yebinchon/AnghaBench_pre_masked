
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Unsigned ;
typedef int Dwarf_Small ;
typedef int Dwarf_Signed ;
typedef int * Dwarf_Ptr ;
typedef int Dwarf_Locdesc ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int **,int *,int ,int,int,int ,int *) ;

int
FUNC_2(Dwarf_Debug VAR_4, Dwarf_Ptr VAR_5,
    Dwarf_Unsigned VAR_6, Dwarf_Half VAR_7, Dwarf_Half VAR_8,
    Dwarf_Small VAR_9, Dwarf_Locdesc **VAR_10, Dwarf_Signed *VAR_11,
    Dwarf_Error *VAR_12)
{
 Dwarf_Locdesc *VAR_13;
 int VAR_14;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0 ||
     VAR_10 == ((void*)0) || VAR_11 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_12, VAR_0);
  return (VAR_2);
 }

 if (VAR_7 != 4 && VAR_7 != 8) {
  FUNC_0(VAR_4, VAR_12, VAR_0);
  return (VAR_2);
 }

 if (VAR_8 != 4 && VAR_8 != 8) {
  FUNC_0(VAR_4, VAR_12, VAR_0);
  return (VAR_2);
 }

 VAR_14 = FUNC_1(VAR_4, &VAR_13, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_12);
 if (VAR_14 != VAR_1)
  return (VAR_2);

 *VAR_10 = VAR_13;
 *VAR_11 = 1;

 return (VAR_3);
}
