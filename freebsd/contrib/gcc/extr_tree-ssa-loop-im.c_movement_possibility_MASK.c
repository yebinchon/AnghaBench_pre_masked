
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef enum move_pos { ____Placeholder_move_pos } move_pos ;
struct TYPE_2__ {scalar_t__ has_volatile_ops; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

enum move_pos
FUNC_8 (tree VAR_7)
{
  tree VAR_8, VAR_9;

  if (VAR_6
      && FUNC_1 (VAR_7) == VAR_0)
    {


      return VAR_3;
    }

  if (FUNC_1 (VAR_7) != VAR_1)
    return VAR_2;

  if (FUNC_6 (VAR_7))
    return VAR_2;

  if (FUNC_5 (VAR_7)->has_volatile_ops)
    return VAR_2;

  VAR_8 = FUNC_2 (VAR_7, 0);
  if (FUNC_1 (VAR_8) == VAR_5
      && FUNC_0 (VAR_8))
    return VAR_2;

  VAR_9 = FUNC_2 (VAR_7, 1);

  if (FUNC_3 (VAR_9))
    return VAR_2;

  if (FUNC_1 (VAR_8) != VAR_5
      || FUNC_7 (VAR_9))
    return VAR_4;

  if (FUNC_4 (VAR_7))
    {
      return VAR_4;
    }
  return VAR_3;
}
