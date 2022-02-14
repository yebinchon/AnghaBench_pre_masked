
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version_zpl; int version_spa; } ;


 TYPE_1__* VAR_0 ;

int
FUNC_0(int VAR_1)
{
 int VAR_2;
 int VAR_3 = -1;

 for (VAR_2 = 0; VAR_0[VAR_2].version_zpl; VAR_2++) {
  if (VAR_0[VAR_2].version_zpl >= VAR_1)
   return (VAR_0[VAR_2].version_spa);
 }

 return (VAR_3);
}
