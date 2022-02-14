
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


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
 int FUNC_0 (char*,char*,size_t) ;

void
FUNC_1(char *VAR_10, size_t VAR_11, uint16_t VAR_12)
{
 int VAR_13 = 0;
 VAR_10[0] = '(';
 VAR_10[1] = 0;
 if (VAR_12 & VAR_2) {
  VAR_13++;
  FUNC_0(VAR_10, "EDisc", VAR_11);
 }
 if (VAR_12 & VAR_5) {
  if (VAR_13++) {
   FUNC_0(VAR_10, ",", VAR_11);
  }
  FUNC_0(VAR_10, "REC", VAR_11);
 }
 if (VAR_12 & VAR_8) {
  if (VAR_13++) {
   FUNC_0(VAR_10, ",", VAR_11);
  }
  FUNC_0(VAR_10, "RetryID", VAR_11);
 }
 if (VAR_12 & VAR_6) {
  if (VAR_13++) {
   FUNC_0(VAR_10, ",", VAR_11);
  }
  FUNC_0(VAR_10, "Retry", VAR_11);
 }
 if (VAR_12 & VAR_0) {
  if (VAR_13++) {
   FUNC_0(VAR_10, ",", VAR_11);
  }
  FUNC_0(VAR_10, "CNFRM", VAR_11);
 }
 if (VAR_12 & VAR_1) {
  if (VAR_13++) {
   FUNC_0(VAR_10, ",", VAR_11);
  }
  FUNC_0(VAR_10, "DOver", VAR_11);
 }
 if (VAR_12 & VAR_3) {
  if (VAR_13++) {
   FUNC_0(VAR_10, ",", VAR_11);
  }
  FUNC_0(VAR_10, "INI", VAR_11);
 }
 if (VAR_12 & VAR_7) {
  if (VAR_13++) {
   FUNC_0(VAR_10, ",", VAR_11);
  }
  FUNC_0(VAR_10, "TGT", VAR_11);
 }
 if (VAR_12 & VAR_4) {
  if (VAR_13++) {
   FUNC_0(VAR_10, ",", VAR_11);
  }
  FUNC_0(VAR_10, "RdXfrDis", VAR_11);
 }
 if (VAR_12 & VAR_9) {
  if (VAR_13++) {
   FUNC_0(VAR_10, ",", VAR_11);
  }
  FUNC_0(VAR_10, "XfrDis", VAR_11);
 }
 FUNC_0(VAR_10, ")", VAR_11);
}
