
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


struct TYPE_12__ {int highlight; } ;
struct TYPE_13__ {TYPE_5__ data; } ;
struct tui_win_element {TYPE_6__ which_element; } ;
struct tui_gen_win_info {scalar_t__* content; } ;
struct tui_data_info {int regs_content_count; struct reggroup* current_group; TYPE_4__** regs_content; int display_regs; } ;
struct reggroup {int dummy; } ;
typedef enum tui_status { ____Placeholder_tui_status } tui_status ;
struct TYPE_9__ {struct tui_data_info data_display_info; } ;
struct TYPE_8__ {int is_visible; } ;
struct TYPE_14__ {TYPE_2__ detail; TYPE_1__ generic; } ;
struct TYPE_10__ {struct tui_gen_win_info data_window; } ;
struct TYPE_11__ {TYPE_3__ which_element; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct reggroup* VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct reggroup*,int ,int) ;

void
FUNC_6 (struct reggroup *VAR_11)
{
  enum tui_status VAR_12 = VAR_5;
  struct tui_data_info *VAR_13;


  FUNC_2 ();



  if (VAR_4 == ((void*)0) || !VAR_4->generic.is_visible)
    FUNC_4 (VAR_0);

  VAR_13 = &VAR_4->detail.data_display_info;
  if (VAR_11 == 0)
    VAR_11 = VAR_7;


  VAR_13->display_regs = VAR_3;

  if (VAR_9 && VAR_10 && VAR_8)
    {
      VAR_12 = FUNC_5 (VAR_6, VAR_11,
                                     FUNC_0 (),
                                     VAR_11 == VAR_13->current_group);
    }
  if (VAR_12 == VAR_5)
    {
      VAR_13->current_group = 0;
      FUNC_3 (VAR_2);
    }
  else
    {
      int VAR_14;


      for (VAR_14 = 0; VAR_14 < VAR_13->regs_content_count; VAR_14++)
 {
   struct tui_gen_win_info *VAR_15;
          struct tui_win_element *VAR_16;

   VAR_15 = &VAR_13->regs_content[VAR_14]
            ->which_element.data_window;
          VAR_16 = (struct tui_win_element *) VAR_15->content[0];
          VAR_16->which_element.data.highlight = VAR_1;
 }
      VAR_13->current_group = VAR_11;
      FUNC_1 ();
    }
}
