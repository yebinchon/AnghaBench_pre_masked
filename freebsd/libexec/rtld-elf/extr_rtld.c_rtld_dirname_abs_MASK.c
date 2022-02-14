
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char*) ;
 int * FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, char *VAR_1)
{
 char *VAR_2;

 if (FUNC_1(VAR_0, VAR_1) == ((void*)0))
  return (-1);
 FUNC_0("%s -> %s", VAR_0, VAR_1);
 VAR_2 = FUNC_2(VAR_1, '/');
 if (VAR_2 == ((void*)0))
  return (-1);
 if (VAR_2 != VAR_1)
  *VAR_2 = '\0';
 return (0);
}
