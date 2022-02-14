
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int,int const*,int) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (int *,int const*,int) ;
 int FUNC_10 (int *,int const*,int) ;
 int FUNC_11 (int *,int const*,int) ;
 int VAR_0 ;
 int FUNC_12 (int *,int const*,char*,int) ;
 int FUNC_13 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_14(netdissect_options *VAR_1,
           u_int VAR_2, const u_char *VAR_3, int VAR_4)
{
 if ((VAR_2 & 0xff00) == 0x7e00) {
  FUNC_11(VAR_1, VAR_3 - 1, VAR_4);
  return;
 }

 switch (VAR_2) {
 case 136:
 case 140:
 case 130:
 case 134:
 case 138:
 case 144:
 case 146:
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 case 135:
  FUNC_4(VAR_1, VAR_3, VAR_4);
  break;
 case 143:
  FUNC_2(VAR_1, VAR_3, VAR_4);
  break;
 case 129:
  FUNC_5(VAR_1, VAR_3, VAR_4);
  break;
 case 145:
  FUNC_1(VAR_1, VAR_3, VAR_4);
  break;
 case 149:
        case 128:
 case 141:
  FUNC_7(VAR_1, VAR_3, VAR_4);
  break;
 case 148:
 case 139:
  FUNC_6(VAR_1, VAR_3, VAR_4);
  break;
 case 147:
 case 137:
  FUNC_8(VAR_1, VAR_3, VAR_4);
  break;
 case 131:
  FUNC_9(VAR_1, VAR_3, VAR_4);
  break;
 case 132:
 case 133:
  FUNC_10(VAR_1, VAR_3, VAR_4);
  break;
 case 142:
  FUNC_0((VAR_1, "compressed PPP data"));
  break;
 default:
  FUNC_0((VAR_1, "%s ", FUNC_13(VAR_0, "unknown PPP protocol (0x%04x)", VAR_2)));
  FUNC_12(VAR_1, VAR_3, "\n\t", VAR_4);
  break;
 }
}
