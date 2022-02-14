
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int truncated_to_mode; scalar_t__ truncation_label; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static bool
FUNC_4 (enum machine_mode VAR_2, rtx VAR_3)
{
  enum machine_mode VAR_4 = VAR_1[FUNC_2 (VAR_3)].truncated_to_mode;

  if (VAR_4 == 0 || VAR_1[FUNC_2 (VAR_3)].truncation_label != VAR_0)
    return 0;
  if (FUNC_1 (VAR_4) <= FUNC_1 (VAR_2))
    return 1;
  if (FUNC_3 (FUNC_0 (VAR_2),
        FUNC_0 (VAR_4)))
    return 1;
  return 0;
}
