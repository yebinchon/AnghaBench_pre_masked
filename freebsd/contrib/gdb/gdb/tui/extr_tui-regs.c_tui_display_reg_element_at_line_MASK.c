
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tui_win_content ;
struct TYPE_6__ {scalar_t__ regs_content; scalar_t__ regs_content_count; scalar_t__ data_content_count; } ;
struct TYPE_7__ {TYPE_2__ data_display_info; } ;
struct TYPE_5__ {int height; } ;
struct TYPE_8__ {TYPE_3__ detail; TYPE_1__ generic; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

void
FUNC_3 (int VAR_1, int VAR_2)
{
  if (VAR_0->detail.data_display_info.regs_content != (tui_win_content) ((void*)0) &&
      VAR_0->detail.data_display_info.regs_content_count > 0)
    {
      int VAR_3 = VAR_1;

      if (VAR_1 != 0 && VAR_2 != 0)
 {
   int VAR_4, VAR_5;

   VAR_4 = FUNC_2 ();
   VAR_5 = VAR_4 - (VAR_0->generic.height - 2);
   if (VAR_5 < 0)
     VAR_5 = 0;





   if (VAR_0->detail.data_display_info.data_content_count <= 0 &&
       VAR_2 > VAR_5)
     VAR_3 = FUNC_1 (VAR_5);
 }
      FUNC_0 (VAR_3);
    }
}
