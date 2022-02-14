
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t dbg_seccnt; TYPE_1__* dbg_section; } ;
struct TYPE_5__ {int * ds_name; } ;
typedef TYPE_1__ Dwarf_Section ;
typedef size_t Dwarf_Half ;
typedef TYPE_2__* Dwarf_Debug ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*) ;

Dwarf_Section *
FUNC_2(Dwarf_Debug VAR_0, const char *VAR_1)
{
 Dwarf_Section *VAR_2;
 Dwarf_Half VAR_3;

 FUNC_0(VAR_0 != ((void*)0) && VAR_1 != ((void*)0));

 for (VAR_3 = 0; VAR_3 < VAR_0->dbg_seccnt; VAR_3++) {
  VAR_2 = &VAR_0->dbg_section[VAR_3];
  if (VAR_2->ds_name != ((void*)0) && !FUNC_1(VAR_2->ds_name, VAR_1))
   return (VAR_2);
 }

 return (((void*)0));
}
