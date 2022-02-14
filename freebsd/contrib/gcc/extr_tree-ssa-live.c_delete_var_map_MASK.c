
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* var_map ;
struct TYPE_4__ {struct TYPE_4__* ref_count; struct TYPE_4__* compact_to_partition; struct TYPE_4__* partition_to_compact; int var_partition; struct TYPE_4__* partition_to_var; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (var_map VAR_0)
{
  FUNC_0 (VAR_0->partition_to_var);
  FUNC_1 (VAR_0->var_partition);
  if (VAR_0->partition_to_compact)
    FUNC_0 (VAR_0->partition_to_compact);
  if (VAR_0->compact_to_partition)
    FUNC_0 (VAR_0->compact_to_partition);
  if (VAR_0->ref_count)
    FUNC_0 (VAR_0->ref_count);
  FUNC_0 (VAR_0);
}
