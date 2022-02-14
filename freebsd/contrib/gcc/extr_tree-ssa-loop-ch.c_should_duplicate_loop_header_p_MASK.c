
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tree ;
struct loop {TYPE_1__* header; } ;
typedef int block_stmt_iterator ;
typedef TYPE_1__* basic_block ;
struct TYPE_10__ {int dest; } ;
struct TYPE_9__ {int succs; scalar_t__ aux; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_7__* FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct loop*,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_14 (basic_block VAR_2, struct loop *VAR_3,
    int *VAR_4)
{
  block_stmt_iterator VAR_5;
  tree VAR_6;



  if (VAR_2->aux)
    return 0;

  FUNC_9 (FUNC_0 (VAR_2->succs) > 0);
  if (FUNC_13 (VAR_2))
    return 0;
  if (FUNC_8 (VAR_3, FUNC_1 (VAR_2, 0)->dest)
      && FUNC_8 (VAR_3, FUNC_1 (VAR_2, 1)->dest))
    return 0;



  if (VAR_2 != VAR_3->header && !FUNC_12 (VAR_2))
    return 0;

  VAR_6 = FUNC_11 (VAR_2);
  if (FUNC_2 (VAR_6) != VAR_0)
    return 0;



  for (VAR_5 = FUNC_5 (VAR_2); !FUNC_3 (VAR_5); FUNC_4 (&VAR_5))
    {
      VAR_6 = FUNC_6 (VAR_5);

      if (FUNC_2 (VAR_6) == VAR_1)
 continue;

      if (FUNC_10 (VAR_6))
 return 0;

      *VAR_4 -= FUNC_7 (VAR_6);
      if (*VAR_4 < 0)
 return 0;
    }

  return 1;
}
