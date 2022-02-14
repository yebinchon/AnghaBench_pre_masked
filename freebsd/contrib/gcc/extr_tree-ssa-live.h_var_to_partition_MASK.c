
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* var_map ;
typedef TYPE_2__* var_ann_t ;
typedef int tree ;
struct TYPE_7__ {scalar_t__ out_of_ssa_tag; } ;
struct TYPE_6__ {int* partition_to_compact; int var_partition; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int ) ;

__attribute__((used)) static inline int
FUNC_5 (var_map VAR_2, tree VAR_3)
{
  var_ann_t VAR_4;
  int VAR_5;

  if (FUNC_1 (VAR_3) == VAR_1)
    {
      VAR_5 = FUNC_3 (VAR_2->var_partition, FUNC_0 (VAR_3));
      if (VAR_2->partition_to_compact)
 VAR_5 = VAR_2->partition_to_compact[VAR_5];
    }
  else
    {
      VAR_4 = FUNC_4 (VAR_3);
      if (VAR_4->out_of_ssa_tag)
 VAR_5 = FUNC_2 (VAR_4);
      else
        VAR_5 = VAR_0;
    }
  return VAR_5;
}
