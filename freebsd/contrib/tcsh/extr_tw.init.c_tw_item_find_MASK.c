
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t nlist; int ** list; } ;
typedef int Char ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_1__ VAR_0 ;

Char *
FUNC_1(Char *VAR_1)
{
    size_t VAR_2;

    if (VAR_0.list == ((void*)0) || VAR_1 == ((void*)0))
 return ((void*)0);

    for (VAR_2 = 0; VAR_2 < VAR_0.nlist; VAR_2++)
 if (VAR_0.list[VAR_2] != ((void*)0) && FUNC_0(VAR_0.list[VAR_2], VAR_1) == 0)
     return VAR_0.list[VAR_2];
    return ((void*)0);
}
