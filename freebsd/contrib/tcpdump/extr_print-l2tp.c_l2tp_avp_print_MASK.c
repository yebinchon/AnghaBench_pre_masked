
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int) ;
 int VAR_4 ;
 int FUNC_4 (int *,int const*,int) ;
 int VAR_5 ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (int *,int const*,int) ;
 int FUNC_10 (int *,int const*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int const*,int) ;
 int FUNC_13 (int *,int const*,int) ;
 int FUNC_14 (int *,int const*,int) ;
 int FUNC_15 (int *,int const*,int) ;
 int FUNC_16 (int *,int const*,int) ;
 int FUNC_17 (int *,int const*,int) ;
 int FUNC_18 (int *,int const*) ;
 int FUNC_19 (int *,int const*) ;
 int FUNC_20 (int *,int const*,int) ;
 int FUNC_21 (int *,int const*,int) ;
 int FUNC_22 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_23(netdissect_options *VAR_6, const u_char *VAR_7, int VAR_8)
{
 u_int VAR_9;
 const uint16_t *VAR_10 = (const uint16_t *)VAR_7;
 uint16_t VAR_11;
 int VAR_12 = VAR_0;

 if (VAR_8 <= 0) {
  return;
 }

 FUNC_1((VAR_6, " "));

 FUNC_2(*VAR_10);
 VAR_9 = FUNC_0(VAR_10) & VAR_3;


 if (VAR_9 < 6)
  goto trunc;



 if (VAR_9 > (u_int)VAR_8)
  goto trunc;



 FUNC_3(*VAR_10, VAR_9);







 if (FUNC_0(VAR_10) & VAR_2) {
  FUNC_1((VAR_6, "*"));
 }
 if (FUNC_0(VAR_10) & VAR_1) {
  VAR_12 = VAR_4;
  FUNC_1((VAR_6, "?"));
 }
 VAR_10++;

 if (FUNC_0(VAR_10)) {

         FUNC_1((VAR_6, "VENDOR%04x:", FUNC_0(VAR_10))); VAR_10++;
  FUNC_1((VAR_6, "ATTR%04x", FUNC_0(VAR_10))); VAR_10++;
  FUNC_1((VAR_6, "("));
  FUNC_20(VAR_6, (const u_char *)VAR_10, VAR_9-6);
  FUNC_1((VAR_6, ")"));
 } else {

  VAR_10++;
  VAR_11 = FUNC_0(VAR_10); VAR_10++;
  FUNC_1((VAR_6, "%s", FUNC_22(VAR_5, "AVP-#%u", VAR_11)));
  FUNC_1((VAR_6, "("));
  if (VAR_12) {
   FUNC_1((VAR_6, "???"));
  } else {
   switch (VAR_11) {
   case 148:
    FUNC_10(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 134:
    FUNC_17(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 143:
    FUNC_13(VAR_6, VAR_10, VAR_9-6);
    break;
   case 156:
    FUNC_8(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 165:
    FUNC_5(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 130:
    if (VAR_9-6 < 8) {
     FUNC_1((VAR_6, "AVP too short"));
     break;
    }
    FUNC_20(VAR_6, (const u_char *)VAR_10, 8);
    break;
   case 157:
   case 166:
   case 135:
   case 167:
    if (VAR_9-6 < 2) {
     FUNC_1((VAR_6, "AVP too short"));
     break;
    }
    FUNC_18(VAR_6, VAR_10);
    break;
   case 154:
   case 128:
   case 162:
   case 163:
   case 131:
   case 140:
   case 144:
    FUNC_21(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 159:
   case 153:
   case 151:
   case 152:
   case 142:
   case 139:
   case 136:
    FUNC_20(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 137:
    FUNC_16(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 158:
    if (VAR_9-6 < 16) {
     FUNC_1((VAR_6, "AVP too short"));
     break;
    }
    FUNC_20(VAR_6, (const u_char *)VAR_10, 16);
    break;
   case 160:
   case 149:
   case 150:
   case 129:
   case 146:
   case 133:
    if (VAR_9-6 < 4) {
     FUNC_1((VAR_6, "AVP too short"));
     break;
    }
    FUNC_19(VAR_6, (const uint32_t *)VAR_10);
    break;
   case 164:
    FUNC_6(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 155:
    FUNC_9(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 147:
    FUNC_11(VAR_6);
    break;
   case 138:
    FUNC_15(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 141:
    FUNC_14(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 161:
    FUNC_7(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 168:
    FUNC_4(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   case 132:
    break;
   case 145:
    FUNC_12(VAR_6, (const u_char *)VAR_10, VAR_9-6);
    break;
   default:
    break;
   }
  }
  FUNC_1((VAR_6, ")"));
 }

 FUNC_23(VAR_6, VAR_7+VAR_9, VAR_8-VAR_9);
 return;

 trunc:
 FUNC_1((VAR_6, "|..."));
}
