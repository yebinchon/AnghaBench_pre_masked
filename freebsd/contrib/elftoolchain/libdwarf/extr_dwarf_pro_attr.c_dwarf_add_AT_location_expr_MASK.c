
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int at_form; TYPE_1__* u; TYPE_2__* at_expr; int at_attrib; TYPE_3__* at_die; } ;
struct TYPE_16__ {int die_attr; } ;
struct TYPE_15__ {scalar_t__ pe_length; int pe_block; } ;
struct TYPE_14__ {scalar_t__ u64; int u8p; } ;
typedef TYPE_2__* Dwarf_P_Expr ;
typedef TYPE_3__* Dwarf_P_Die ;
typedef int * Dwarf_P_Debug ;
typedef TYPE_4__* Dwarf_P_Attribute ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_4__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_4__**,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 int VAR_10 ;

Dwarf_P_Attribute
FUNC_4(Dwarf_P_Debug VAR_11, Dwarf_P_Die VAR_12, Dwarf_Half VAR_13,
    Dwarf_P_Expr VAR_14, Dwarf_Error *VAR_15)
{
 Dwarf_Attribute VAR_16;

 if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0) || VAR_14 == ((void*)0)) {
  FUNC_0(VAR_11, VAR_15, VAR_0);
  return (VAR_2);
 }

 if (FUNC_2(VAR_12, &VAR_16, VAR_15) != VAR_1)
  return (VAR_2);

 VAR_16->at_die = VAR_12;
 VAR_16->at_attrib = VAR_13;
 VAR_16->at_expr = VAR_14;

 if (FUNC_3(VAR_14, VAR_15) != VAR_1)
  return (VAR_2);
 VAR_16->u[0].u64 = VAR_14->pe_length;
 VAR_16->u[1].u8p = VAR_14->pe_block;
 if (VAR_14->pe_length <= VAR_7)
  VAR_16->at_form = VAR_4;
 else if (VAR_14->pe_length <= VAR_9)
  VAR_16->at_form = VAR_5;
 else if (VAR_14->pe_length <= VAR_8)
  VAR_16->at_form = VAR_6;
 else
  VAR_16->at_form = VAR_3;

 FUNC_1(&VAR_12->die_attr, VAR_16, VAR_10);

 return (VAR_16);
}
