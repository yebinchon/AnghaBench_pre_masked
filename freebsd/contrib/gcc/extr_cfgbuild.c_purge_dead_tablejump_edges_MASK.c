
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * rtx ;
typedef int rtvec ;
typedef int edge_iterator ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_8__ {int succs; } ;
struct TYPE_7__ {int flags; int dest; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,size_t) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_15 (TYPE_1__*) ;
 int * FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17 (basic_block VAR_7, rtx VAR_8)
{
  rtx VAR_9 = FUNC_0 (VAR_7), VAR_10;
  rtvec VAR_11;
  int VAR_12;
  edge_iterator VAR_13;
  edge VAR_14;

  if (FUNC_2 (FUNC_4 (VAR_8)) == VAR_0)
    VAR_11 = FUNC_10 (FUNC_4 (VAR_8), 0);
  else
    VAR_11 = FUNC_10 (FUNC_4 (VAR_8), 1);

  for (VAR_12 = FUNC_3 (VAR_11) - 1; VAR_12 >= 0; --VAR_12)
    FUNC_14 (FUNC_9 (FUNC_5 (VAR_11, VAR_12), 0));




  if ((VAR_10 = FUNC_16 (VAR_9)) != ((void*)0)
       && FUNC_6 (VAR_10) == VAR_6
       && FUNC_2 (FUNC_7 (VAR_10)) == VAR_4
       && FUNC_2 (FUNC_9 (FUNC_7 (VAR_10), 2)) == VAR_5)
    FUNC_14 (FUNC_9 (FUNC_9 (FUNC_7 (VAR_10), 2), 0));

  for (VAR_13 = FUNC_13 (VAR_7->succs); (VAR_14 = FUNC_12 (VAR_13)); )
    {
      if (FUNC_1 (VAR_14->dest) & VAR_1)
 FUNC_8 (VAR_14->dest, FUNC_1 (VAR_14->dest)
       & ~(size_t) VAR_1);
      else if (!(VAR_14->flags & (VAR_2 | VAR_3)))
 {
   FUNC_15 (VAR_14);
   continue;
 }
      FUNC_11 (&VAR_13);
    }
}
