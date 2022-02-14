
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum Dwarf_Form_Class { ____Placeholder_Dwarf_Form_Class } Dwarf_Form_Class ;
typedef int Dwarf_Half ;
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
enum Dwarf_Form_Class
FUNC_0(Dwarf_Half VAR_12, Dwarf_Half VAR_13,
    Dwarf_Half VAR_14, Dwarf_Half VAR_15)
{

 switch (VAR_15) {
 case 151:
  return (VAR_0);
 case 150:
 case 149:
 case 148:
 case 147:
  return (VAR_1);
 case 130:
 case 129:
  return (VAR_10);
 case 141:
 case 140:
  return (VAR_4);
 case 135:
 case 134:
 case 133:
 case 139:
 case 138:
 case 137:
 case 136:
  return (VAR_9);
 case 142:
  return (VAR_3);
 case 146:
 case 145:
 case 132:
 case 128:
  return (VAR_2);
 case 144:
 case 143:
  if (VAR_12 > 3)
   return (VAR_2);
  if (VAR_15 == 144 && VAR_14 != 4)
   return (VAR_2);
  if (VAR_15 == 143 && VAR_14 != 8)
   return (VAR_2);

 case 131:
  switch (VAR_13) {
  case 162:
  case 154:
  case 159:
  case 164:
  case 163:
  case 158:
  case 156:
  case 153:
  case 152:
   return (VAR_6);
  case 155:
   return (VAR_5);
  case 157:
  case 160:
   return (VAR_8);
  case 161:
   return (VAR_7);
  default:
   if (VAR_15 == 144 || VAR_15 == 143)
    return (VAR_2);
   else
    return (VAR_11);
  }
 default:
  return (VAR_11);
 }
}
