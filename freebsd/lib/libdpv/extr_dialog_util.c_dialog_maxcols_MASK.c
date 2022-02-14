
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ws_col; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;

int
FUNC_2(void)
{

 if (VAR_4 && VAR_0 == ((void*)0))
  FUNC_1();
 else if (!VAR_4)
  FUNC_0();

 if (VAR_1 || VAR_2) {
  if (VAR_3)
   return (VAR_0->ws_col - 2);
  else
   return (VAR_0->ws_col);
 } else
  return (VAR_0->ws_col);
}
