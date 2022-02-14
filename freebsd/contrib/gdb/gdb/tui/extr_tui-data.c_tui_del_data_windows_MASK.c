
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__** tui_win_content ;
struct tui_gen_win_info {int is_visible; int * handle; } ;
typedef int WINDOW ;
struct TYPE_4__ {struct tui_gen_win_info data_window; } ;
struct TYPE_5__ {TYPE_1__ which_element; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1 (tui_win_content VAR_1, int VAR_2)
{
  int VAR_3;





  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
      struct tui_gen_win_info * VAR_4 = &VAR_1[VAR_3]->which_element.data_window;

      if (VAR_4 != (struct tui_gen_win_info *) ((void*)0))
 {
   FUNC_0 (VAR_4->handle);
   VAR_4->handle = (WINDOW *) ((void*)0);
   VAR_4->is_visible = VAR_0;
 }
    }
}
