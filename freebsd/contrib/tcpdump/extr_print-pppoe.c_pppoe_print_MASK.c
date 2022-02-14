
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int) ;

u_int
FUNC_5(netdissect_options *VAR_5, register const u_char *VAR_6, u_int VAR_7)
{
 uint16_t VAR_8, VAR_9, VAR_10, VAR_11;
 u_int VAR_12;
 const u_char *VAR_13, *VAR_14;

 if (VAR_7 < VAR_1) {
  FUNC_1((VAR_5, "truncated-pppoe %u", VAR_7));
  return (VAR_7);
 }
 VAR_7 -= VAR_1;
 VAR_13 = VAR_6;
 FUNC_2(*VAR_13, VAR_1);
 VAR_8 = (VAR_13[0] & 0xF0) >> 4;
 VAR_9 = (VAR_13[0] & 0x0F);
 VAR_10 = VAR_13[1];
 VAR_11 = FUNC_0(VAR_13 + 2);
 VAR_12 = FUNC_0(VAR_13 + 4);
 VAR_14 = VAR_13 + VAR_1;

 if (VAR_8 != 1) {
  FUNC_1((VAR_5, " [ver %d]",VAR_8));
 }
 if (VAR_9 != 1) {
  FUNC_1((VAR_5, " [type %d]",VAR_9));
 }

 FUNC_1((VAR_5, "PPPoE %s", FUNC_4(VAR_3, "PAD-%x", VAR_10)));
 if (VAR_10 == VAR_2 && VAR_12 > 1484 - VAR_1) {
  FUNC_1((VAR_5, " [len %u!]",VAR_12));
 }
 if (VAR_12 > VAR_7) {
  FUNC_1((VAR_5, " [len %u > %u!]", VAR_12, VAR_7));
  VAR_12 = VAR_7;
 }
 if (VAR_11) {
  FUNC_1((VAR_5, " [ses 0x%x]", VAR_11));
 }

 if (VAR_10) {

  u_short VAR_15 = 0xffff, VAR_16;
  const u_char *VAR_17 = VAR_14;






  while (VAR_15 && VAR_17 < VAR_14 + VAR_12) {
   FUNC_2(*VAR_17, 4);
   VAR_15 = FUNC_0(VAR_17);
   VAR_16 = FUNC_0(VAR_17 + 2);
   VAR_17 += 4;


   if (VAR_16) {
    unsigned VAR_18 = 0, VAR_19 = 0;
    const u_char *VAR_20;
    char VAR_21[VAR_0];
    unsigned VAR_22 = 0;


    FUNC_2(*VAR_17, VAR_16);
    for (VAR_20 = VAR_17; VAR_20 < VAR_17 + VAR_16 && VAR_22 < VAR_0-1; VAR_20++)
     if (*VAR_20 >= 32 && *VAR_20 < 127) {
      VAR_21[VAR_22++] = *VAR_20;
      VAR_18++;
     } else {
      VAR_21[VAR_22++] = '.';
      VAR_19++;
     }
    VAR_21[VAR_22] = 0;

    if (VAR_18 > VAR_19) {
     FUNC_1((VAR_5, " [%s \"%*.*s\"]",
            FUNC_4(VAR_4, "TAG-0x%x", VAR_15),
            (int)VAR_22,
            (int)VAR_22,
            VAR_21));
    } else {

     FUNC_1((VAR_5, " [%s 0x", FUNC_4(VAR_4, "TAG-0x%x", VAR_15)));
     for (VAR_20=VAR_17; VAR_20<VAR_17+VAR_16; VAR_20++) {
      FUNC_1((VAR_5, "%02X", *VAR_20));
     }
     FUNC_1((VAR_5, "]"));
    }


   } else
    FUNC_1((VAR_5, " [%s]", FUNC_4(VAR_4,
        "TAG-0x%x", VAR_15)));

   VAR_17 += VAR_16;

  }
  return (0);
 } else {

  FUNC_1((VAR_5, " "));
  return (VAR_1 + FUNC_3(VAR_5, VAR_14, VAR_12));
 }

trunc:
 FUNC_1((VAR_5, "[|pppoe]"));
 return (VAR_1);
}
