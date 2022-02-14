
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char*,char const*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t*,int *,int ) ;

int FUNC_3(const char *VAR_0, const char *VAR_1,
   char *VAR_2, size_t VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6;
 size_t VAR_7;

 if (FUNC_0(&VAR_4, "%s/%s", VAR_0, VAR_1) < 0)
  return -1;

 for (VAR_5 = &VAR_4[0]; *VAR_5 != '\0'; VAR_5++)
  if (*VAR_5 == '/')
   *VAR_5 = '.';

 VAR_7 = VAR_3;
 VAR_6 = FUNC_2(&VAR_4[1], VAR_2, &VAR_7, ((void*)0), 0);
 FUNC_1(VAR_4);

 if (VAR_6 == -1)
  return -1;

 if (VAR_7 > 0 && VAR_2[VAR_7 - 1] == '\n')
  VAR_2[--VAR_7] = '\0';

 return VAR_7;
}
