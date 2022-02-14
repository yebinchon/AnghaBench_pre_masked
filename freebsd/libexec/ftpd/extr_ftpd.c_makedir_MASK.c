
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*,...) ;

void
FUNC_7(char *VAR_2)
{
 char *VAR_3;

 FUNC_0("mkdir", VAR_2);
 if (VAR_0 && VAR_1)
  FUNC_6(550, "Operation not permitted.");
 else if (FUNC_4(VAR_2, 0777) < 0)
  FUNC_5(550, VAR_2);
 else {
  if ((VAR_3 = FUNC_1(VAR_2)) == ((void*)0))
   FUNC_2("Ran out of memory.");
  FUNC_6(257, "\"%s\" directory created.", VAR_3);
  FUNC_3(VAR_3);
 }
}
