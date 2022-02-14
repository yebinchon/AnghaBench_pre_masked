
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ basic_block ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 TYPE_1__* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_9 (basic_block VAR_4, basic_block VAR_5)
{
  if (FUNC_1 (VAR_4) != FUNC_1 (VAR_5))
    return 0;


  return (FUNC_8 (VAR_4)
   && FUNC_6 (VAR_4) == VAR_5
   && FUNC_5 (VAR_5) == 1
   && VAR_4 != VAR_5

   && !(FUNC_7 (VAR_4)->flags & VAR_0)
   && VAR_4 != VAR_1 && VAR_5 != VAR_2


   && (!FUNC_2 (FUNC_0 (VAR_4))
       || (VAR_3
    ? FUNC_4 (FUNC_0 (VAR_4)) : FUNC_3 (FUNC_0 (VAR_4)))));
}
