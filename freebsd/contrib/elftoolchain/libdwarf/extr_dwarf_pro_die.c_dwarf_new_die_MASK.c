
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {int dbgp_dielist; } ;
struct TYPE_23__ {int die_tag; TYPE_2__* die_dbg; } ;
typedef int Dwarf_Tag ;
typedef TYPE_1__* Dwarf_P_Die ;
typedef TYPE_2__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__**,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int VAR_3 ;

Dwarf_P_Die
FUNC_5(Dwarf_P_Debug VAR_4, Dwarf_Tag VAR_5,
    Dwarf_P_Die VAR_6, Dwarf_P_Die VAR_7, Dwarf_P_Die VAR_8,
    Dwarf_P_Die VAR_9, Dwarf_Error *VAR_10)
{
 Dwarf_P_Die VAR_11;
 int VAR_12;

 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_10, VAR_0);
  return (VAR_2);
 }

 VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_8,
     VAR_9);

 if (VAR_12 > 1) {
  FUNC_0(VAR_4, VAR_10, VAR_0);
  return (VAR_2);
 }

 if (FUNC_2(VAR_4, &VAR_11, VAR_10) != VAR_1)
  return (VAR_2);

 VAR_11->die_dbg = VAR_4;
 VAR_11->die_tag = VAR_5;

 FUNC_1(&VAR_4->dbgp_dielist, VAR_11, VAR_3);

 if (VAR_12 == 0)
  return (VAR_11);

 FUNC_4(VAR_11, VAR_6, VAR_7, VAR_8, VAR_9);

 return (VAR_11);
}
