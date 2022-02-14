
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mntent_t ;


 char* FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (char*) ;

char *
FUNC_6(mntent_t *VAR_0, char *VAR_1)
{
  char *VAR_2 = FUNC_0(VAR_0, VAR_1);

  if (VAR_2) {

    char *VAR_3 = FUNC_1(VAR_0, VAR_1);

    if (VAR_3) {

      char *VAR_4 = FUNC_2(VAR_3, ',');


      if (!VAR_4)
 return FUNC_5(VAR_3);
      else {

 int VAR_5 = VAR_4 - VAR_3;
 char *VAR_6 = FUNC_4(VAR_5 + 1);
 FUNC_3(VAR_6, VAR_3, VAR_5);
 VAR_6[VAR_5] = '\0';
 return VAR_6;
      }
    }
  }
  return ((void*)0);
}
