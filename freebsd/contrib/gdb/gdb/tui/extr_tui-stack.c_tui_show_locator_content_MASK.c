
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int locator; } ;
struct tui_win_element {TYPE_1__ which_element; } ;
struct tui_gen_win_info {int content_in_use; int * handle; scalar_t__* content; } ;
typedef int WINDOW ;


 int VAR_0 ;
 struct tui_gen_win_info* FUNC_0 () ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (struct tui_gen_win_info*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

void
FUNC_9 (void)
{
  char *VAR_1;
  struct tui_gen_win_info * VAR_2;

  VAR_2 = FUNC_0 ();

  if (VAR_2 != ((void*)0) && VAR_2->handle != (WINDOW *) ((void*)0))
    {
      struct tui_win_element * VAR_3;

      VAR_3 = (struct tui_win_element *) VAR_2->content[0];

      VAR_1 = FUNC_1 (&VAR_3->which_element.locator);
      FUNC_5 (VAR_2->handle, 0, 0);
      FUNC_7 (VAR_2->handle);
      FUNC_3 (VAR_2->handle, VAR_1);
      FUNC_4 (VAR_2->handle);
      FUNC_6 (VAR_2->handle);
      FUNC_2 (VAR_2);
      FUNC_5 (VAR_2->handle, 0, 0);
      FUNC_8 (VAR_1);
      VAR_2->content_in_use = VAR_0;
    }
}
