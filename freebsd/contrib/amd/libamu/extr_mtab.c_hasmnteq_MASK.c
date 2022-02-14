
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mntent_t ;


 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;

char *
FUNC_2(mntent_t *VAR_0, char *VAR_1)
{
  if (VAR_0 && VAR_1) {
    if ( *VAR_1 ) {
      char *VAR_2 = FUNC_0(VAR_0, VAR_1);
      if ( VAR_2 ) {
 char *VAR_3 = VAR_2 + FUNC_1(VAR_1);
 if (*VAR_3 == '=')
   return ++VAR_3;
      }
    }
  }
  return ((void*)0);
}
