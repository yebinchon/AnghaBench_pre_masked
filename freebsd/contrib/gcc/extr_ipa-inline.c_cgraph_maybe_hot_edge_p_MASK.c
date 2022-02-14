
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgraph_edge {int count; } ;
struct TYPE_2__ {int sum_max; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static bool
FUNC_1 (struct cgraph_edge *VAR_3)
{
  if (VAR_2 && VAR_1
      && (VAR_3->count
   <= VAR_2->sum_max / FUNC_0 (VAR_0)))
    return 0;
  return 1;
}
