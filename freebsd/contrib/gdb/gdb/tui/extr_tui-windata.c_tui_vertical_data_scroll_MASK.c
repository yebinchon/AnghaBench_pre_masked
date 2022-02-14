
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum tui_scroll_direction { ____Placeholder_tui_scroll_direction } tui_scroll_direction ;
struct TYPE_4__ {int regs_content_count; } ;
struct TYPE_5__ {TYPE_1__ data_display_info; } ;
struct TYPE_6__ {TYPE_2__ detail; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

void
FUNC_5 (enum tui_scroll_direction VAR_2, int VAR_3)
{
  int VAR_4;
  int VAR_5 = (-1);

  VAR_4 = FUNC_3 ();
  if (VAR_4 < VAR_1->detail.data_display_info.regs_content_count)
    VAR_5 = FUNC_4 (VAR_4);
  else
    {


    }

  if (VAR_5 >= 0)
    {
      int VAR_6, VAR_7;

      if (VAR_2 == VAR_0)
 VAR_5 += VAR_3;
      else
 VAR_5 -= VAR_3;
      FUNC_2 ((char *) ((void*)0));
      FUNC_0 ();
      FUNC_1 (VAR_5);
    }
}
