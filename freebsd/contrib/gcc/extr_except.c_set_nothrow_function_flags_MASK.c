
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_2__ {int all_throwers_are_sibcalls; } ;
typedef int TREE_NOTHROW ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 () ;

unsigned int
FUNC_7 (void)
{
  rtx VAR_4;




  if (FUNC_1 (VAR_1))
    return 0;

  TREE_NOTHROW (VAR_5) = 1;







  VAR_0->all_throwers_are_sibcalls = 1;

  if (! VAR_3)
    return 0;

  for (VAR_4 = FUNC_6 (); VAR_4; VAR_4 = FUNC_2 (VAR_4))
    if (FUNC_5 (VAR_4))
      {
        TREE_NOTHROW (VAR_6) = 0;

 if (!FUNC_0 (VAR_4) || !FUNC_3 (VAR_4))
   {
     VAR_0->all_throwers_are_sibcalls = 0;
     return 0;
   }
      }

  for (VAR_4 = VAR_2; VAR_4;
       VAR_4 = FUNC_4 (VAR_4, 1))
    if (FUNC_5 (VAR_4))
      {
        TREE_NOTHROW (VAR_7) = 0;

 if (!FUNC_0 (VAR_4) || !FUNC_3 (VAR_4))
   {
     VAR_0->all_throwers_are_sibcalls = 0;
     return 0;
   }
      }
  return 0;
}
