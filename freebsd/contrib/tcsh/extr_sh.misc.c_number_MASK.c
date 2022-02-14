
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 scalar_t__ FUNC_0 (char) ;

int
FUNC_1(Char *VAR_0)
{
    if (!VAR_0)
 return (0);
    if (*VAR_0 == '-') {
 VAR_0++;
 if (!FUNC_0(*VAR_0))
     return (0);
 VAR_0++;
    }
    while (*VAR_0 && FUNC_0(*VAR_0))
 VAR_0++;
    return (*VAR_0 == 0);
}
