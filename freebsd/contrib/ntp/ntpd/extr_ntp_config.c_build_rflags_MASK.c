
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

char *
FUNC_2(u_short VAR_15)
{
 static char VAR_16[1024];

 VAR_16[0] = '\0';

 if (VAR_15 & VAR_2) {
  VAR_15 &= ~VAR_2;
  FUNC_0(VAR_16, sizeof VAR_16, "flake");
 }

 if (VAR_15 & VAR_3) {
  VAR_15 &= ~VAR_3;
  FUNC_0(VAR_16, sizeof VAR_16, "ignore");
 }

 if (VAR_15 & VAR_4) {
  VAR_15 &= ~VAR_4;
  FUNC_0(VAR_16, sizeof VAR_16, "kod");
 }

 if (VAR_15 & VAR_7) {
  VAR_15 &= ~VAR_7;
  FUNC_0(VAR_16, sizeof VAR_16, "mssntp");
 }

 if (VAR_15 & VAR_5) {
  VAR_15 &= ~VAR_5;
  FUNC_0(VAR_16, sizeof VAR_16, "limited");
 }

 if (VAR_15 & VAR_6) {
  VAR_15 &= ~VAR_6;
  FUNC_0(VAR_16, sizeof VAR_16, "lptrap");
 }

 if (VAR_15 & VAR_9) {
  VAR_15 &= ~VAR_9;
  FUNC_0(VAR_16, sizeof VAR_16, "nomodify");
 }

 if (VAR_15 & VAR_10) {
  VAR_15 &= ~VAR_10;
  FUNC_0(VAR_16, sizeof VAR_16, "nomrulist");
 }

 if (VAR_15 & VAR_8) {
  VAR_15 &= ~VAR_8;
  FUNC_0(VAR_16, sizeof VAR_16, "noepeer");
 }

 if (VAR_15 & VAR_11) {
  VAR_15 &= ~VAR_11;
  FUNC_0(VAR_16, sizeof VAR_16, "nopeer");
 }

 if (VAR_15 & VAR_12) {
  VAR_15 &= ~VAR_12;
  FUNC_0(VAR_16, sizeof VAR_16, "noquery");
 }

 if (VAR_15 & VAR_0) {
  VAR_15 &= ~VAR_0;
  FUNC_0(VAR_16, sizeof VAR_16, "dontserve");
 }

 if (VAR_15 & VAR_13) {
  VAR_15 &= ~VAR_13;
  FUNC_0(VAR_16, sizeof VAR_16, "notrap");
 }

 if (VAR_15 & VAR_1) {
  VAR_15 &= ~VAR_1;
  FUNC_0(VAR_16, sizeof VAR_16, "notrust");
 }

 if (VAR_15 & VAR_14) {
  VAR_15 &= ~VAR_14;
  FUNC_0(VAR_16, sizeof VAR_16, "version");
 }

 if (VAR_15) {
  char VAR_17[10];

  FUNC_1(VAR_17, sizeof VAR_17, "%0x", VAR_15);
  FUNC_0(VAR_16, sizeof VAR_16, VAR_17);
 }

 if ('\0' == VAR_16[0]) {
  FUNC_0(VAR_16, sizeof VAR_16, "(none)");
 }

 return VAR_16;
}
