
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__** tui_win_content ;
struct tui_gen_win_info {int * handle; } ;
typedef int WINDOW ;
struct TYPE_5__ {struct tui_gen_win_info data_window; } ;
struct TYPE_6__ {TYPE_1__ which_element; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tui_gen_win_info*) ;

void
FUNC_3 (tui_win_content VAR_1, int VAR_2)
{
  int VAR_3;





  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
      struct tui_gen_win_info * VAR_4 = &VAR_1[VAR_3]->which_element.data_window;

      if (VAR_4 != (struct tui_gen_win_info *) ((void*)0))
 {
   FUNC_1 (VAR_4->handle);
   VAR_4->handle = (WINDOW *) ((void*)0);
   FUNC_2 (VAR_4);
 }
    }
  FUNC_0 (VAR_1,
        VAR_2,
        VAR_0);
}
