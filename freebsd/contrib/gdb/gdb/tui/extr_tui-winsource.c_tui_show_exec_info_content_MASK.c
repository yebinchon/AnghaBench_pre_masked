
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct tui_gen_win_info* execution_info; } ;
struct TYPE_6__ {TYPE_2__ source_info; } ;
struct tui_win_info {TYPE_3__ detail; } ;
struct TYPE_4__ {int simple_string; } ;
struct tui_win_element {TYPE_1__ which_element; } ;
struct tui_gen_win_info {int content_size; int content_in_use; scalar_t__* content; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct tui_gen_win_info*) ;
 int FUNC_2 (int ) ;

void
FUNC_3 (struct tui_win_info * VAR_1)
{
  struct tui_gen_win_info * VAR_2 = VAR_1->detail.source_info.execution_info;
  int VAR_3;

  FUNC_2 (VAR_2->handle);
  FUNC_1 (VAR_2);
  for (VAR_3 = 1; (VAR_3 <= VAR_2->content_size); VAR_3++)
    FUNC_0 (VAR_2->handle,
        VAR_3,
        0,
        ((struct tui_win_element *)
  VAR_2->content[VAR_3 - 1])->which_element.simple_string);
  FUNC_1 (VAR_2);
  VAR_2->content_in_use = VAR_0;
}
