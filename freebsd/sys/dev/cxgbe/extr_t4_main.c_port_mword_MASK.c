
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct port_info {int port_type; int mod_type; } ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int) ;
 int VAR_33 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct port_info *VAR_34, uint32_t VAR_35)
{

 FUNC_0(VAR_35 & VAR_33);
 FUNC_0(FUNC_1(VAR_35));

 switch(VAR_34->port_type) {
 case 148:
 case 146:
 case 147:

  switch (VAR_35) {
  case 168:
   return (VAR_9);
  case 166:
   return (VAR_4);
  case 167:
   return (VAR_17);
  }
  break;
 case 134:
  if (VAR_35 == 167)
   return (VAR_13);
  break;
 case 142:
  if (VAR_35 == 167)
   return (VAR_10);
  break;
 case 135:
  if (VAR_35 == 166)
   return (VAR_1);
  break;
 case 139:
 case 149:
 case 150:
 case 151:
 case 138:
 case 137:
 case 136:
  switch (VAR_35) {
  case 166:
   return (VAR_1);
  case 167:
   return (VAR_12);
  case 165:
   return (VAR_20);
  case 164:
   return (VAR_24);
  case 163:
   return (VAR_28);
  case 169:
   return (VAR_6);
  }
  break;
 case 140:
 case 141:
 case 129:
 case 130:
 case 132:
 case 131:
 case 144:
 case 143:
 case 145:
 case 128:

  switch (VAR_34->mod_type) {
  case 160:
   switch (VAR_35) {
   case 166:
    return (VAR_2);
   case 167:
    return (VAR_14);
   case 165:
    return (VAR_21);
   case 164:
    return (VAR_25);
   case 163:
    return (VAR_29);
   case 169:
    return (VAR_7);
   }
   break;
  case 155:
   switch (VAR_35) {
   case 166:
    return (VAR_3);
   case 167:
    return (VAR_16);
   case 165:
    return (VAR_22);
   case 164:
    return (VAR_26);
   case 163:
    return (VAR_30);
   case 169:
    return (VAR_8);
   }
   break;
  case 162:
   if (VAR_35 == 167)
    return (VAR_11);
   break;
  case 153:
  case 154:
   switch (VAR_35) {
   case 166:
    return (VAR_0);
   case 167:
    return (VAR_18);
   case 165:
    return (VAR_19);
   case 164:
    return (VAR_23);
   case 163:
    return (VAR_27);
   case 169:
    return (VAR_5);
   }
   break;
  case 159:
   if (VAR_35 == 167)
    return (VAR_15);
   break;
  case 158:
   FUNC_0(0);

  case 161:
  case 152:
  case 156:
   break;
  case 157:
   return (VAR_31);
  }
  break;
 case 133:
  return (VAR_31);
 }

 return (VAR_32);
}
