
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int at_form; TYPE_1__* u; } ;
struct TYPE_11__ {int * die_dbg; } ;
struct TYPE_10__ {scalar_t__ u64; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Die ;
typedef int * Dwarf_Debug ;
typedef TYPE_3__* Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,scalar_t__) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;

int
FUNC_4(Dwarf_Die VAR_10, Dwarf_Half VAR_11, Dwarf_Unsigned *VAR_12, Dwarf_Error *VAR_13)
{
 Dwarf_Attribute VAR_14;
 Dwarf_Die VAR_15;
 Dwarf_Unsigned VAR_16;
 Dwarf_Debug VAR_17;
 int VAR_18;

 VAR_17 = VAR_10 != ((void*)0) ? VAR_10->die_dbg : ((void*)0);

 if (VAR_10 == ((void*)0) || VAR_12 == ((void*)0)) {
  FUNC_0(VAR_17, VAR_13, VAR_4);
  return (VAR_7);
 }

 *VAR_12 = 0;

 VAR_15 = ((void*)0);
 for (;;) {
  if ((VAR_14 = FUNC_1(VAR_10, VAR_11)) != ((void*)0) ||
      VAR_11 != VAR_2)
   break;
  if ((VAR_14 = FUNC_1(VAR_10, VAR_0)) ==
      ((void*)0) &&
      (VAR_14 = FUNC_1(VAR_10, VAR_1)) == ((void*)0))
   break;

  switch (VAR_14->at_form) {
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
   VAR_16 = VAR_14->u[0].u64;
   VAR_18 = (VAR_15 == ((void*)0));
   VAR_15 = FUNC_2(VAR_10, VAR_16);
   if (!VAR_18)
    FUNC_3(VAR_17, VAR_10, VAR_3);
   if (VAR_15 == ((void*)0)) {
    FUNC_0(VAR_17, VAR_13, VAR_6);
    return (VAR_8);
   }
   VAR_10 = VAR_15;
   break;
  default:
   FUNC_0(VAR_17, VAR_13, VAR_5);
   return (VAR_7);
  }
 }

 if (VAR_14 == ((void*)0)) {
  FUNC_0(VAR_17, VAR_13, VAR_6);
  return (VAR_8);
 }

 switch (VAR_14->at_form) {
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 128:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  *VAR_12 = VAR_14->u[0].u64;
  break;
 default:
  if (VAR_15 != ((void*)0))
   FUNC_3(VAR_17, VAR_15, VAR_3);
  FUNC_0(VAR_17, VAR_13, VAR_5);
  return (VAR_7);
 }

 if (VAR_15 != ((void*)0))
  FUNC_3(VAR_17, VAR_15, VAR_3);

 return (VAR_9);
}
