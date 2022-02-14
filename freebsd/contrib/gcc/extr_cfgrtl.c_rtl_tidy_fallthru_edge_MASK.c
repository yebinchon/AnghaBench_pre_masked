
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_8__ {struct TYPE_8__* next_bb; } ;
struct TYPE_7__ {int flags; TYPE_2__* src; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_14 (edge VAR_1)
{
  rtx VAR_2;
  basic_block VAR_3 = VAR_1->src, VAR_4 = VAR_3->next_bb;
  for (VAR_2 = FUNC_4 (FUNC_0 (VAR_3)); VAR_2 != FUNC_1 (VAR_4); VAR_2 = FUNC_4 (VAR_2))
    if (FUNC_2 (VAR_2))
      return;




  VAR_2 = FUNC_0 (VAR_3);
  if (FUNC_3 (VAR_2)
      && FUNC_12 (VAR_2)
      && (FUNC_9 (VAR_2)
   || FUNC_13 (VAR_3)))
    {







      VAR_2 = FUNC_7 (VAR_2);



      while (FUNC_6 (VAR_2) && FUNC_5 (VAR_2) >= 0)
 VAR_2 = FUNC_7 (VAR_2);
    }


  if (VAR_2 != FUNC_7 (FUNC_1 (VAR_4)))
    FUNC_10 (FUNC_4 (VAR_2), FUNC_7 (FUNC_1 (VAR_4)));

  VAR_1->flags |= VAR_0;
}
