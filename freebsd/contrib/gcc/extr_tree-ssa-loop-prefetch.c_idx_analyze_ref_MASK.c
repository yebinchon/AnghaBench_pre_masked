
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct ar_data {int* step; int* delta; int stmt; int loop; } ;
struct TYPE_3__ {int step; int base; } ;
typedef TYPE_1__ affine_iv ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static bool
FUNC_9 (tree VAR_4, tree *VAR_5, void *VAR_6)
{
  struct ar_data *VAR_7 = VAR_6;
  tree VAR_8, VAR_9, VAR_10;
  HOST_WIDE_INT VAR_11, VAR_12 = 0, VAR_13 = 1;
  affine_iv VAR_14;

  if (FUNC_0 (VAR_4) == VAR_2
      || FUNC_0 (VAR_4) == VAR_0)
    return 0;

  if (!FUNC_7 (VAR_7->loop, VAR_7->stmt, *VAR_5, &VAR_14, 0))
    return 0;
  VAR_8 = VAR_14.base;
  VAR_9 = VAR_14.step;

  if (FUNC_8 (VAR_9))
    VAR_11 = 0;
  else
    {
      if (!FUNC_5 (VAR_9))
 return 0;
      VAR_11 = FUNC_6 (VAR_9);
    }

  if (FUNC_0 (VAR_8) == VAR_3
      && FUNC_5 (FUNC_1 (VAR_8, 1)))
    {
      VAR_12 = FUNC_6 (FUNC_1 (VAR_8, 1));
      VAR_8 = FUNC_1 (VAR_8, 0);
    }
  if (FUNC_5 (VAR_8))
    {
      VAR_12 += FUNC_6 (VAR_8);
      VAR_8 = FUNC_4 (FUNC_2 (VAR_8), 0);
    }

  if (FUNC_0 (VAR_4) == VAR_1)
    {
      VAR_10 = FUNC_3 (VAR_4);
      if (!FUNC_5 (VAR_10))
 return 0;
      VAR_13 = FUNC_6 (VAR_10);

      VAR_11 *= VAR_13;
      VAR_12 *= VAR_13;
    }

  *VAR_7->step += VAR_11;
  *VAR_7->delta += VAR_12;
  *VAR_5 = VAR_8;

  return 1;
}
