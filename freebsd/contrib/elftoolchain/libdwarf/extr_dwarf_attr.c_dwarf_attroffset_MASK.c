
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int at_offset; TYPE_1__* at_die; } ;
struct TYPE_4__ {int * die_dbg; } ;
typedef int Dwarf_Off ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_2__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(Dwarf_Attribute VAR_3, Dwarf_Off *VAR_4, Dwarf_Error *VAR_5)
{
 Dwarf_Debug VAR_6;

 VAR_6 = VAR_3 != ((void*)0) ? VAR_3->at_die->die_dbg : ((void*)0);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_5, VAR_0);
  return (VAR_1);
 }

 *VAR_4 = VAR_3->at_offset;

 return (VAR_2);
}
