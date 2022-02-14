
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char*,char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;

char *
FUNC_4(char *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
  return (VAR_0);

 if (VAR_0 && *VAR_0) {
  if (FUNC_0(&VAR_2, "%s,%s", VAR_0, VAR_1) == -1)
   FUNC_1(1, "asprintf failed");
 } else
  VAR_2 = FUNC_3(VAR_1);

 if (VAR_0)
  FUNC_2(VAR_0);
 return (VAR_2);
}
