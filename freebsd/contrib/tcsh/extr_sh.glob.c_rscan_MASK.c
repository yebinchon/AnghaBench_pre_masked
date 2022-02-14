
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Char ;


 void FUNC_0 (scalar_t__) ;

void
FUNC_1(Char **VAR_0, void (*VAR_1) (Char))
{
    Char *VAR_2;

    while ((VAR_2 = *VAR_0++) != ((void*)0))
 while (*VAR_2)
     (*VAR_1) (*VAR_2++);
}
