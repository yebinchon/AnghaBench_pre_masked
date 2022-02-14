
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * ds_name; } ;
typedef TYPE_1__ Dwarf_Section ;
typedef int * Dwarf_Debug ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;

Dwarf_Section *
FUNC_3(Dwarf_Debug VAR_0, Dwarf_Section *VAR_1)
{

 FUNC_1(VAR_0 != ((void*)0));

 if (VAR_1 == ((void*)0))
  return (FUNC_0(VAR_0, ".debug_types"));

 FUNC_1(VAR_1->ds_name != ((void*)0));

 do {
  VAR_1++;
  if (VAR_1->ds_name != ((void*)0) &&
      !FUNC_2(VAR_1->ds_name, ".debug_types"))
   return (VAR_1);
 } while (VAR_1->ds_name != ((void*)0));

 return (((void*)0));
}
