
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* stmt_ann_t ;
struct TYPE_3__ {scalar_t__ has_volatile_ops; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_5 (int ) ;

__attribute__((used)) static bool
FUNC_6 (tree VAR_5)
{
  tree VAR_6, VAR_7;
  stmt_ann_t VAR_8;

  if (FUNC_2 (VAR_5) == VAR_1)
    return !FUNC_1 (FUNC_0 (VAR_5));

  if (FUNC_2 (VAR_5) != VAR_0)
    return 0;

  VAR_6 = FUNC_3 (VAR_5, 0);
  VAR_7 = FUNC_3 (VAR_5, 1);
  VAR_8 = FUNC_5 (VAR_5);



  if (VAR_8->has_volatile_ops)
    return 0;



  if (!VAR_4
      && !FUNC_4 (VAR_5, VAR_3))
    return 0;




  return (VAR_4
   && FUNC_2 (VAR_6) == VAR_2)
  || (FUNC_2 (VAR_7) == VAR_2
      && !FUNC_1 (VAR_7));
}
