
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char**,int ,double,int,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int volatile*) ;

int
FUNC_4(int VAR_1, char **VAR_2)
{
 volatile int VAR_3 = 0;
 int VAR_4;
 double VAR_5 = 250.5;

 while (FUNC_3(&VAR_3) == 0)
  continue;

 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  char *VAR_6, *VAR_7, *VAR_8, *VAR_9;

  VAR_5 *= 1.78;
  VAR_6 = VAR_4 % 2 == 1 ? "true" : "false";
  VAR_7 = VAR_4 % 2 == 0 ? "true" : "false";
  VAR_9 = VAR_4 == 7 ? "ignore" : "print";

  FUNC_1(&VAR_8, VAR_0, VAR_5, VAR_4, VAR_6, VAR_7, VAR_9);
  FUNC_0(VAR_8);
  FUNC_2(VAR_8);
 }

 FUNC_0("{\"finished\": true}");

 return (0);
}
