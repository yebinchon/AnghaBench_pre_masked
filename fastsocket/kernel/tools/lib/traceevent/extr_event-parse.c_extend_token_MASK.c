
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(char **VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3 = FUNC_1(*VAR_0, VAR_2);

 if (!VAR_3) {
  FUNC_0(*VAR_0);
  *VAR_0 = ((void*)0);
  return -1;
 }

 if (!*VAR_0)
  FUNC_3(VAR_3, VAR_1);
 else
  FUNC_2(VAR_3, VAR_1);
 *VAR_0 = VAR_3;

 return 0;
}
