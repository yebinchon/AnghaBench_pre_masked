
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int at_form; TYPE_1__* u; int at_attrib; TYPE_2__* at_die; } ;
struct TYPE_12__ {int die_attr; } ;
struct TYPE_11__ {scalar_t__ u64; } ;
typedef scalar_t__ Dwarf_Signed ;
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_3__**,int *) ;
 int VAR_13 ;

Dwarf_P_Attribute
FUNC_3(Dwarf_P_Debug VAR_14, Dwarf_P_Die VAR_15, Dwarf_Half VAR_16,
    Dwarf_Signed VAR_17, Dwarf_Error *VAR_18)
{
 Dwarf_Attribute VAR_19;

 if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0)) {
  FUNC_0(VAR_14, VAR_18, VAR_0);
  return (VAR_2);
 }

 if (FUNC_2(VAR_15, &VAR_19, VAR_18) != VAR_1)
  return (VAR_2);

 VAR_19->at_die = VAR_15;
 VAR_19->at_attrib = VAR_16;
 VAR_19->u[0].u64 = VAR_17;

 if (VAR_17 >= VAR_10 && VAR_17 <= VAR_9)
  VAR_19->at_form = VAR_3;
 else if (VAR_17 >= VAR_12 && VAR_17 <= VAR_11)
  VAR_19->at_form = VAR_4;
 else if (VAR_17 >= VAR_8 && VAR_17 <= VAR_7)
  VAR_19->at_form = VAR_5;
 else
  VAR_19->at_form = VAR_6;

 FUNC_1(&VAR_15->die_attr, VAR_19, VAR_13);

 return (VAR_19);
}
