
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* var_map ;
typedef scalar_t__ tree ;
struct TYPE_3__ {scalar_t__* partition_to_var; int * ref_count; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2 (var_map VAR_1, tree VAR_2, bool VAR_3)
{
  int VAR_4;





  VAR_4 = FUNC_0 (VAR_2);
  if (VAR_3 && VAR_1->ref_count)
    VAR_1->ref_count[VAR_4]++;

  if (VAR_1->partition_to_var[VAR_4] == VAR_0)
    VAR_1->partition_to_var[FUNC_0 (VAR_2)] = VAR_2;
}
