
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int at_form; TYPE_1__* u; } ;
struct TYPE_8__ {int * die_dbg; } ;
struct TYPE_7__ {int u64; } ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Die ;
typedef int * Dwarf_Debug ;
typedef scalar_t__ Dwarf_Bool ;
typedef TYPE_3__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;

int
FUNC_2(Dwarf_Die VAR_6, Dwarf_Half VAR_7, Dwarf_Bool *VAR_8, Dwarf_Error *VAR_9)
{
 Dwarf_Attribute VAR_10;
 Dwarf_Debug VAR_11;

 VAR_11 = VAR_6 != ((void*)0) ? VAR_6->die_dbg : ((void*)0);

 if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0)) {
  FUNC_0(VAR_11, VAR_9, VAR_0);
  return (VAR_3);
 }

 *VAR_8 = 0;

 if ((VAR_10 = FUNC_1(VAR_6, VAR_7)) == ((void*)0)) {
  FUNC_0(VAR_11, VAR_9, VAR_2);
  return (VAR_4);
 }

 switch (VAR_10->at_form) {
 case 129:
 case 128:
  *VAR_8 = (Dwarf_Bool) (!!VAR_10->u[0].u64);
  break;
 default:
  FUNC_0(VAR_11, VAR_9, VAR_1);
  return (VAR_3);
 }

 return (VAR_5);
}
