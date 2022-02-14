
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int y; } ;
struct tui_gen_win_info {int height; int viewport_height; int type; int content_size; int * handle; scalar_t__* content; TYPE_3__ origin; } ;
struct TYPE_5__ {struct tui_gen_win_info* execution_info; } ;
struct TYPE_6__ {TYPE_1__ source_info; } ;
struct tui_win_info {struct tui_gen_win_info generic; TYPE_2__ detail; } ;
struct TYPE_8__ {int data_window; } ;
struct tui_win_element {TYPE_4__ which_element; } ;
typedef int WINDOW ;





 struct tui_win_info* VAR_0 ;
 int FUNC_0 (int *) ;
 struct tui_gen_win_info* FUNC_1 () ;
 int FUNC_2 (struct tui_gen_win_info*) ;
 int FUNC_3 (struct tui_win_info*) ;

__attribute__((used)) static void
FUNC_4 (struct tui_win_info * VAR_1, int VAR_2)
{
  int VAR_3;
  struct tui_gen_win_info * VAR_4;

  FUNC_2 (&VAR_1->generic);
  VAR_1->generic.height = VAR_2;
  if (VAR_2 > 1)
    VAR_1->generic.viewport_height = VAR_2 - 1;
  else
    VAR_1->generic.viewport_height = VAR_2;
  if (VAR_1 != VAR_0)
    VAR_1->generic.viewport_height--;


  switch (VAR_1->generic.type)
    {
    case 128:
    case 129:
      VAR_4 = VAR_1->detail.source_info.execution_info;
      FUNC_2 (VAR_4);
      VAR_4->height = VAR_2;
      VAR_4->origin.y = VAR_1->generic.origin.y;
      if (VAR_2 > 1)
 VAR_4->viewport_height = VAR_2 - 1;
      else
 VAR_4->viewport_height = VAR_2;
      if (VAR_1 != VAR_0)
 VAR_4->viewport_height--;

      if (FUNC_3 (VAR_1))
 {
   VAR_4 = FUNC_1 ();
   FUNC_2 (VAR_4);
   VAR_4->origin.y = VAR_1->generic.origin.y + VAR_2;
 }
      break;
    case 130:

      for (VAR_3 = 0; VAR_3 < VAR_1->generic.content_size; VAR_3++)
 {
   VAR_4 = (struct tui_gen_win_info *) & ((struct tui_win_element *)
        VAR_1->generic.content[VAR_3])->which_element.data_window;
   FUNC_0 (VAR_4->handle);
   VAR_4->handle = (WINDOW *) ((void*)0);
 }
      break;
    default:
      break;
    }
}
