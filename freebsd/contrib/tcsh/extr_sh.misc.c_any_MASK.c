
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Char ;



int
FUNC_0(const char *VAR_0, Char VAR_1)
{
    if (!VAR_0)
 return (0);
    while (*VAR_0)
 if ((Char)*VAR_0++ == VAR_1)
     return (1);
    return (0);
}
