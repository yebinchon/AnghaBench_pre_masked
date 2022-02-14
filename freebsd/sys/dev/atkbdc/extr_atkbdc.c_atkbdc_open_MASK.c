
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ioh0; int * port0; } ;
typedef int * KBDC ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;

KBDC
FUNC_0(int VAR_2)
{
    if (VAR_2 <= 0)
 VAR_2 = 0;
    if (VAR_2 >= VAR_0)
 return ((void*)0);
    if ((VAR_1[VAR_2]->port0 != ((void*)0))
 || (VAR_1[VAR_2]->ioh0 != 0))
 return (KBDC)VAR_1[VAR_2];
    return ((void*)0);
}
