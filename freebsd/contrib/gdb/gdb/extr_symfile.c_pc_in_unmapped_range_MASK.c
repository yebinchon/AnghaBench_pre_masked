
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lma; } ;
typedef TYPE_1__ asection ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

CORE_ADDR
FUNC_2 (CORE_ADDR VAR_1, asection *VAR_2)
{


  int VAR_3;

  if (VAR_0)
    if (VAR_2 && FUNC_1 (VAR_2))
      {
 VAR_3 = FUNC_0 (VAR_2);
 if (VAR_2->lma <= VAR_1 && VAR_1 < VAR_2->lma + VAR_3)
   return 1;
      }
  return 0;
}
