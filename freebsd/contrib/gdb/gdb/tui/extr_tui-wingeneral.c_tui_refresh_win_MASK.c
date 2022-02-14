
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_2__** tui_win_content ;
struct tui_gen_win_info {scalar_t__ type; scalar_t__ content_size; int * handle; scalar_t__ content; } ;
typedef int WINDOW ;
struct TYPE_3__ {struct tui_gen_win_info data_window; } ;
struct TYPE_4__ {TYPE_1__ which_element; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

void
FUNC_1 (struct tui_gen_win_info * VAR_2)
{
  if (VAR_2->type == VAR_1 && VAR_2->content_size > 0)
    {
      int VAR_3;

      for (VAR_3 = 0; (VAR_3 < VAR_2->content_size); VAR_3++)
 {
   struct tui_gen_win_info * VAR_4;

   VAR_4 = &((tui_win_content)
        VAR_2->content)[VAR_3]->which_element.data_window;
   if (VAR_4 != ((void*)0)
       && VAR_4->handle != (WINDOW *) ((void*)0))
     FUNC_0 (VAR_4->handle);
 }
    }
  else if (VAR_2->type == VAR_0)
    {

    }
  else
    {
      if (VAR_2->handle != (WINDOW *) ((void*)0))
 FUNC_0 (VAR_2->handle);
    }

  return;
}
