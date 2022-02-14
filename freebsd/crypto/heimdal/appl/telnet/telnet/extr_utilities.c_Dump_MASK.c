
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,...) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_3(char VAR_4, unsigned char *VAR_5, int VAR_6)
{

    unsigned char *VAR_7;
    int VAR_8;

    VAR_8 = 0;

    while (VAR_6) {

 FUNC_1(VAR_1, "%c 0x%x\t", VAR_4, VAR_8);
 VAR_7 = VAR_5;
 if (VAR_2) {
     VAR_5 = VAR_5 + FUNC_2(VAR_6, 32/2);
     while (VAR_7 < VAR_5) {
  FUNC_1(VAR_1, "%c%.2x",
      (((*VAR_7)&0xff) == 0xff) ? '*' : ' ',
      (*VAR_7)&0xff);
  VAR_7++;
     }
     VAR_6 -= 32/2;
     VAR_8 += 32/2;
 } else {
     VAR_5 = VAR_5 + FUNC_2(VAR_6, 32);
     while (VAR_7 < VAR_5) {
  FUNC_1(VAR_1, "%.2x", (*VAR_7)&0xff);
  VAR_7++;
     }
     VAR_6 -= 32;
     VAR_8 += 32;
 }
 if (VAR_1 == VAR_3) {
     FUNC_1(VAR_1, "\r\n");
 } else {
     FUNC_1(VAR_1, "\n");
 }
 if (VAR_6 < 0) {
     FUNC_0(VAR_1);
     return;
 }

    }
    FUNC_0(VAR_1);
}
