
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int block_stmt_iterator ;
typedef TYPE_2__* basic_block ;
struct TYPE_17__ {int flags; } ;
struct TYPE_16__ {TYPE_1__* loop_father; } ;
struct TYPE_15__ {TYPE_2__* latch; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 TYPE_2__* FUNC_17 (TYPE_2__*) ;
 TYPE_6__* FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 scalar_t__ FUNC_20 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_21 (basic_block VAR_4, basic_block VAR_5)
{
  tree VAR_6;
  block_stmt_iterator VAR_7;
  tree VAR_8;

  if (!FUNC_19 (VAR_4))
    return 0;

  if (FUNC_18 (VAR_4)->flags & VAR_0)
    return 0;

  if (FUNC_17 (VAR_4) != VAR_5)
    return 0;

  if (!FUNC_16 (VAR_5))
    return 0;

  if (VAR_5 == VAR_1)
    return 0;



  VAR_6 = FUNC_12 (VAR_4);
  if (VAR_6 && FUNC_20 (VAR_6))
    return 0;


  if (VAR_6 && FUNC_6 (VAR_6) == VAR_2
      && FUNC_1 (FUNC_2 (VAR_6)))
    return 0;



  VAR_8 = FUNC_15 (VAR_5);
  if (VAR_8)
    {
      if (FUNC_14 ())
 return 0;

      for (; VAR_8; VAR_8 = FUNC_4 (VAR_8))
 if (!FUNC_11 (FUNC_5 (VAR_8))
     && !FUNC_13 (FUNC_5 (VAR_8), FUNC_3 (VAR_8, 0)))
   return 0;
    }


  for (VAR_7 = FUNC_9 (VAR_5); !FUNC_7 (VAR_7); FUNC_8 (&VAR_7))
    {
      VAR_6 = FUNC_10 (VAR_7);
      if (FUNC_6 (VAR_6) != VAR_2)
 break;
      if (!FUNC_0 (FUNC_2 (VAR_6)))
 return 0;
    }


  if (VAR_3
      && VAR_5->loop_father->latch == VAR_5)
    return 0;

  return 1;
}
