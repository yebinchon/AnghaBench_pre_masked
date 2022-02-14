
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
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*) ;

void
FUNC_4(char *VAR_1, char *VAR_2, DesData *VAR_3)
{
 char VAR_4[256];
 DesData VAR_5;
 DES_key_schedule VAR_6;
 int VAR_7,VAR_8,VAR_9;
 size_t VAR_10;

 FUNC_2(&VAR_5,0,sizeof(VAR_5));
 FUNC_2(VAR_4,0,sizeof(VAR_4));
 for (VAR_10=0,VAR_9=0;VAR_10<FUNC_3(VAR_1)/2;VAR_10++,VAR_9+=2) {
  if (VAR_1[VAR_9] > '9')
   VAR_7 = VAR_1[VAR_9] - 'A' + 10;
  else
   VAR_7 = VAR_1[VAR_9] - '0';
  if (VAR_1[VAR_9+1] > '9')
   VAR_8 = VAR_1[VAR_9+1] - 'A' + 10;
  else
   VAR_8 = VAR_1[VAR_9+1] - '0';
  VAR_4[VAR_10] = VAR_7*16 +VAR_8;
 }
 FUNC_1(VAR_3, &VAR_6);
 FUNC_0(VAR_4, VAR_2, FUNC_3(VAR_1) / 2, &VAR_6, &VAR_5, VAR_0);
 VAR_2[FUNC_3(VAR_1)/2] = '\0';
}
