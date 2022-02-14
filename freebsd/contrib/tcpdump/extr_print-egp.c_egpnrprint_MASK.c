
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct egp_packet {int egp_sourcenet; int egp_intgw; int egp_extgw; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int *,int*) ;

__attribute__((used)) static void
FUNC_6(netdissect_options *VAR_3,
           register const struct egp_packet *VAR_4, u_int VAR_5)
{
 register const uint8_t *VAR_6;
 uint32_t VAR_7;
 register uint32_t VAR_8;
 register u_int VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13;
 const char *VAR_14;

 VAR_7 = VAR_4->egp_sourcenet;
 if (FUNC_0(VAR_7)) {
  VAR_8 = VAR_7 & VAR_0;
  VAR_9 = 1;
 } else if (FUNC_1(VAR_7)) {
  VAR_8 = VAR_7 & VAR_1;
  VAR_9 = 2;
 } else if (FUNC_2(VAR_7)) {
  VAR_8 = VAR_7 & VAR_2;
  VAR_9 = 3;
 } else {
  VAR_8 = 0;
  VAR_9 = 0;
 }
 VAR_6 = (const uint8_t *)(VAR_4 + 1);
 VAR_5 -= sizeof(*VAR_4);

 VAR_13 = VAR_4->egp_intgw + VAR_4->egp_extgw;
 for (VAR_10 = 0; VAR_10 < VAR_13; ++VAR_10) {

  VAR_7 = 0;
  if (VAR_5 < 4 - VAR_9)
   goto trunc;
  FUNC_4(VAR_6[0], 4 - VAR_9);
  switch (VAR_9) {

  case 1:
   VAR_7 = *VAR_6++;

  case 2:
   VAR_7 = (VAR_7 << 8) | *VAR_6++;

  case 3:
   VAR_7 = (VAR_7 << 8) | *VAR_6++;
  }
  VAR_7 |= VAR_8;
  VAR_5 -= 4 - VAR_9;
  if (VAR_5 < 1)
   goto trunc;
  FUNC_4(VAR_6[0], 1);
  VAR_11 = *VAR_6++;
  VAR_5--;
  FUNC_3((VAR_3, " %s %s ",
         VAR_10 < (int)VAR_4->egp_intgw ? "int" : "ext",
         FUNC_5(VAR_3, &VAR_7)));

  VAR_14 = "";
  FUNC_3((VAR_3, "("));
  while (--VAR_11 >= 0) {
   if (VAR_5 < 2)
    goto trunc;
   FUNC_4(VAR_6[0], 2);
   FUNC_3((VAR_3, "%sd%d:", VAR_14, (int)*VAR_6++));
   VAR_14 = ", ";
   VAR_12 = *VAR_6++;
   VAR_5 -= 2;
   while (--VAR_12 >= 0) {

    if (VAR_5 < 1)
     goto trunc;
    FUNC_4(VAR_6[0], 1);
    VAR_7 = (uint32_t)*VAR_6++ << 24;
    VAR_5--;
    if (FUNC_1(VAR_7)) {
     if (VAR_5 < 1)
      goto trunc;
     FUNC_4(VAR_6[0], 1);
     VAR_7 |= (uint32_t)*VAR_6++ << 16;
     VAR_5--;
    } else if (!FUNC_0(VAR_7)) {
     if (VAR_5 < 2)
      goto trunc;
     FUNC_4(VAR_6[0], 2);
     VAR_7 |= (uint32_t)*VAR_6++ << 16;
     VAR_7 |= (uint32_t)*VAR_6++ << 8;
     VAR_5 -= 2;
    }
    FUNC_3((VAR_3, " %s", FUNC_5(VAR_3, &VAR_7)));
   }
  }
  FUNC_3((VAR_3, ")"));
 }
 return;
trunc:
 FUNC_3((VAR_3, "[|]"));
}
