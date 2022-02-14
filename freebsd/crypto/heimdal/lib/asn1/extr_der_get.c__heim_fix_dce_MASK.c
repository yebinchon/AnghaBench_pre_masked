
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;

int
FUNC_0(size_t VAR_1, size_t *VAR_2)
{
    if(VAR_1 == VAR_0)
 return 1;
    if(*VAR_2 < VAR_1)
 return -1;
    *VAR_2 = VAR_1;
    return 0;
}
