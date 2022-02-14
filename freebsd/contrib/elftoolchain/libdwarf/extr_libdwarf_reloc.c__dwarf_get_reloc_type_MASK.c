
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dbgp_isa; } ;
typedef int Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Debug ;
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
 int FUNC_0 (int ) ;

Dwarf_Unsigned
FUNC_1(Dwarf_P_Debug VAR_16, int VAR_17)
{

 FUNC_0(VAR_16 != ((void*)0));

 switch (VAR_16->dbgp_isa) {
 case 136:
  return (VAR_17 ? VAR_2 : VAR_1);
 case 129:
  return (VAR_0);
 case 128:
  return (VAR_17 ? VAR_15 : VAR_14);
 case 130:
  return (VAR_17 ? VAR_13 : VAR_12);
 case 132:
  return (VAR_17 ? VAR_8 : VAR_9);
 case 135:
  return (VAR_3);
 case 133:
  return (VAR_17 ? VAR_7 : VAR_6);
 case 131:
  return (VAR_17 ? VAR_11 : VAR_10);
 case 134:
  return (VAR_17 ? VAR_5 : VAR_4);
 default:
  break;
 }
 return (0);
}
