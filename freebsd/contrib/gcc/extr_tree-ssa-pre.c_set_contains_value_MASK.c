
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef int tree ;
struct TYPE_4__ {scalar_t__ length; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static bool
FUNC_2 (value_set_t VAR_0, tree VAR_1)
{

  if (FUNC_0 (VAR_1))
    return 1;

  if (!VAR_0 || VAR_0->length == 0)
    return 0;

  return FUNC_1 (VAR_0, VAR_1);
}
