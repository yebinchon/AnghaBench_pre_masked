
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* edge ;
typedef scalar_t__ basic_block ;
struct TYPE_6__ {int flags; TYPE_1__* dest; } ;
struct TYPE_5__ {scalar_t__ prev_bb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_0 (basic_block VAR_2, edge VAR_3, int VAR_4, int VAR_5, int VAR_6,
        int VAR_7, edge VAR_8)
{
  bool VAR_9;



  int VAR_10 = VAR_6 / 10;
  int VAR_11 = VAR_7 / 10;

  if (VAR_4 > VAR_6 + VAR_10)

    VAR_9 = 1;
  else if (VAR_4 < VAR_6 - VAR_10)

    VAR_9 = 0;
  else if (VAR_5 < VAR_7 - VAR_11)




    VAR_9 = 1;
  else if (VAR_5 > VAR_7 + VAR_11)

    VAR_9 = 0;
  else if (VAR_3->dest->prev_bb == VAR_2)


    VAR_9 = 1;
  else
    VAR_9 = 0;




  if (!VAR_9
      && VAR_1
      && VAR_8
      && (VAR_8->flags & VAR_0)
      && !(VAR_3->flags & VAR_0))
    VAR_9 = 1;

  return VAR_9;
}
