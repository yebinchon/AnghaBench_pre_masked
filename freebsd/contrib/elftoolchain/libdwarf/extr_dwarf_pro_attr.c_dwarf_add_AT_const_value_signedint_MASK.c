
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* u; int at_form; int at_attrib; TYPE_2__* at_die; } ;
struct TYPE_12__ {int die_attr; int * die_dbg; } ;
struct TYPE_11__ {int s64; } ;
typedef int Dwarf_Signed ;
typedef TYPE_2__* Dwarf_P_Die ;
typedef TYPE_3__* Dwarf_P_Attribute ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_3__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_3__**,int *) ;
 int VAR_5 ;

Dwarf_P_Attribute
FUNC_3(Dwarf_P_Die VAR_6, Dwarf_Signed VAR_7,
    Dwarf_Error *VAR_8)
{
 Dwarf_Attribute VAR_9;
 Dwarf_Debug VAR_10;

 VAR_10 = VAR_6 != ((void*)0) ? VAR_6->die_dbg : ((void*)0);

 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_10, VAR_8, VAR_1);
  return (VAR_3);
 }

 if (FUNC_2(VAR_6, &VAR_9, VAR_8) != VAR_2)
  return (VAR_3);

 VAR_9->at_die = VAR_6;
 VAR_9->at_attrib = VAR_0;
 VAR_9->at_form = VAR_4;
 VAR_9->u[0].s64 = VAR_7;

 FUNC_1(&VAR_6->die_attr, VAR_9, VAR_5);

 return (VAR_9);
}
