
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; } ;
struct TYPE_4__ {TYPE_1__ generic; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;

int
FUNC_0 (int *VAR_2, int *VAR_3)
{
  if (!VAR_1 || (VAR_0 == ((void*)0)))
    {
      return 0;
    }

  *VAR_2 = VAR_0->generic.width;
  *VAR_3 = VAR_0->generic.height;
  return 1;
}
