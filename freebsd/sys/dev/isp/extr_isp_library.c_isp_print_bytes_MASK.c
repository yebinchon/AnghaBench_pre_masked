
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ispsoftc_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,int) ;
 int FUNC_1 (int *,int ,char*,...) ;

void
FUNC_2(ispsoftc_t *VAR_1, const char *VAR_2, int VAR_3, void *VAR_4)
{
 char VAR_5[128];
 uint8_t *VAR_6 = VAR_4;
 int VAR_7;

 if (VAR_2)
  FUNC_1(VAR_1, VAR_0, "%s:", VAR_2);
 VAR_7 = 0;
 VAR_5[0] = 0;
 while (VAR_7 < VAR_3) {
  int VAR_8, VAR_9;
  VAR_9 = VAR_7;
  for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
   FUNC_0(VAR_5, 128, "%s %02x", VAR_5, VAR_6[VAR_7++] & 0xff);
   if (VAR_7 == VAR_3) {
    break;
   }
  }
  FUNC_1(VAR_1, VAR_0, "0x%08x:%s", VAR_9, VAR_5);
  VAR_5[0] = 0;
 }
}
