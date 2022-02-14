
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int tmp ;


 int VAR_0 ;
 char* FUNC_0 (char*,unsigned char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,unsigned char*,int) ;

char *
FUNC_5(char *VAR_1, uint VAR_2)
{
     int VAR_3;
     unsigned char VAR_4[1024];

     if(VAR_2 > sizeof(VAR_4))
   return ((void*)0);

     if((VAR_3 = FUNC_2("/dev/random", VAR_0)) != -1) {
   FUNC_4(VAR_3, VAR_4, VAR_2);
   FUNC_1(VAR_3);
   return FUNC_0(VAR_1, VAR_4, VAR_2);
     }
     FUNC_3("/dev/random");

     return ((void*)0);
}
