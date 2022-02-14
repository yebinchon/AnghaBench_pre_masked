
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_4__** tui_win_content ;
typedef int title ;
struct tui_data_element {int item_no; char const* name; void* value; void* highlight; } ;
struct TYPE_11__ {struct tui_data_element data; } ;
struct tui_win_element {TYPE_3__ which_element; } ;
struct tui_gen_win_info {scalar_t__* content; } ;
struct tui_data_info {int regs_content_count; scalar_t__ data_content_count; TYPE_4__** regs_content; } ;
struct reggroup {int dummy; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef enum tui_status { ____Placeholder_tui_status } tui_status ;
struct TYPE_13__ {scalar_t__ content_size; void* content; int title; } ;
struct TYPE_9__ {struct tui_data_info data_display_info; } ;
struct TYPE_14__ {TYPE_7__ generic; TYPE_1__ detail; } ;
struct TYPE_10__ {struct tui_gen_win_info data_window; } ;
struct TYPE_12__ {TYPE_2__ which_element; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (struct gdbarch*,int) ;
 scalar_t__ FUNC_1 (struct gdbarch*,int,struct reggroup*) ;
 char* FUNC_2 (struct reggroup*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (TYPE_7__*,int) ;
 TYPE_4__** FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_4__**,int) ;
 int FUNC_7 (struct gdbarch*,struct frame_info*,struct tui_data_element*,int,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static enum tui_status
FUNC_11 (struct gdbarch *VAR_9, struct reggroup *VAR_10,
                         struct frame_info *VAR_11, int VAR_12)
{
  enum tui_status VAR_13 = VAR_7;
  int VAR_14;
  int VAR_15 = VAR_1;
  int VAR_16, VAR_17;
  char VAR_18[80];
  struct tui_data_info *VAR_19 = &VAR_6->detail.data_display_info;


  FUNC_3 (VAR_18, sizeof (VAR_18) - 1, "Register group: %s",
            FUNC_2 (VAR_10));
  FUNC_8 (VAR_6->generic.title);
  VAR_6->generic.title = FUNC_10 (VAR_18);


  VAR_14 = 0;
  for (VAR_16 = 0; VAR_16 < VAR_4 + VAR_3; VAR_16++)
    {

      if (FUNC_1 (VAR_9, VAR_16, VAR_10)
          && FUNC_0 (VAR_9, VAR_16) != 0)
        VAR_14++;
    }

  if (VAR_19->regs_content_count > 0 && !VAR_12)
    {
      FUNC_6 (VAR_19->regs_content,
                             VAR_19->regs_content_count);
      VAR_19->regs_content_count = 0;
    }

  if (VAR_19->regs_content_count <= 0)
    {
      VAR_19->regs_content = FUNC_5 (VAR_14, VAR_0);
      VAR_15 = VAR_5;
      VAR_12 = VAR_1;
    }

  if (VAR_19->regs_content != (tui_win_content) ((void*)0))
    {
      if (!VAR_12 || VAR_15)
 {
   VAR_6->generic.content = (void*) ((void*)0);
   VAR_6->generic.content_size = 0;
   FUNC_4 (&VAR_6->generic, VAR_14);
   VAR_19->regs_content
            = (tui_win_content) VAR_6->generic.content;
   VAR_19->regs_content_count = VAR_14;
 }


      VAR_17 = 0;
      for (VAR_16 = 0; VAR_16 < VAR_4 + VAR_3; VAR_16++)
        {
   struct tui_gen_win_info *VAR_20;
          struct tui_data_element *VAR_21;
          const char *VAR_22;

          if (!FUNC_1 (VAR_9, VAR_16, VAR_10))
            continue;

          VAR_22 = FUNC_0 (VAR_9, VAR_16);
          if (VAR_22 == 0)
            continue;

   VAR_20 =
            &VAR_19->regs_content[VAR_17]->which_element.data_window;
          VAR_21 =
            &((struct tui_win_element *) VAR_20->content[0])->which_element.data;
          if (VAR_21)
            {
              if (!VAR_12)
                {
                  VAR_21->item_no = VAR_16;
                  VAR_21->name = VAR_22;
                  VAR_21->highlight = VAR_1;
                }
              if (VAR_21->value == (void*) ((void*)0))
                VAR_21->value = (void*) FUNC_9 (VAR_2);

              FUNC_7 (VAR_9, VAR_11, VAR_21, VAR_16, 0);
            }
          VAR_17++;
 }

      VAR_6->generic.content_size =
 VAR_19->regs_content_count + VAR_19->data_content_count;
      VAR_13 = VAR_8;
    }

  return VAR_13;
}
