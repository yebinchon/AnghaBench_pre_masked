
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* var_map ;
typedef int tree ;
struct TYPE_4__ {int* partition_to_compact; int var_partition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline tree FUNC_2 (var_map VAR_2, int VAR_3)
{
  int VAR_4;
  VAR_4 = FUNC_0 (VAR_2->var_partition, VAR_3);
  if (VAR_2->partition_to_compact)
    VAR_4 = VAR_2->partition_to_compact[VAR_4];
  if (VAR_4 == VAR_0)
    return VAR_1;

  return FUNC_1 (VAR_2, VAR_4);
}
