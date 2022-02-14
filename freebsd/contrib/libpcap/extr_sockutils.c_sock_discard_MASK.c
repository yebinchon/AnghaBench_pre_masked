
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCKET ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int ,char*,int) ;

int FUNC_2(SOCKET VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{


 char VAR_6[32768];
 while (VAR_3 > 32768)
 {
  if (FUNC_1(VAR_2, VAR_6, 32768, VAR_0, VAR_4, VAR_5) == -1)
   return -1;

  VAR_3 -= 32768;
 }





 if (VAR_3)
 {
  if (FUNC_1(VAR_2, VAR_6, VAR_3, VAR_0, VAR_4, VAR_5) == -1)
   return -1;
 }

 FUNC_0("I'm currently discarding data\n");

 return 0;
}
