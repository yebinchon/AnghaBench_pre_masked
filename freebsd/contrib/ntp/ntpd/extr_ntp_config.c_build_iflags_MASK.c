
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;


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
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

char *
FUNC_2(u_int32 VAR_11)
{
 static char VAR_12[1024];

 VAR_12[0] = '\0';

 if (VAR_11 & VAR_9) {
  VAR_11 &= ~VAR_9;
  FUNC_0(VAR_12, sizeof VAR_12, "up");
 }

 if (VAR_11 & VAR_7) {
  VAR_11 &= ~VAR_7;
  FUNC_0(VAR_12, sizeof VAR_12, "ppp");
 }

 if (VAR_11 & VAR_3) {
  VAR_11 &= ~VAR_3;
  FUNC_0(VAR_12, sizeof VAR_12, "loopback");
 }

 if (VAR_11 & VAR_2) {
  VAR_11 &= ~VAR_2;
  FUNC_0(VAR_12, sizeof VAR_12, "broadcast");
 }

 if (VAR_11 & VAR_6) {
  VAR_11 &= ~VAR_6;
  FUNC_0(VAR_12, sizeof VAR_12, "multicast");
 }

 if (VAR_11 & VAR_0) {
  VAR_11 &= ~VAR_0;
  FUNC_0(VAR_12, sizeof VAR_12, "bcastopen");
 }

 if (VAR_11 & VAR_5) {
  VAR_11 &= ~VAR_5;
  FUNC_0(VAR_12, sizeof VAR_12, "mcastopen");
 }

 if (VAR_11 & VAR_10) {
  VAR_11 &= ~VAR_10;
  FUNC_0(VAR_12, sizeof VAR_12, "wildcard");
 }

 if (VAR_11 & VAR_4) {
  VAR_11 &= ~VAR_4;
  FUNC_0(VAR_12, sizeof VAR_12, "MCASTif");
 }

 if (VAR_11 & VAR_8) {
  VAR_11 &= ~VAR_8;
  FUNC_0(VAR_12, sizeof VAR_12, "IPv6privacy");
 }

 if (VAR_11 & VAR_1) {
  VAR_11 &= ~VAR_1;
  FUNC_0(VAR_12, sizeof VAR_12, "bcastxmit");
 }

 if (VAR_11) {
  char VAR_13[10];

  FUNC_1(VAR_13, sizeof VAR_13, "%0x", VAR_11);
  FUNC_0(VAR_12, sizeof VAR_12, VAR_13);
 }

 return VAR_12;
}
