
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* die_ab; int * die_dbg; } ;
struct TYPE_4__ {scalar_t__ ab_tag; } ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Die ;
typedef int * Dwarf_Debug ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

int
FUNC_2(Dwarf_Die VAR_3, Dwarf_Half *VAR_4, Dwarf_Error *VAR_5)
{
 Dwarf_Debug VAR_6;

 VAR_6 = VAR_3 != ((void*)0) ? VAR_3->die_dbg : ((void*)0);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_5, VAR_0);
  return (VAR_1);
 }

 FUNC_1(VAR_3->die_ab != ((void*)0));

 *VAR_4 = (Dwarf_Half) VAR_3->die_ab->ab_tag;

 return (VAR_2);
}
