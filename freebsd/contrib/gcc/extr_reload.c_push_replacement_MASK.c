
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replacement {int what; int mode; scalar_t__ subreg_loc; int * where; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct replacement* VAR_2 ;

__attribute__((used)) static void
FUNC_0 (rtx *VAR_3, int VAR_4, enum machine_mode VAR_5)
{
  if (VAR_1)
    {
      struct replacement *VAR_6 = &VAR_2[VAR_0++];
      VAR_6->what = VAR_4;
      VAR_6->where = VAR_3;
      VAR_6->subreg_loc = 0;
      VAR_6->mode = VAR_5;
    }
}
