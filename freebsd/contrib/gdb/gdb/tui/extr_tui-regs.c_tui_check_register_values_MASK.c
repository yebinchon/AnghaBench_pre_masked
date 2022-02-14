
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tui_data_element {int highlight; int item_no; } ;
struct TYPE_11__ {struct tui_data_element data; } ;
struct tui_win_element {TYPE_5__ which_element; } ;
struct tui_gen_win_info {scalar_t__* content; } ;
struct tui_data_info {scalar_t__ regs_content_count; TYPE_4__** regs_content; int current_group; scalar_t__ display_regs; } ;
struct frame_info {int dummy; } ;
struct TYPE_8__ {struct tui_data_info data_display_info; } ;
struct TYPE_7__ {scalar_t__ is_visible; } ;
struct TYPE_12__ {TYPE_2__ detail; TYPE_1__ generic; } ;
struct TYPE_9__ {struct tui_gen_win_info data_window; } ;
struct TYPE_10__ {TYPE_3__ which_element; } ;


 TYPE_6__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tui_data_element*,struct tui_gen_win_info*) ;
 int FUNC_1 (int ,struct frame_info*,struct tui_data_element*,int ,int*) ;
 int FUNC_2 (int ) ;

void
FUNC_3 (struct frame_info *VAR_2)
{
  if (VAR_0 != ((void*)0) && VAR_0->generic.is_visible)
    {
      struct tui_data_info *VAR_3
        = &VAR_0->detail.data_display_info;

      if (VAR_3->regs_content_count <= 0 && VAR_3->display_regs)
 FUNC_2 (VAR_3->current_group);
      else
 {
   int VAR_4, VAR_5;

   for (VAR_4 = 0; (VAR_4 < VAR_3->regs_content_count); VAR_4++)
     {
       struct tui_data_element *VAR_6;
       struct tui_gen_win_info *VAR_7;
       int VAR_8;

       VAR_7 = &VAR_3->regs_content[VAR_4]->
                which_element.data_window;
       VAR_6 = &((struct tui_win_element *)
                       VAR_7->content[0])->which_element.data;
       VAR_8 = VAR_6->highlight;

              FUNC_1 (VAR_1, VAR_2, VAR_6,
                                VAR_6->item_no, &VAR_6->highlight);

       if (VAR_6->highlight || VAR_8)
  {
                  FUNC_0 (VAR_6, VAR_7);
  }
     }
 }
    }
}
