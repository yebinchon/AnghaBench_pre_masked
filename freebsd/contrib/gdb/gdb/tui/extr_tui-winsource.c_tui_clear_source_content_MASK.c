
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int content_size; scalar_t__* content; void* content_in_use; } ;
struct tui_win_info {TYPE_3__ generic; } ;
struct TYPE_4__ {void* is_exec_point; void* has_break; } ;
struct TYPE_5__ {TYPE_1__ source; } ;
struct tui_win_element {TYPE_2__ which_element; } ;


 void* VAR_0 ;
 int FUNC_0 (struct tui_win_info*,int) ;

void
FUNC_1 (struct tui_win_info * VAR_1, int VAR_2)
{
  if (VAR_1 != ((void*)0))
    {
      int VAR_3;

      VAR_1->generic.content_in_use = VAR_0;
      FUNC_0 (VAR_1, VAR_2);
      for (VAR_3 = 0; VAR_3 < VAR_1->generic.content_size; VAR_3++)
 {
   struct tui_win_element * VAR_4 =
   (struct tui_win_element *) VAR_1->generic.content[VAR_3];
   VAR_4->which_element.source.has_break = VAR_0;
   VAR_4->which_element.source.is_exec_point = VAR_0;
 }
    }
}
