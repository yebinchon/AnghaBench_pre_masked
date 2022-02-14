
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* u; int at_form; int at_attrib; TYPE_2__* at_die; } ;
struct TYPE_12__ {int die_attr; } ;
struct TYPE_11__ {int u64; } ;
typedef scalar_t__ Dwarf_Small ;
typedef TYPE_2__* Dwarf_P_Die ;
typedef int * Dwarf_P_Debug ;
typedef TYPE_3__* Dwarf_P_Attribute ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_3__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_3__**,int *) ;
 int VAR_4 ;

Dwarf_P_Attribute
FUNC_3(Dwarf_P_Debug VAR_5, Dwarf_P_Die VAR_6, Dwarf_Half VAR_7,
    Dwarf_Small VAR_8, Dwarf_Error *VAR_9)
{
 Dwarf_Attribute VAR_10;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
  FUNC_0(VAR_5, VAR_9, VAR_0);
  return (VAR_2);
 }

 if (FUNC_2(VAR_6, &VAR_10, VAR_9) != VAR_1)
  return (VAR_2);

 VAR_10->at_die = VAR_6;
 VAR_10->at_attrib = VAR_7;
 VAR_10->at_form = VAR_3;
 VAR_10->u[0].u64 = VAR_8 ? 1 : 0;

 FUNC_1(&VAR_6->die_attr, VAR_10, VAR_4);

 return (VAR_10);
}
