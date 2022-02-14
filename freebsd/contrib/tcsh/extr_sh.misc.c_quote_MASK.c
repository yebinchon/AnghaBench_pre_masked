
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char VAR_0 ;

Char *
FUNC_0(Char *VAR_1)
{
    Char *VAR_2 = VAR_1;

    if (!VAR_1)
 return (VAR_1);
    while (*VAR_2 != '\0') {





 if ((*VAR_2 & 0x80) == 0)

     *VAR_2 |= VAR_0;
 VAR_2++;
    }
    return (VAR_1);
}
