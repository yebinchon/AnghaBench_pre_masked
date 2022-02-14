
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,unsigned char*,int) ;
 scalar_t__ FUNC_1 (char,char*,char*,unsigned char*) ;
 scalar_t__ FUNC_2 (char,char*,char*,unsigned char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

char *
FUNC_6(char *VAR_0, char VAR_1, char *VAR_2, char *VAR_3)
{
     int VAR_4;
     unsigned char VAR_5[20];
     char VAR_6[3];

     FUNC_3(3);

     VAR_4 = 0;
     if(FUNC_5(VAR_0, "5") == 0 && FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5) == 0)
   VAR_4 = 16;
     else
     if(FUNC_5(VAR_0, "7") == 0 && FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5) == 0)
   VAR_4 = 20;

     if(VAR_4) {
   FUNC_4(VAR_6, "%.2s", VAR_2);
   return FUNC_0(VAR_6, VAR_5, VAR_4);
     }

     return ((void*)0);
}
