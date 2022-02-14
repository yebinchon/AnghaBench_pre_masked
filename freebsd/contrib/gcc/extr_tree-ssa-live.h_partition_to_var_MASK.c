
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* var_map ;
typedef int tree ;
struct TYPE_3__ {int* compact_to_partition; int * partition_to_var; int var_partition; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline tree
FUNC_1 (var_map VAR_0, int VAR_1)
{
  if (VAR_0->compact_to_partition)
    VAR_1 = VAR_0->compact_to_partition[VAR_1];
  VAR_1 = FUNC_0 (VAR_0->var_partition, VAR_1);
  return VAR_0->partition_to_var[VAR_1];
}
