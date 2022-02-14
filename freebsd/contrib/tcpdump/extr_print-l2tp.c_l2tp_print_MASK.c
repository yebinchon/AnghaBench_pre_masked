
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int VAR_9 ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int const*,int) ;
 int VAR_10 ;

void
FUNC_5(netdissect_options *VAR_11, const u_char *VAR_12, u_int VAR_13)
{
 const u_char *VAR_14 = VAR_12;
 u_int VAR_15 = 0;
 uint16_t VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 uint16_t VAR_21;

 VAR_17 = VAR_18 = VAR_19 = VAR_20 = VAR_0;

 FUNC_2(*VAR_14, 2);
 if ((FUNC_0(VAR_14) & VAR_8) == VAR_7) {
  FUNC_1((VAR_11, " l2tp:"));
 } else if ((FUNC_0(VAR_14) & VAR_8) == VAR_6) {
  FUNC_1((VAR_11, " l2f:"));
  return;
 } else {
  FUNC_1((VAR_11, " Unknown Version, neither L2F(1) nor L2TP(2)"));
  return;
 }

 FUNC_1((VAR_11, "["));
 if (FUNC_0(VAR_14) & VAR_5) {
  VAR_17 = VAR_9;
  FUNC_1((VAR_11, "T"));
 }
 if (FUNC_0(VAR_14) & VAR_1) {
  VAR_18 = VAR_9;
  FUNC_1((VAR_11, "L"));
 }
 if (FUNC_0(VAR_14) & VAR_4) {
  VAR_19 = VAR_9;
  FUNC_1((VAR_11, "S"));
 }
 if (FUNC_0(VAR_14) & VAR_2) {
  VAR_20 = VAR_9;
  FUNC_1((VAR_11, "O"));
 }
 if (FUNC_0(VAR_14) & VAR_3)
  FUNC_1((VAR_11, "P"));
 FUNC_1((VAR_11, "]"));

 VAR_14 += 2;
 VAR_15 += 2;

 if (VAR_18) {
  FUNC_2(*VAR_14, 2);
  VAR_21 = FUNC_0(VAR_14);
  VAR_14 += 2;
  VAR_15 += 2;
 } else {
  VAR_21 = 0;
 }

 FUNC_2(*VAR_14, 2);
 FUNC_1((VAR_11, "(%u/", FUNC_0(VAR_14)));
 VAR_14 += 2;
 VAR_15 += 2;
 FUNC_2(*VAR_14, 2);
 FUNC_1((VAR_11, "%u)", FUNC_0(VAR_14)));
 VAR_14 += 2;
 VAR_15 += 2;

 if (VAR_19) {
  FUNC_2(*VAR_14, 2);
  FUNC_1((VAR_11, "Ns=%u,", FUNC_0(VAR_14)));
  VAR_14 += 2;
  VAR_15 += 2;
  FUNC_2(*VAR_14, 2);
  FUNC_1((VAR_11, "Nr=%u", FUNC_0(VAR_14)));
  VAR_14 += 2;
  VAR_15 += 2;
 }

 if (VAR_20) {
  FUNC_2(*VAR_14, 2);
  VAR_16 = FUNC_0(VAR_14);
  VAR_14 += (2 + VAR_16);
  VAR_15 += (2 + VAR_16);
 }

 if (VAR_18) {
  if (VAR_13 < VAR_21) {
   FUNC_1((VAR_11, " Length %u larger than packet", VAR_21));
   return;
  }
  VAR_13 = VAR_21;
 }
 if (VAR_13 < VAR_15) {
  FUNC_1((VAR_11, " Length %u smaller than header length", VAR_13));
  return;
 }
 if (VAR_17) {
  if (!VAR_18) {
   FUNC_1((VAR_11, " No length"));
   return;
  }
  if (VAR_13 - VAR_15 == 0) {
   FUNC_1((VAR_11, " ZLB"));
  } else {
   FUNC_3(VAR_11, VAR_14, VAR_13 - VAR_15);
  }
 } else {
  FUNC_1((VAR_11, " {"));
  FUNC_4(VAR_11, VAR_14, VAR_13 - VAR_15);
  FUNC_1((VAR_11, "}"));
 }

 return;

 trunc:
 FUNC_1((VAR_11, "%s", VAR_10));
}
