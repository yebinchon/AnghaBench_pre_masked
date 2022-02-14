
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i ;
typedef int buf ;
typedef char DesData ;
typedef int DES_key_schedule ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int,int *,char*,int ) ;
 int FUNC_1 (char*,int *) ;
 char* VAR_1 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*) ;

void
FUNC_4(char *VAR_2, char *VAR_3, DesData *VAR_4)
{
 char VAR_5[256];
 DesData VAR_6;
 DES_key_schedule VAR_7;
 int VAR_8,VAR_9,VAR_10;

 FUNC_2(&VAR_6,0,sizeof(VAR_6));
 FUNC_2(VAR_5,0,sizeof(VAR_5));
 VAR_10 = ((FUNC_3(VAR_2) + 7)/8)*8;
 FUNC_1(VAR_4, &VAR_7);
 FUNC_0(VAR_2, VAR_5, VAR_10, &VAR_7, &VAR_6, VAR_0);
 for (VAR_8=0,VAR_9=0;VAR_8<VAR_10;VAR_8++) {
  VAR_3[VAR_9++] = VAR_1[(VAR_5[VAR_8] & 0xf0) >> 4];
  VAR_3[VAR_9++] = VAR_1[(VAR_5[VAR_8] & 0x0f)];
 }
 VAR_3[VAR_9] = '\0';
}
