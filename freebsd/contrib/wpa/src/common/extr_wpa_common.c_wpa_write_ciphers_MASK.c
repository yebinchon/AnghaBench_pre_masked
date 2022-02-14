
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_0 (char*,int,char*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;

int FUNC_2(char *VAR_10, char *VAR_11, int VAR_12, const char *VAR_13)
{
 char *VAR_14 = VAR_10;
 int VAR_15;

 if (VAR_12 & VAR_5) {
  VAR_15 = FUNC_0(VAR_14, VAR_11 - VAR_14, "%sCCMP-256",
      VAR_14 == VAR_10 ? "" : VAR_13);
  if (FUNC_1(VAR_11 - VAR_14, VAR_15))
   return -1;
  VAR_14 += VAR_15;
 }
 if (VAR_12 & VAR_7) {
  VAR_15 = FUNC_0(VAR_14, VAR_11 - VAR_14, "%sGCMP-256",
      VAR_14 == VAR_10 ? "" : VAR_13);
  if (FUNC_1(VAR_11 - VAR_14, VAR_15))
   return -1;
  VAR_14 += VAR_15;
 }
 if (VAR_12 & VAR_4) {
  VAR_15 = FUNC_0(VAR_14, VAR_11 - VAR_14, "%sCCMP",
      VAR_14 == VAR_10 ? "" : VAR_13);
  if (FUNC_1(VAR_11 - VAR_14, VAR_15))
   return -1;
  VAR_14 += VAR_15;
 }
 if (VAR_12 & VAR_6) {
  VAR_15 = FUNC_0(VAR_14, VAR_11 - VAR_14, "%sGCMP",
      VAR_14 == VAR_10 ? "" : VAR_13);
  if (FUNC_1(VAR_11 - VAR_14, VAR_15))
   return -1;
  VAR_14 += VAR_15;
 }
 if (VAR_12 & VAR_9) {
  VAR_15 = FUNC_0(VAR_14, VAR_11 - VAR_14, "%sTKIP",
      VAR_14 == VAR_10 ? "" : VAR_13);
  if (FUNC_1(VAR_11 - VAR_14, VAR_15))
   return -1;
  VAR_14 += VAR_15;
 }
 if (VAR_12 & VAR_0) {
  VAR_15 = FUNC_0(VAR_14, VAR_11 - VAR_14, "%sAES-128-CMAC",
      VAR_14 == VAR_10 ? "" : VAR_13);
  if (FUNC_1(VAR_11 - VAR_14, VAR_15))
   return -1;
  VAR_14 += VAR_15;
 }
 if (VAR_12 & VAR_2) {
  VAR_15 = FUNC_0(VAR_14, VAR_11 - VAR_14, "%sBIP-GMAC-128",
      VAR_14 == VAR_10 ? "" : VAR_13);
  if (FUNC_1(VAR_11 - VAR_14, VAR_15))
   return -1;
  VAR_14 += VAR_15;
 }
 if (VAR_12 & VAR_3) {
  VAR_15 = FUNC_0(VAR_14, VAR_11 - VAR_14, "%sBIP-GMAC-256",
      VAR_14 == VAR_10 ? "" : VAR_13);
  if (FUNC_1(VAR_11 - VAR_14, VAR_15))
   return -1;
  VAR_14 += VAR_15;
 }
 if (VAR_12 & VAR_1) {
  VAR_15 = FUNC_0(VAR_14, VAR_11 - VAR_14, "%sBIP-CMAC-256",
      VAR_14 == VAR_10 ? "" : VAR_13);
  if (FUNC_1(VAR_11 - VAR_14, VAR_15))
   return -1;
  VAR_14 += VAR_15;
 }
 if (VAR_12 & VAR_8) {
  VAR_15 = FUNC_0(VAR_14, VAR_11 - VAR_14, "%sNONE",
      VAR_14 == VAR_10 ? "" : VAR_13);
  if (FUNC_1(VAR_11 - VAR_14, VAR_15))
   return -1;
  VAR_14 += VAR_15;
 }

 return VAR_14 - VAR_10;
}
