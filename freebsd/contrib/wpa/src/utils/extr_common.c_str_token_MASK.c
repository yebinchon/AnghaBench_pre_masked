
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const*,char const**) ;

char * FUNC_1(char *VAR_0, const char *VAR_1, char **VAR_2)
{
 char *VAR_3 = (char *) FUNC_0(VAR_0, VAR_1, (const char **) VAR_2);

 if (VAR_3 && **VAR_2)
  *(*VAR_2)++ = '\0';

 return VAR_3;
}
