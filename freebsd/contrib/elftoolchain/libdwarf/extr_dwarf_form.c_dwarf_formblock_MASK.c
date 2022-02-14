
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int at_form; int at_block; TYPE_1__* at_die; } ;
struct TYPE_4__ {int * die_dbg; } ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef int Dwarf_Block ;
typedef TYPE_2__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





int
FUNC_1(Dwarf_Attribute VAR_4, Dwarf_Block **VAR_5,
    Dwarf_Error *VAR_6)
{
 int VAR_7;
 Dwarf_Debug VAR_8;

 VAR_8 = VAR_4 != ((void*)0) ? VAR_4->at_die->die_dbg : ((void*)0);

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
  FUNC_0(VAR_8, VAR_6, VAR_0);
  return (VAR_2);
 }

 switch (VAR_4->at_form) {
 case 131:
 case 130:
 case 129:
 case 128:
  *VAR_5 = &VAR_4->at_block;
  VAR_7 = VAR_3;
  break;
 default:
  FUNC_0(VAR_8, VAR_6, VAR_1);
  VAR_7 = VAR_2;
 }

 return (VAR_7);
}
