
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;

int
FUNC_5(int VAR_1, char *VAR_2[])
{
 int VAR_3;

 while ((VAR_3 = FUNC_2(VAR_1, VAR_2, "s:")) != -1) {
  switch (VAR_3) {
  case 's':
   return (FUNC_4(VAR_2[0], FUNC_0(VAR_0)));
  default:
   FUNC_3(VAR_2[0]);
   FUNC_1(1);
  }
 }
 FUNC_3(VAR_2[0]);
 FUNC_1(1);
}
