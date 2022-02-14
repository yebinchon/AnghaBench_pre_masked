
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0)
{
    char *VAR_1;
    int VAR_2;

    VAR_1 = VAR_0;
    VAR_2 = *VAR_1;
    if (VAR_2 == '"')
    {
 VAR_2 = *++VAR_1;
 if (!FUNC_1(VAR_2) && VAR_2 != '_' && VAR_2 != '$')
     return (0);
 while ((VAR_2 = *++VAR_1) != '"')
 {
     if (!FUNC_0(VAR_2) && VAR_2 != '_' && VAR_2 != '$')
  return (0);
 }
 return (1);
    }

    if (!FUNC_1(VAR_2) && VAR_2 != '_' && VAR_2 != '$')
 return (0);
    while ((VAR_2 = *++VAR_1) != 0)
    {
 if (!FUNC_0(VAR_2) && VAR_2 != '_' && VAR_2 != '$')
     return (0);
    }
    return (1);
}
