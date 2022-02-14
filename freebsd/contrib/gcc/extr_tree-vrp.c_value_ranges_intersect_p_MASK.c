
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int max; int min; } ;
typedef TYPE_1__ value_range_t ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static inline bool
FUNC_1 (value_range_t *VAR_0, value_range_t *VAR_1)
{
  return (FUNC_0 (VAR_1->min, VAR_0) == 1
   || FUNC_0 (VAR_1->max, VAR_0) == 1
   || FUNC_0 (VAR_0->min, VAR_1) == 1
   || FUNC_0 (VAR_0->max, VAR_1) == 1);
}
