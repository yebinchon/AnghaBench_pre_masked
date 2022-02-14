
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ispsoftc_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,char const*,...) ;

void
FUNC_2(ispsoftc_t *VAR_3, const char *VAR_4, int VAR_5, void *VAR_6)
{
 char VAR_7[VAR_2];
 int VAR_8, VAR_9, VAR_10;
 uint8_t *VAR_11 = VAR_6;

 FUNC_1(VAR_3, VAR_0, "%s index %d=>", VAR_4, VAR_5);
 for (VAR_7[0] = 0, VAR_8 = VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  VAR_7[0] = 0;
  FUNC_0(VAR_7, VAR_2, "  ");
  for (VAR_10 = 0; VAR_10 < (VAR_1 >> 2); VAR_10++) {
   FUNC_0(VAR_7, VAR_2, "%s %02x", VAR_7, VAR_11[VAR_8++] & 0xff);
  }
  FUNC_1(VAR_3, VAR_0, "%s", VAR_7);
 }
}
