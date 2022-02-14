
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ndigi; scalar_t__ lastrepeat; int * calls; } ;
typedef TYPE_1__ ax25_digi ;


 scalar_t__ FUNC_0 (int *,int *) ;

int FUNC_1(const ax25_digi *VAR_0, const ax25_digi *VAR_1)
{
 int VAR_2;

 if (VAR_0->ndigi != VAR_1->ndigi)
  return 1;

 if (VAR_0->lastrepeat != VAR_1->lastrepeat)
  return 1;

 for (VAR_2 = 0; VAR_2 < VAR_0->ndigi; VAR_2++)
  if (FUNC_0(&VAR_0->calls[VAR_2], &VAR_1->calls[VAR_2]) != 0)
   return 1;

 return 0;
}
