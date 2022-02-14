
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ at_form; scalar_t__ at_indirect; TYPE_1__* at_die; } ;
struct TYPE_4__ {int * die_dbg; } ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_2__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int
FUNC_1(Dwarf_Attribute VAR_4, Dwarf_Half *VAR_5,
    Dwarf_Error *VAR_6)
{
 Dwarf_Debug VAR_7;

 VAR_7 = VAR_4 != ((void*)0) ? VAR_4->at_die->die_dbg : ((void*)0);

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
  FUNC_0(VAR_7, VAR_6, VAR_0);
  return (VAR_1);
 }

 if (VAR_4->at_indirect)
  *VAR_5 = VAR_3;
 else
  *VAR_5 = (Dwarf_Half) VAR_4->at_form;

 return (VAR_2);
}
