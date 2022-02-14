
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*,size_t) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static size_t
FUNC_4(char *VAR_1, const char *VAR_2)
{
 size_t VAR_3;

 VAR_3 = 0;
 if (VAR_2 == ((void*)0))
  return (0);
 if (VAR_2[0] == '-')
  return (0);
 if (FUNC_3(VAR_2, ".") == 0 || FUNC_3(VAR_2, "..") == 0)
  return (0);
 while (VAR_2[VAR_3] && (FUNC_1(VAR_2[VAR_3]) || FUNC_2(VAR_2[VAR_3]) ||
     VAR_2[VAR_3] == '.' || VAR_2[VAR_3] == '_' || VAR_2[VAR_3] == '-' ||
     VAR_2[VAR_3] == '+') && VAR_3 < VAR_0 - 1)
  VAR_3++;
 FUNC_0(VAR_2, VAR_1, VAR_3);
 VAR_1[VAR_3] = '\0';
 return (VAR_3);
}
