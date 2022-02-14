
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct lladdr_info {int dummy; } ;
struct TYPE_28__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int const*,int ) ;
 int FUNC_2 (TYPE_1__*,int const*,int ) ;
 int FUNC_3 (TYPE_1__*,int const*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int const*,int ) ;
 int FUNC_5 (TYPE_1__*,int const*,int ,struct lladdr_info const*) ;
 int FUNC_6 (TYPE_1__*,int const*,int ) ;
 int FUNC_7 (TYPE_1__*,int const*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int const*,int ) ;
 int FUNC_9 (TYPE_1__*,int const*,int ,struct lladdr_info const*) ;
 int FUNC_10 (TYPE_1__*,int const*,int ) ;
 int FUNC_11 (TYPE_1__*,int const*,int ) ;
 int FUNC_12 (TYPE_1__*,int const*,int ) ;
 int FUNC_13 (TYPE_1__*,int const*,int ) ;
 int FUNC_14 (TYPE_1__*,int const*,int ) ;
 int FUNC_15 (TYPE_1__*,int const*,int ) ;
 int FUNC_16 (TYPE_1__*,int const*,int ,int ,struct lladdr_info const*,struct lladdr_info const*) ;
 int FUNC_17 (TYPE_1__*,int const*,int ) ;
 int FUNC_18 (TYPE_1__*,int const*,int ) ;
 int FUNC_19 (TYPE_1__*,int const*) ;
 int FUNC_20 (TYPE_1__*,int const*,int ) ;
 int FUNC_21 (TYPE_1__*,int const*,int ) ;
 int FUNC_22 (TYPE_1__*,int const*,int ,struct lladdr_info const*,struct lladdr_info const*) ;
 int FUNC_23 (TYPE_1__*,int const*,int ) ;
 int FUNC_24 (TYPE_1__*,int const*,int ,int ) ;

int
FUNC_25(netdissect_options *VAR_0,
                u_short VAR_1, const u_char *VAR_2,
                u_int VAR_3, u_int VAR_4,
                const struct lladdr_info *VAR_5, const struct lladdr_info *VAR_6)
{
 switch (VAR_1) {

 case 151:
         FUNC_11(VAR_0, VAR_2, VAR_3);
  return (1);

 case 150:
  FUNC_10(VAR_0, VAR_2, VAR_3);
  return (1);

 case 161:
 case 132:
         FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4);
  return (1);

 case 156:
  FUNC_7(VAR_0, VAR_2, VAR_3, VAR_4);
  return (1);

 case 160:
  if (VAR_0->ndo_vflag)
   FUNC_0((VAR_0, "et1 "));
  FUNC_4(VAR_0, VAR_2, VAR_3);
  return (1);

 case 163:
  FUNC_1(VAR_0, VAR_2, VAR_3);
  return (1);

 case 149:
  FUNC_0((VAR_0, "(NOV-ETHII) "));
  FUNC_12(VAR_0, VAR_2, VAR_3);
  return (1);

 case 148:
  if (VAR_3 == 0 || VAR_4 == 0) {
   FUNC_0((VAR_0, " [|osi]"));
   return (1);
  }
  FUNC_13(VAR_0, VAR_2 + 1, VAR_3 - 1);
  return(1);

 case 136:
 case 134:
 case 135:
 case 133:
  FUNC_21(VAR_0, VAR_2, VAR_3);
  return (1);

 case 155:
         FUNC_8(VAR_0, VAR_2, VAR_3);
  return (1);

 case 131:
         FUNC_22(VAR_0, VAR_2, VAR_3, VAR_5, VAR_6);
  return (1);

 case 137:
  if (VAR_3) {
   FUNC_0((VAR_0, ": "));
   FUNC_20(VAR_0, VAR_2, VAR_3);
  }
  return (1);

 case 141:
         FUNC_17(VAR_0, VAR_2, VAR_3);
  return (1);

 case 129:
         FUNC_23(VAR_0, VAR_2, VAR_3);
  return (1);

 case 158:
 case 157:
  FUNC_6(VAR_0, VAR_2, VAR_3);
  return (1);

 case 146:
  FUNC_14(VAR_0, VAR_2, VAR_3);
  return (1);

        case 145:
  FUNC_15(VAR_0, VAR_2, VAR_3);
                return (1);

 case 140:
 case 139:
  FUNC_18(VAR_0, VAR_2, VAR_3);
  return (1);

 case 128:
  FUNC_24(VAR_0, VAR_2, VAR_3, VAR_4);
  return (1);

 case 138:
  FUNC_19(VAR_0, VAR_2);
  return (1);

        case 153:
        case 154:
                FUNC_9(VAR_0, VAR_2, VAR_3, VAR_5);
                return (1);

        case 159:
                FUNC_5(VAR_0, VAR_2, VAR_3, VAR_5);
                return (1);

 case 162:
  FUNC_2(VAR_0, VAR_2, VAR_3);
  return (1);

 case 144:
  FUNC_16(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  return (1);

 case 147:
 case 130:
 case 142:
 case 143:
 case 152:

 default:
  return (0);
 }
}
