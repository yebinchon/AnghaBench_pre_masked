
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int var_ann_t ;
typedef int tree ;
typedef TYPE_1__* stmt_ann_t ;
struct TYPE_4__ {int has_volatile_ops; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_1__*,int,int ,int ,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11 (tree *VAR_3, stmt_ann_t VAR_4, int VAR_5)
{
  bool VAR_6;
  tree VAR_7, VAR_8;
  var_ann_t VAR_9;

  VAR_7 = *VAR_3;
  FUNC_8 (FUNC_2 (VAR_7));

  VAR_6 = FUNC_9 (VAR_7);



  FUNC_8 (VAR_6 || FUNC_0 (VAR_7));

  VAR_8 = (FUNC_3 (VAR_7) == VAR_1 ? FUNC_1 (VAR_7) : VAR_7);
  VAR_9 = FUNC_10 (VAR_8);



  if (FUNC_4 (VAR_8) && VAR_4)
    VAR_4->has_volatile_ops = 1;

  if (VAR_6)
    {

      if (VAR_5 & VAR_2)
 FUNC_6 (VAR_3);
      else
 FUNC_7 (VAR_3);
    }
  else
    FUNC_5 (VAR_7, VAR_4, VAR_5, VAR_0, 0, -1, 0);
}
