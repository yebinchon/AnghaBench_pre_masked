
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ab_atnum; int ab_length; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_1__* Dwarf_Abbrev ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int *,TYPE_1__**,int *) ;

int
FUNC_2(Dwarf_Debug VAR_6, Dwarf_Unsigned VAR_7,
    Dwarf_Abbrev *VAR_8, Dwarf_Unsigned *VAR_9,
    Dwarf_Unsigned *VAR_10, Dwarf_Error *VAR_11)
{
 Dwarf_Abbrev VAR_12;
 int VAR_13;

 if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) ||
     VAR_10 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_11, VAR_0);
  return (VAR_3);
 }

 VAR_13 = FUNC_1(VAR_6, ((void*)0), &VAR_7, &VAR_12, VAR_11);
 if (VAR_13 != VAR_1) {
  if (VAR_13 == VAR_2) {
   FUNC_0(VAR_6, VAR_11, VAR_2);
   return (VAR_4);
  } else
   return (VAR_3);
 }

 *VAR_8 = VAR_12;
 *VAR_9 = VAR_12->ab_length;
 *VAR_10 = VAR_12->ab_atnum;

 return (VAR_5);
}
