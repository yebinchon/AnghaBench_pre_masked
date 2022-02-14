
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;


 int FUNC_0 (char*,int,char*,...) ;

const char *
FUNC_1(int VAR_0)
{
 static char VAR_1[6];

 switch (VAR_0) {
 case 1:
  (void)FUNC_0(VAR_1, sizeof(VAR_1), "RRQ");
  break;
 case 2:
  (void)FUNC_0(VAR_1, sizeof(VAR_1), "WRQ");
  break;
 default:
  (void)FUNC_0(VAR_1, sizeof(VAR_1), "(%d)", VAR_0);
  break;
 }

 return (VAR_1);
}
