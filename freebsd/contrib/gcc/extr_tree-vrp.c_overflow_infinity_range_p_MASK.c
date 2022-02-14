
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int max; int min; } ;
typedef TYPE_1__ value_range_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool
FUNC_1 (value_range_t *VAR_1)
{
  return (VAR_1->type == VAR_0
   && (FUNC_0 (VAR_1->min)
       || FUNC_0 (VAR_1->max)));
}
