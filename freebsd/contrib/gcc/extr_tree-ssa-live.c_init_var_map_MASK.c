
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* var_map ;
typedef int tree ;
struct _var_map {int dummy; } ;
struct TYPE_3__ {int num_partitions; int partition_size; int * ref_count; int * compact_to_partition; int * partition_to_compact; int * partition_to_var; int var_partition; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

var_map
FUNC_3 (int VAR_0)
{
  var_map VAR_1;

  VAR_1 = (var_map) FUNC_2 (sizeof (struct _var_map));
  VAR_1->var_partition = FUNC_1 (VAR_0);
  VAR_1->partition_to_var
       = (tree *)FUNC_2 (VAR_0 * sizeof (tree));
  FUNC_0 (VAR_1->partition_to_var, 0, VAR_0 * sizeof (tree));

  VAR_1->partition_to_compact = ((void*)0);
  VAR_1->compact_to_partition = ((void*)0);
  VAR_1->num_partitions = VAR_0;
  VAR_1->partition_size = VAR_0;
  VAR_1->ref_count = ((void*)0);
  return VAR_1;
}
