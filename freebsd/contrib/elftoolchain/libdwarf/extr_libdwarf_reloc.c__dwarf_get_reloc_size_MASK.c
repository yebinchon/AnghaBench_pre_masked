
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dbg_machine; } ;
typedef int Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_Debug ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int
FUNC_0(Dwarf_Debug VAR_16, Dwarf_Unsigned VAR_17)
{

 switch (VAR_16->dbg_machine) {
 case 133:
  break;
 case 138:
  if (VAR_17 == VAR_1)
   return (4);
  else if (VAR_17 == VAR_2)
   return (8);
  break;
 case 137:
  if (VAR_17 == VAR_3)
   return (4);
  break;
 case 139:
 case 136:
  if (VAR_17 == VAR_0)
   return (4);
  break;
 case 128:
  if (VAR_17 == VAR_14)
   return (4);
  else if (VAR_17 == VAR_15)
   return (8);
  break;
 case 129:
  if (VAR_17 == VAR_12)
   return (4);
  else if (VAR_17 == VAR_13)
   return (8);
  break;
 case 132:
  if (VAR_17 == VAR_9)
   return (4);
  break;
 case 131:
  if (VAR_17 == VAR_9)
   return (4);
  else if (VAR_17 == VAR_8)
   return (8);
  break;
 case 134:
  if (VAR_17 == VAR_6)
   return (4);
  else if (VAR_17 == VAR_7)
   return (8);
  break;
 case 130:
  if (VAR_17 == VAR_10)
   return (4);
  else if (VAR_17 == VAR_11)
   return (8);
  break;
 case 135:
  if (VAR_17 == VAR_5)
   return (4);
  else if (VAR_17 == VAR_4)
   return (8);
  break;
 default:
  break;
 }


 return (0);
}
