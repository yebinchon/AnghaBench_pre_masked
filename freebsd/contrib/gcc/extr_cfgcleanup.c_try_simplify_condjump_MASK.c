
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int rtx ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_25__ {scalar_t__ next_bb; int succs; } ;
struct TYPE_24__ {int flags; TYPE_2__* dest; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (scalar_t__,char*,int,int) ;
 int FUNC_12 (int ,int ,int ) ;
 TYPE_1__* FUNC_13 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 TYPE_2__* FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_19 (basic_block VAR_4)
{
  basic_block VAR_5, VAR_6, VAR_7;
  edge VAR_8, VAR_9;
  rtx VAR_10;


  if (FUNC_3 (VAR_4->succs) != 2)
    return 0;



  VAR_10 = FUNC_0 (VAR_4);
  if (!FUNC_7 (VAR_10))
    return 0;

  VAR_9 = FUNC_4 (VAR_4);
  VAR_8 = FUNC_2 (VAR_4);




  VAR_5 = VAR_9->dest;
  if (!FUNC_14 (VAR_5)
      || VAR_5->next_bb == VAR_2
      || !FUNC_5 (VAR_5))
    return 0;
  VAR_6 = FUNC_15 (VAR_5);
  if (FUNC_1 (VAR_5) != FUNC_1 (VAR_6)
      || (VAR_8->flags & VAR_0))
    return 0;



  VAR_7 = VAR_8->dest;

  if (VAR_7 == VAR_2
      || !FUNC_9 (VAR_5, VAR_7))
    return 0;


  if (!FUNC_12 (VAR_10, FUNC_8 (VAR_6), 0))
    return 0;

  if (VAR_3)
    FUNC_11 (VAR_3, "Simplifying condjump %i around jump %i\n",
      FUNC_6 (VAR_10), FUNC_6 (FUNC_0 (VAR_5)));




  VAR_8 = FUNC_13 (VAR_8,
      VAR_7);
  VAR_9 = FUNC_13 (VAR_9,
          VAR_6);
  VAR_8->flags |= VAR_1;
  VAR_9->flags &= ~VAR_1;
  FUNC_17 (VAR_4);


  FUNC_10 (VAR_5);
  FUNC_16 (VAR_8);
  FUNC_18 (VAR_4);

  return 1;
}
