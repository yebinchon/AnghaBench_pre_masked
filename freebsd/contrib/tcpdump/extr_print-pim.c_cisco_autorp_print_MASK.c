
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int) ;

void
FUNC_6(netdissect_options *VAR_0,
                   register const u_char *VAR_1, register u_int VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;

 if (VAR_2 < 8)
  goto trunc;
 FUNC_2(VAR_1[0]);
 FUNC_1((VAR_0, " auto-rp "));
 VAR_3 = VAR_1[0];
 switch (VAR_3) {
 case 0x11:
  FUNC_1((VAR_0, "candidate-advert"));
  break;
 case 0x12:
  FUNC_1((VAR_0, "mapping"));
  break;
 default:
  FUNC_1((VAR_0, "type-0x%02x", VAR_3));
  break;
 }

 FUNC_2(VAR_1[1]);
 VAR_4 = VAR_1[1];

 FUNC_3(VAR_1[2], 2);
 FUNC_1((VAR_0, " Hold "));
 VAR_5 = FUNC_0(&VAR_1[2]);
 if (VAR_5)
  FUNC_5(VAR_0, FUNC_0(&VAR_1[2]));
 else
  FUNC_1((VAR_0, "FOREVER"));



 VAR_1 += 8; VAR_2 -= 8;
 while (VAR_4--) {
  int VAR_6;
  char VAR_7;

  if (VAR_2 < 4)
   goto trunc;
  FUNC_3(VAR_1[0], 4);
  FUNC_1((VAR_0, " RP %s", FUNC_4(VAR_0, VAR_1)));
  VAR_1 += 4;
  VAR_2 -= 4;
  if (VAR_2 < 1)
   goto trunc;
  FUNC_2(VAR_1[0]);
  switch (VAR_1[0] & 0x3) {
  case 0: FUNC_1((VAR_0, " PIMv?"));
   break;
  case 1: FUNC_1((VAR_0, " PIMv1"));
   break;
  case 2: FUNC_1((VAR_0, " PIMv2"));
   break;
  case 3: FUNC_1((VAR_0, " PIMv1+2"));
   break;
  }
  if (VAR_1[0] & 0xfc)
   FUNC_1((VAR_0, " [rsvd=0x%02x]", VAR_1[0] & 0xfc));
  VAR_1 += 1;
  VAR_2 -= 1;
  if (VAR_2 < 1)
   goto trunc;
  FUNC_2(VAR_1[0]);
  VAR_6 = VAR_1[0];
  VAR_1 += 1;
  VAR_2 -= 1;
  VAR_7 = ' ';
  for (; VAR_6; VAR_6--) {
   if (VAR_2 < 6)
    goto trunc;
   FUNC_3(VAR_1[0], 6);
   FUNC_1((VAR_0, "%c%s%s/%d", VAR_7, VAR_1[0] & 1 ? "!" : "",
             FUNC_4(VAR_0, &VAR_1[2]), VAR_1[1]));
   if (VAR_1[0] & 0x02) {
    FUNC_1((VAR_0, " bidir"));
   }
   if (VAR_1[0] & 0xfc) {
    FUNC_1((VAR_0, "[rsvd=0x%02x]", VAR_1[0] & 0xfc));
   }
   VAR_7 = ',';
   VAR_1 += 6; VAR_2 -= 6;
  }
 }
 return;

trunc:
 FUNC_1((VAR_0, "[|autorp]"));
 return;
}
