
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ at_form; TYPE_1__* at_die; } ;
struct TYPE_4__ {int * die_dbg; } ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef int Dwarf_Bool ;
typedef TYPE_2__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(Dwarf_Attribute VAR_3, Dwarf_Half VAR_4, Dwarf_Bool *VAR_5,
    Dwarf_Error *VAR_6)
{
 Dwarf_Debug VAR_7;

 VAR_7 = VAR_3 != ((void*)0) ? VAR_3->at_die->die_dbg : ((void*)0);

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0)) {
  FUNC_0(VAR_7, VAR_6, VAR_0);
  return (VAR_1);
 }

 *VAR_5 = (VAR_3->at_form == VAR_4);

 return (VAR_2);
}
