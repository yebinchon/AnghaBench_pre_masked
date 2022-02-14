
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cu_offset; } ;
struct TYPE_4__ {scalar_t__ die_offset; TYPE_2__* die_cu; int * die_dbg; } ;
typedef scalar_t__ Dwarf_Off ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Die ;
typedef int * Dwarf_Debug ;
typedef TYPE_2__* Dwarf_CU ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

int
FUNC_2(Dwarf_Die VAR_3, Dwarf_Off *VAR_4, Dwarf_Error *VAR_5)
{
 Dwarf_Debug VAR_6;
 Dwarf_CU VAR_7;

 VAR_6 = VAR_3 != ((void*)0) ? VAR_3->die_dbg : ((void*)0);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_5, VAR_0);
  return (VAR_1);
 }

 VAR_7 = VAR_3->die_cu;
 FUNC_1(VAR_7 != ((void*)0));

 *VAR_4 = VAR_3->die_offset - VAR_7->cu_offset;

 return (VAR_2);
}
