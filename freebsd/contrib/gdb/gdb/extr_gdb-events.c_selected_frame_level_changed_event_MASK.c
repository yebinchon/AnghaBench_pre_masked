
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* selected_frame_level_changed ) (int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

void
FUNC_2 (int VAR_3)
{
  if (VAR_1)
    FUNC_0 (VAR_2, "selected_frame_level_changed_event\n");
  if (!VAR_0->selected_frame_level_changed)
    return;
  VAR_0->selected_frame_level_changed (VAR_3);
}
