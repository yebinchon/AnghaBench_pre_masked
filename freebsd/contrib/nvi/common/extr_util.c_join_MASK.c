
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

char *
FUNC_3(
 char *VAR_0,
 char *VAR_1)
{
 char *VAR_2;

 if (VAR_0[0] == '\0' || VAR_1[0] == '/')
  return FUNC_1(VAR_1);
 (void)FUNC_0(&VAR_2, VAR_0[FUNC_2(VAR_0)-1] == '/' ?
     "%s%s" : "%s/%s", VAR_0, VAR_1);
 return VAR_2;
}
