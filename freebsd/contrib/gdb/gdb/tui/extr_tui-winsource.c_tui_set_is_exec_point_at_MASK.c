
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union tui_line_or_address {scalar_t__ addr; } ;
typedef TYPE_4__** tui_win_content ;
struct TYPE_10__ {int content_size; int content; } ;
struct tui_win_info {TYPE_5__ generic; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct TYPE_7__ {int is_exec_point; TYPE_1__ line_or_addr; } ;
struct TYPE_8__ {TYPE_2__ source; } ;
struct TYPE_9__ {TYPE_3__ which_element; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct tui_win_info*,int) ;

void
FUNC_2 (union tui_line_or_address VAR_2, struct tui_win_info * VAR_3)
{
  int VAR_4 = 0;
  int VAR_5;
  tui_win_content VAR_6 = (tui_win_content) VAR_3->generic.content;

  VAR_5 = 0;
  while (VAR_5 < VAR_3->generic.content_size)
    {
      int VAR_7;

      if (VAR_6[VAR_5]->which_element.source.line_or_addr.addr == VAR_2.addr)
        VAR_7 = VAR_1;
      else
 VAR_7 = VAR_0;
      if (VAR_7 != VAR_6[VAR_5]->which_element.source.is_exec_point)
        {
          VAR_4++;
          VAR_6[VAR_5]->which_element.source.is_exec_point = VAR_7;
          FUNC_1 (VAR_3, VAR_5 + 1);
        }
      VAR_5++;
    }
  if (VAR_4)
    FUNC_0 (&VAR_3->generic);
}
