
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {struct TYPE_4__* previous; scalar_t__ declared_in_block; } ;
typedef TYPE_1__ cxx_binding ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool
FUNC_5 (tree VAR_2, tree *VAR_3)
{


  cxx_binding *VAR_4 = FUNC_3 (VAR_2);
  if (VAR_4 && VAR_4->declared_in_block
      && FUNC_2 (FUNC_0 (VAR_4)) == VAR_1)
      return 1;







  while (VAR_4
   && FUNC_4 (FUNC_0 (VAR_4)) == VAR_0
   && (FUNC_1 (FUNC_0 (VAR_4))))
      VAR_4 = VAR_4->previous;
  if (VAR_4)
      *VAR_3 = FUNC_0 (VAR_4);
  return 0;
}
