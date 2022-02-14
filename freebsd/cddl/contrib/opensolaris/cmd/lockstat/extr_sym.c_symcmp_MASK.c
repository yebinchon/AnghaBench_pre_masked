
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t addr; } ;
typedef TYPE_1__ syment_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 uintptr_t VAR_2 = ((syment_t *)VAR_0)->addr;
 uintptr_t VAR_3 = ((syment_t *)VAR_1)->addr;

 if (VAR_2 < VAR_3)
  return (-1);
 if (VAR_2 > VAR_3)
  return (1);
 return (0);
}
