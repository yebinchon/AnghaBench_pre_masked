
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char SesDiagPageCodes ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;

__attribute__((used)) static void
FUNC_0(char *VAR_3, int VAR_4, SesDiagPageCodes VAR_5, int VAR_6)
{


 if (VAR_6 == VAR_0) {
  VAR_3[0] = VAR_1;
  VAR_3[1] = 1;
  VAR_3[2] = VAR_5;
 } else {
  VAR_3[0] = VAR_2;
  VAR_3[1] = 0x10;
  VAR_3[2] = VAR_5;
 }
 VAR_3[3] = VAR_4 >> 8;
 VAR_3[4] = VAR_4 & 0xff;
 VAR_3[5] = 0;
}
