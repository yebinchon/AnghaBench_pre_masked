
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const,int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,int const) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(netdissect_options *VAR_3, const u_char *VAR_4, u_int VAR_5)
{
 uint8_t VAR_6, VAR_7;

 FUNC_3(*VAR_4);

 if (*VAR_4 >= 32) {
  FUNC_3(*(VAR_4+1));
  VAR_6 = *(VAR_4 +1);
  if (VAR_6 < 2) {
   if (*VAR_4 >= 128)
    FUNC_2((VAR_3, "CCID option %u optlen too short", *VAR_4));
   else
    FUNC_2((VAR_3, "%s optlen too short",
       FUNC_5(VAR_1, "Option %u", *VAR_4)));
   return 0;
  }
 } else
  VAR_6 = 1;

 if (VAR_5 < VAR_6) {
  if (*VAR_4 >= 128)
   FUNC_2((VAR_3, "CCID option %u optlen goes past header length",
      *VAR_4));
  else
   FUNC_2((VAR_3, "%s optlen goes past header length",
      FUNC_5(VAR_1, "Option %u", *VAR_4)));
  return 0;
 }
 FUNC_4(*VAR_4, VAR_6);

 if (*VAR_4 >= 128) {
  FUNC_2((VAR_3, "CCID option %d", *VAR_4));
  switch (VAR_6) {
   case 4:
    FUNC_2((VAR_3, " %u", FUNC_0(VAR_4 + 2)));
    break;
   case 6:
    FUNC_2((VAR_3, " %u", FUNC_1(VAR_4 + 2)));
    break;
   default:
    break;
  }
 } else {
  FUNC_2((VAR_3, "%s", FUNC_5(VAR_1, "Option %u", *VAR_4)));
  switch (*VAR_4) {
  case 32:
  case 33:
  case 34:
  case 35:
   if (VAR_6 < 3) {
    FUNC_2((VAR_3, " optlen too short"));
    return VAR_6;
   }
   if (*(VAR_4 + 2) < 10){
    FUNC_2((VAR_3, " %s", VAR_0[*(VAR_4 + 2)]));
    for (VAR_7 = 0; VAR_7 < VAR_6 - 3; VAR_7++)
     FUNC_2((VAR_3, " %d", *(VAR_4 + 3 + VAR_7)));
   }
   break;
  case 36:
   if (VAR_6 > 2) {
    FUNC_2((VAR_3, " 0x"));
    for (VAR_7 = 0; VAR_7 < VAR_6 - 2; VAR_7++)
     FUNC_2((VAR_3, "%02x", *(VAR_4 + 2 + VAR_7)));
   }
   break;
  case 37:
   for (VAR_7 = 0; VAR_7 < VAR_6 - 2; VAR_7++)
    FUNC_2((VAR_3, " %d", *(VAR_4 + 2 + VAR_7)));
   break;
  case 38:
   if (VAR_6 > 2) {
    FUNC_2((VAR_3, " 0x"));
    for (VAR_7 = 0; VAR_7 < VAR_6 - 2; VAR_7++)
     FUNC_2((VAR_3, "%02x", *(VAR_4 + 2 + VAR_7)));
   }
   break;
  case 39:
   if (VAR_6 > 2) {
    FUNC_2((VAR_3, " 0x"));
    for (VAR_7 = 0; VAR_7 < VAR_6 - 2; VAR_7++)
     FUNC_2((VAR_3, "%02x", *(VAR_4 + 2 + VAR_7)));
   }
   break;
  case 40:
   if (VAR_6 > 2) {
    FUNC_2((VAR_3, " 0x"));
    for (VAR_7 = 0; VAR_7 < VAR_6 - 2; VAR_7++)
     FUNC_2((VAR_3, "%02x", *(VAR_4 + 2 + VAR_7)));
   }
   break;
  case 41:
   if (VAR_6 == 4)
    FUNC_2((VAR_3, " %u", FUNC_1(VAR_4 + 2)));
   else
    FUNC_2((VAR_3, " optlen != 4"));
   break;
  case 42:
   if (VAR_6 == 4)
    FUNC_2((VAR_3, " %u", FUNC_1(VAR_4 + 2)));
   else
    FUNC_2((VAR_3, " optlen != 4"));
   break;
  case 43:
   if (VAR_6 == 6)
    FUNC_2((VAR_3, " %u", FUNC_1(VAR_4 + 2)));
   else if (VAR_6 == 4)
    FUNC_2((VAR_3, " %u", FUNC_0(VAR_4 + 2)));
   else
    FUNC_2((VAR_3, " optlen != 4 or 6"));
   break;
  case 44:
   if (VAR_6 > 2) {
    FUNC_2((VAR_3, " "));
    for (VAR_7 = 0; VAR_7 < VAR_6 - 2; VAR_7++)
     FUNC_2((VAR_3, "%02x", *(VAR_4 + 2 + VAR_7)));
   }
   break;
  }
 }

 return VAR_6;
trunc:
 FUNC_2((VAR_3, "%s", VAR_2));
 return 0;
}
