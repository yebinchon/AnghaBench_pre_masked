
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



 int VAR_0 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_6(netdissect_options *VAR_1,
           const u_char *VAR_2, int VAR_3)
{
 u_int VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;
 const u_char *VAR_9;
 int VAR_10;

 VAR_9 = VAR_2;
 if (VAR_3 < 1) {
  FUNC_1((VAR_1, "[|pap]"));
  return;
 } else if (VAR_3 < 4) {
  FUNC_2(*VAR_2);
  FUNC_1((VAR_1, "[|pap 0x%02x]", *VAR_2));
  return;
 }

 FUNC_2(*VAR_2);
 VAR_4 = *VAR_2;
 FUNC_1((VAR_1, "PAP, %s (0x%02x)",
           FUNC_5(VAR_0, "unknown", VAR_4),
           VAR_4));
 VAR_2++;

 FUNC_2(*VAR_2);
 FUNC_1((VAR_1, ", id %u", *VAR_2));
 VAR_2++;

 FUNC_3(*VAR_2, 2);
 VAR_5 = FUNC_0(VAR_2);
 VAR_2 += 2;

 if ((int)VAR_5 > VAR_3) {
  FUNC_1((VAR_1, ", length %u > packet size", VAR_5));
  return;
 }
 VAR_3 = VAR_5;
 if (VAR_3 < (VAR_2 - VAR_9)) {
  FUNC_1((VAR_1, ", length %u < PAP header length", VAR_3));
  return;
 }

 switch (VAR_4) {
 case 128:

  if (VAR_5 < 6)
   goto trunc;
  if (VAR_3 - (VAR_2 - VAR_9) < 1)
   return;
  FUNC_2(*VAR_2);
  VAR_6 = *VAR_2;
  VAR_2++;
  if (VAR_3 - (VAR_2 - VAR_9) < VAR_6)
   return;
  FUNC_1((VAR_1, ", Peer "));
  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
   FUNC_2(*VAR_2);
   FUNC_4(VAR_1, *VAR_2++);
  }

  if (VAR_3 - (VAR_2 - VAR_9) < 1)
   return;
  FUNC_2(*VAR_2);
  VAR_7 = *VAR_2;
  VAR_2++;
  if (VAR_3 - (VAR_2 - VAR_9) < VAR_7)
   return;
  FUNC_1((VAR_1, ", Name "));
  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
   FUNC_2(*VAR_2);
   FUNC_4(VAR_1, *VAR_2++);
  }
  break;
 case 130:
 case 129:





  if (VAR_5 < 5)
   goto trunc;
  if (VAR_3 - (VAR_2 - VAR_9) < 1)
   return;
  FUNC_2(*VAR_2);
  VAR_8 = *VAR_2;
  VAR_2++;
  if (VAR_3 - (VAR_2 - VAR_9) < VAR_8)
   return;
  FUNC_1((VAR_1, ", Msg "));
  for (VAR_10 = 0; VAR_10< VAR_8; VAR_10++) {
   FUNC_2(*VAR_2);
   FUNC_4(VAR_1, *VAR_2++);
  }
  break;
 }
 return;

trunc:
 FUNC_1((VAR_1, "[|pap]"));
}
