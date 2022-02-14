
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,char*) ;

void
FUNC_6(void)
{
 char *VAR_1, VAR_2[VAR_0 + 1];

 if (FUNC_3(VAR_2, sizeof(VAR_2)) == ((void*)0))
  FUNC_4(550, "Get current directory");
 else {
  if ((VAR_1 = FUNC_0(VAR_2)) == ((void*)0))
   FUNC_1("Ran out of memory.");
  FUNC_5(257, "\"%s\" is current directory.", VAR_1);
  FUNC_2(VAR_1);
 }
}
