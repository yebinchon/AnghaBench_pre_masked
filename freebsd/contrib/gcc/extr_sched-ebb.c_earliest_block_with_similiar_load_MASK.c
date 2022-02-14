
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {scalar_t__ index; struct TYPE_5__* aux; } ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static basic_block
FUNC_6 (basic_block VAR_2, rtx VAR_3)
{
  rtx VAR_4;
  basic_block VAR_5, VAR_6 = ((void*)0);

  for (VAR_4 = FUNC_3 (VAR_3);
       VAR_4;
       VAR_4 = FUNC_4 (VAR_4, 1))
    {
      rtx VAR_7 = FUNC_4 (VAR_4, 0);

      if (FUNC_1 (VAR_4) == VAR_1)
 {

   rtx VAR_8;

   for (VAR_8 = FUNC_2 (VAR_7);
        VAR_8;
        VAR_8 = FUNC_4 (VAR_8, 1))
     {
       rtx VAR_9 = FUNC_4 (VAR_8, 0);
       basic_block VAR_10 = FUNC_0 (VAR_9);

       if (FUNC_1 (VAR_8) == VAR_1)
  {
    if (VAR_6 != ((void*)0)
        && VAR_6->index < VAR_10->index)
      continue;


    if (FUNC_5 (VAR_9) != VAR_0)

      continue;

    for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->aux)
      if (VAR_10 == VAR_5)
        break;

    if (!VAR_5)

      VAR_6 = VAR_10;
  }
     }
 }
    }

  return VAR_6;
}
