
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

char *
FUNC_2(u_short VAR_2)
{
 static char VAR_3[1024];

 VAR_3[0] = '\0';

 if (VAR_2 & VAR_0) {
  VAR_2 &= ~VAR_0;
  FUNC_0(VAR_3, sizeof VAR_3, "ntponly");
 }

 if (VAR_2 & VAR_1) {
  VAR_2 &= ~VAR_1;
  FUNC_0(VAR_3, sizeof VAR_3, "source");
 }

 if (VAR_2) {
  char VAR_4[10];

  FUNC_1(VAR_4, sizeof VAR_4, "%0x", VAR_2);
  FUNC_0(VAR_3, sizeof VAR_3, VAR_4);
 }

 return VAR_3;
}
