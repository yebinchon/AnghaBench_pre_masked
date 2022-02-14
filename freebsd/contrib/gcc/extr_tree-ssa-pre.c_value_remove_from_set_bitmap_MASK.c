
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef int tree ;
struct TYPE_3__ {int values; int indexed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (value_set_t VAR_0, tree VAR_1)
{
  FUNC_2 (VAR_0->indexed);

  if (!VAR_0->values)
    return;

  FUNC_1 (VAR_0->values, FUNC_0 (VAR_1));
}
