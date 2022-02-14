
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* at_refdie; int at_form; int at_attrib; TYPE_1__* at_die; } ;
struct TYPE_15__ {int dbg_offset_size; } ;
struct TYPE_14__ {int die_attr; } ;
typedef TYPE_1__* Dwarf_P_Die ;
typedef TYPE_2__* Dwarf_P_Debug ;
typedef TYPE_3__* Dwarf_P_Attribute ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_3__* Dwarf_Attribute ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_3__**,int *) ;
 int VAR_5 ;

Dwarf_P_Attribute
FUNC_3(Dwarf_P_Debug VAR_6, Dwarf_P_Die VAR_7, Dwarf_Half VAR_8,
    Dwarf_P_Die VAR_9, Dwarf_Error *VAR_10)
{
 Dwarf_Attribute VAR_11;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_10, VAR_0);
  return (VAR_2);
 }

 if (FUNC_2(VAR_7, &VAR_11, VAR_10) != VAR_1)
  return (VAR_2);

 VAR_11->at_die = VAR_7;
 VAR_11->at_attrib = VAR_8;
 if (VAR_6->dbg_offset_size == 4)
  VAR_11->at_form = VAR_3;
 else
  VAR_11->at_form = VAR_4;

 VAR_11->at_refdie = VAR_9;

 FUNC_1(&VAR_7->die_attr, VAR_11, VAR_5);

 return (VAR_11);
}
