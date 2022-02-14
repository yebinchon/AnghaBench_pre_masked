
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int decl_t ;
struct TYPE_2__ {scalar_t__ max_occ_cycle_num; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0,
       const void *VAR_1)
{
  if ((FUNC_0 (*(decl_t *) VAR_0)->max_occ_cycle_num)
      < (FUNC_0 (*(decl_t *) VAR_1)->max_occ_cycle_num))
    return 1;
  else if ((FUNC_0 (*(decl_t *) VAR_0)->max_occ_cycle_num)
    == (FUNC_0 (*(decl_t *) VAR_1)->max_occ_cycle_num))
    return 0;
  else
    return -1;
}
