
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 char* FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,struct stat*) ;
 int VAR_0 ;
 int * VAR_1 ;

char *
FUNC_3(const char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  char *VAR_4 = FUNC_0(VAR_1[VAR_3], "/", VAR_2);
  struct stat VAR_5;

  if (FUNC_2(VAR_4, &VAR_5) != -1)
   return VAR_4;

  FUNC_1(VAR_4);
 }

 return ((void*)0);
}
