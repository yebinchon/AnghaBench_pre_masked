
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {scalar_t__ truncated_to_mode; scalar_t__ truncation_label; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_8 (rtx VAR_4)
{
  enum machine_mode VAR_5;

  if (FUNC_0 (VAR_4) == VAR_1 && FUNC_5 (FUNC_6 (VAR_4)))
    {
      enum machine_mode VAR_6 = FUNC_1 (FUNC_6 (VAR_4));
      VAR_5 = FUNC_1 (VAR_4);

      if (FUNC_3 (VAR_6) <= FUNC_3 (VAR_5))
 return;

      if (FUNC_7 (FUNC_2 (VAR_5),
     FUNC_2 (VAR_6)))
 return;

      VAR_4 = FUNC_6 (VAR_4);
    }


  else if (FUNC_5 (VAR_4) && FUNC_4 (VAR_4) < VAR_0)
    VAR_5 = FUNC_1 (VAR_4);
  else
    return;

  if (VAR_3[FUNC_4 (VAR_4)].truncated_to_mode == 0
      || VAR_3[FUNC_4 (VAR_4)].truncation_label < VAR_2
      || (FUNC_3 (VAR_5)
   < FUNC_3 (VAR_3[FUNC_4 (VAR_4)].truncated_to_mode)))
    {
      VAR_3[FUNC_4 (VAR_4)].truncated_to_mode = VAR_5;
      VAR_3[FUNC_4 (VAR_4)].truncation_label = VAR_2;
    }
}
