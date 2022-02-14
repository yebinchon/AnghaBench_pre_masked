
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,char*,...) ;

void FUNC_2(char *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4 = *(int *)VAR_2;

 switch (VAR_4) {
 case 1:
  FUNC_1(VAR_0, VAR_1, "1X");
  break;
 case 2:
  FUNC_1(VAR_0, VAR_1, "4X");
  break;
 case 4:
  FUNC_1(VAR_0, VAR_1, "8X");
  break;
 case 8:
  FUNC_1(VAR_0, VAR_1, "12X");
  break;
 case 16:
  FUNC_1(VAR_0, VAR_1, "2X");
  break;
 default:
  FUNC_0("bad width %d", VAR_4);
  FUNC_1(VAR_0, VAR_1, "undefined (%d)", VAR_4);
  break;
 }
}
