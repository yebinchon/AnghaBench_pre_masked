
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* devclass_t ;
struct TYPE_3__ {int maxunit; int ** devices; } ;



int
FUNC_0(devclass_t VAR_0, int VAR_1)
{
 if (VAR_0 == ((void*)0))
  return (VAR_1);
 while (VAR_1 < VAR_0->maxunit && VAR_0->devices[VAR_1] != ((void*)0))
  VAR_1++;
 return (VAR_1);
}
