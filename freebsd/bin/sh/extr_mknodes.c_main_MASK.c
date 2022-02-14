
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 char* VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 char* FUNC_8 (int ) ;

int
FUNC_9(int VAR_2, char *VAR_3[])
{
 FILE *VAR_4;

 if (VAR_2 != 3)
  FUNC_0("usage: mknodes file");
 if ((VAR_4 = FUNC_3(VAR_3[1], "r")) == ((void*)0))
  FUNC_0("Can't open %s: %s", VAR_3[1], FUNC_8(VAR_0));
 while (FUNC_7(VAR_4)) {
  if (VAR_1[0] == ' ' || VAR_1[0] == '\t')
   FUNC_5();
  else if (VAR_1[0] != '\0')
   FUNC_6();
 }
 FUNC_2(VAR_4);
 FUNC_4(VAR_3[2]);
 FUNC_1(0);
}
