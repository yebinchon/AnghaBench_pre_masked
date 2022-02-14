
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef int tree ;
struct TYPE_3__ {int values; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_2 (value_set_t VAR_0, tree VAR_1)
{
  if (!VAR_0->values)
    return 0;

  return FUNC_1 (VAR_0->values, FUNC_0 (VAR_1));
}
