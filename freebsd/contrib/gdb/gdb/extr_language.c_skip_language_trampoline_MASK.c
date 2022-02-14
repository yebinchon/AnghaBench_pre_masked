
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* skip_trampoline ) (scalar_t__) ;} ;
typedef scalar_t__ CORE_ADDR ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

CORE_ADDR
FUNC_1 (CORE_ADDR VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
      if (VAR_0[VAR_3]->skip_trampoline)
 {
   CORE_ADDR VAR_4 = (VAR_0[VAR_3]->skip_trampoline) (VAR_2);
   if (VAR_4)
     return VAR_4;
 }
    }

  return 0;
}
