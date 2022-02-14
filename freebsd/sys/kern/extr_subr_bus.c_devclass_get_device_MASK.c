
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * device_t ;
typedef TYPE_1__* devclass_t ;
struct TYPE_3__ {int maxunit; int ** devices; } ;



device_t
FUNC_0(devclass_t VAR_0, int VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_1 < 0 || VAR_1 >= VAR_0->maxunit)
  return (((void*)0));
 return (VAR_0->devices[VAR_1]);
}
