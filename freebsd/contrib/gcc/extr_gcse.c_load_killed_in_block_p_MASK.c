
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {size_t index; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_6 (basic_block VAR_4, int VAR_5, rtx VAR_6, int VAR_7)
{
  rtx VAR_8 = VAR_3[VAR_4->index];


  if (FUNC_2 (VAR_6))
    return 0;

  while (VAR_8)
    {
      rtx VAR_9;

      if ((VAR_7
    && FUNC_1 (FUNC_4 (VAR_8, 0)) < VAR_5)
   || (! VAR_7
       && FUNC_1 (FUNC_4 (VAR_8, 0)) > VAR_5))
 {
   VAR_8 = FUNC_4 (VAR_8, 1);
   continue;
 }

      VAR_9 = FUNC_4 (VAR_8, 0);




      if (FUNC_0 (VAR_9))
 return 1;






      VAR_0 = VAR_6;
      VAR_1 = 0;
      FUNC_5 (FUNC_3 (VAR_9), VAR_2, ((void*)0));
      if (VAR_1)
 return 1;
      VAR_8 = FUNC_4 (VAR_8, 1);
    }
  return 0;
}
