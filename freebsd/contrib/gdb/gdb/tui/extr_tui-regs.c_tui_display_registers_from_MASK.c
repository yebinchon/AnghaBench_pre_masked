
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_6__** tui_win_content ;
struct tui_data_element {char* content; } ;
struct TYPE_11__ {struct tui_data_element data; } ;
struct tui_win_element {TYPE_4__ which_element; } ;
struct TYPE_12__ {int x; int y; } ;
struct tui_gen_win_info {int height; int width; int * handle; TYPE_5__ origin; scalar_t__* content; } ;
struct tui_data_info {scalar_t__ regs_content_count; int regs_column_count; TYPE_6__** regs_content; } ;
typedef int WINDOW ;
struct TYPE_9__ {int width; int viewport_height; } ;
struct TYPE_8__ {struct tui_data_info data_display_info; } ;
struct TYPE_14__ {TYPE_2__ generic; TYPE_1__ detail; } ;
struct TYPE_10__ {struct tui_gen_win_info data_window; } ;
struct TYPE_13__ {TYPE_3__ which_element; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tui_data_element*,struct tui_gen_win_info*) ;
 int FUNC_4 (struct tui_gen_win_info*,int ) ;

void
FUNC_5 (int VAR_3)
{
  struct tui_data_info *VAR_4 = &VAR_2->detail.data_display_info;

  if (VAR_4->regs_content != (tui_win_content) ((void*)0) &&
      VAR_4->regs_content_count > 0)
    {
      int VAR_5 = VAR_3;
      int VAR_6, VAR_7, VAR_8, VAR_9;

      int VAR_10 = 0;
      for (VAR_5 = 0; VAR_5 < VAR_4->regs_content_count; VAR_5++)
        {
          struct tui_data_element *VAR_11;
          struct tui_gen_win_info *VAR_12;
          char *VAR_13;
          int VAR_14;

          VAR_12 = &VAR_4->regs_content[VAR_5]->which_element.data_window;
          VAR_11 = &((struct tui_win_element *)
                   VAR_12->content[0])->which_element.data;
          VAR_14 = 0;
          VAR_13 = VAR_11->content;
          if (VAR_13 != 0)
            while (*VAR_13)
              {
                if (*VAR_13++ == '\t')
                  VAR_14 = 8 * ((VAR_14 / 8) + 1);
                else
                  VAR_14++;
              }

          if (VAR_14 > VAR_10)
            VAR_10 = VAR_14;
        }
      VAR_8 = VAR_10 + 1;
      VAR_5 = VAR_3;

      VAR_4->regs_column_count =
        (VAR_2->generic.width - 2) / VAR_8;
      if (VAR_4->regs_column_count == 0)
        VAR_4->regs_column_count = 1;
      VAR_8 =
        (VAR_2->generic.width - 2) / VAR_4->regs_column_count;




      VAR_9 = 1;
      while (VAR_5 < VAR_4->regs_content_count &&
      VAR_9 <= VAR_2->generic.viewport_height)
 {
   for (VAR_6 = 0;
        (VAR_6 < VAR_4->regs_column_count &&
  VAR_5 < VAR_4->regs_content_count); VAR_6++)
     {
       struct tui_gen_win_info * VAR_15;
       struct tui_data_element * VAR_16;


       VAR_15 = &VAR_4->regs_content[VAR_5]
                ->which_element.data_window;
       VAR_16 = &((struct tui_win_element *)
     VAR_15->content[0])->which_element.data;
              if (VAR_15->handle != (WINDOW*) ((void*)0)
                  && (VAR_15->height != 1
                      || VAR_15->width != VAR_8
                      || VAR_15->origin.x != (VAR_8 * VAR_6) + 1
                      || VAR_15->origin.y != VAR_9))
                {
                  FUNC_2 (VAR_15->handle);
                  VAR_15->handle = 0;
                }

       if (VAR_15->handle == (WINDOW *) ((void*)0))
  {
    VAR_15->height = 1;
    VAR_15->width = VAR_8;
    VAR_15->origin.x = (VAR_8 * VAR_6) + 1;
    VAR_15->origin.y = VAR_9;
    FUNC_4 (VAR_15, VAR_0);
                  FUNC_0 (VAR_15->handle, VAR_1);
  }
              FUNC_1 (VAR_15->handle);



              FUNC_3 (VAR_16, VAR_15);
       VAR_5++;
     }
   VAR_9++;
 }
    }
}
