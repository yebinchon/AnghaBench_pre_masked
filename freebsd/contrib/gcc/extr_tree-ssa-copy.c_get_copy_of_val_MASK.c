
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_4__ {scalar_t__ value; scalar_t__ mem_ref; } ;
typedef TYPE_1__ prop_value_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline prop_value_t *
FUNC_3 (tree VAR_2)
{
  prop_value_t *VAR_3 = &VAR_1[FUNC_1 (VAR_2)];

  if (VAR_3->value == VAR_0
      && !FUNC_2 (FUNC_0 (VAR_2)))
    {


      VAR_3->value = VAR_2;
      VAR_3->mem_ref = VAR_0;
    }

  return VAR_3;
}
