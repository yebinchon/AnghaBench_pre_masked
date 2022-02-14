
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int * die_dbg; } ;
typedef TYPE_1__* Dwarf_P_Die ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

Dwarf_P_Die
FUNC_3(Dwarf_P_Die VAR_2, Dwarf_P_Die VAR_3,
    Dwarf_P_Die VAR_4, Dwarf_P_Die VAR_5, Dwarf_P_Die VAR_6,
    Dwarf_Error *VAR_7)
{
 Dwarf_Debug VAR_8;
 int VAR_9;


 if (VAR_2 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_7, VAR_0);
  return (VAR_1);
 }

 VAR_8 = VAR_2->die_dbg;
 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5,
     VAR_6);

 if (VAR_9 > 1) {
  FUNC_0(VAR_8, VAR_7, VAR_0);
  return (VAR_1);
 } else if (VAR_9 == 0)
  return (VAR_2);

 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 return (VAR_2);
}
