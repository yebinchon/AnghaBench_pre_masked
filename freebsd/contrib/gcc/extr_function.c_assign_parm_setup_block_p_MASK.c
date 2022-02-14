
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assign_parm_data_one {scalar_t__ nominal_mode; int passed_type; int passed_mode; int promoted_mode; int entry_parm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static bool
FUNC_4 (struct assign_parm_data_one *VAR_6)
{
  if (VAR_6->nominal_mode == VAR_0)
    return 1;
  if (FUNC_1 (VAR_6->entry_parm) == VAR_2)
    return 1;
  return 0;
}
