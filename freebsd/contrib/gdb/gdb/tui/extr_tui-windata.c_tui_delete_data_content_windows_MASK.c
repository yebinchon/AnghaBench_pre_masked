
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__** tui_win_content ;
struct tui_gen_win_info {int is_visible; int * handle; } ;
typedef int WINDOW ;
struct TYPE_6__ {int content_size; scalar_t__ content; } ;
struct TYPE_8__ {TYPE_2__ generic; } ;
struct TYPE_5__ {struct tui_gen_win_info data_window; } ;
struct TYPE_7__ {TYPE_1__ which_element; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int *) ;

void
FUNC_1 (void)
{
  int VAR_2;
  struct tui_gen_win_info * VAR_3;

  for (VAR_2 = 0; (VAR_2 < VAR_1->generic.content_size); VAR_2++)
    {
      VAR_3 = &((tui_win_content)
        VAR_1->generic.content)[VAR_2]->which_element.data_window;
      FUNC_0 (VAR_3->handle);
      VAR_3->handle = (WINDOW *) ((void*)0);
      VAR_3->is_visible = VAR_0;
    }
}
