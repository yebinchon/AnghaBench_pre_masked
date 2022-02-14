
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

int
FUNC_4(int VAR_0, char *VAR_1[])
{
 FILE *VAR_2;

 for (; *VAR_1 != ((void*)0); ++VAR_1) {
  if ((VAR_2 = FUNC_1(*VAR_1, "r")) == ((void*)0)) {
   FUNC_3(*VAR_1);
   return (1);
  }
  FUNC_2(VAR_2);
  (void)FUNC_0(VAR_2);
 }
 return (0);
}
