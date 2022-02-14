
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct loop {TYPE_1__* single_exit; } ;
struct TYPE_2__ {scalar_t__ dest; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3 (struct loop *VAR_1, tree VAR_2)
{

  if (FUNC_1 (VAR_2) != VAR_0
      || FUNC_0 (VAR_2) != 1
      || FUNC_2 (VAR_2) != VAR_1->single_exit->dest)
    return 0;

  return 1;
}
