
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ begin; scalar_t__ end; int * stop_at; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 unsigned int VAR_1 ;

int
FUNC_2 (CORE_ADDR VAR_2, CORE_ADDR *VAR_3)
{
  unsigned int VAR_4;

  FUNC_1 ();
  if (VAR_3 != ((void*)0))
    {
      *VAR_3 = 0;
    }

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    if ((VAR_2 >= VAR_0[VAR_4].begin) && (VAR_2 < VAR_0[VAR_4].end))
      {
 if (VAR_0[VAR_4].stop_at != ((void*)0))
   return FUNC_0 (VAR_0[VAR_4].stop_at,
           VAR_2, VAR_3);
 else
   return 0;
      }

  return 0;
}
