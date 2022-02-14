
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_9__ {struct TYPE_9__* next_bb; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static basic_block
FUNC_8 (basic_block VAR_1, rtx VAR_2)
{
  if (VAR_2)
    {
      if (FUNC_2 (VAR_2) != VAR_1
   && FUNC_6 (VAR_2)



   && !FUNC_3 (VAR_2)
   && !FUNC_3 (FUNC_0 (VAR_1)))
 {

   FUNC_7 (!FUNC_6 (FUNC_0 (VAR_1))
        && FUNC_4 (FUNC_1 (VAR_1->next_bb)));
   return VAR_1;
 }
      else
 return 0;
    }
  else

    {
      do
 {
   FUNC_7 (VAR_1 != VAR_0);

   VAR_1 = VAR_1->next_bb;
 }
      while (FUNC_5 (VAR_1) == FUNC_0 (VAR_1));

      return VAR_1;
    }
}
