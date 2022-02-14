
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {int loop_father; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (basic_block VAR_1, tree VAR_2)
{
  tree VAR_3;
  basic_block VAR_4;

  if (FUNC_1 (VAR_2) != VAR_0 || !FUNC_5 (VAR_2))
    return;

  VAR_3 = FUNC_0 (VAR_2);
  VAR_4 = FUNC_2 (VAR_3);
  FUNC_4 (!VAR_4
       || FUNC_3 (VAR_4->loop_father, VAR_1));
}
