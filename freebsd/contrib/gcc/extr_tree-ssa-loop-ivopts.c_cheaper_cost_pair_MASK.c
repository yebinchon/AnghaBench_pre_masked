
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cost_pair {scalar_t__ cost; TYPE_1__* cand; } ;
struct TYPE_2__ {scalar_t__ cost; } ;



__attribute__((used)) static bool
FUNC_0 (struct cost_pair *VAR_0, struct cost_pair *VAR_1)
{
  if (!VAR_0)
    return 0;

  if (!VAR_1)
    return 1;

  if (VAR_0->cost < VAR_1->cost)
    return 1;

  if (VAR_0->cost > VAR_1->cost)
    return 0;


  if (VAR_0->cand->cost < VAR_1->cand->cost)
    return 1;

  return 0;
}
