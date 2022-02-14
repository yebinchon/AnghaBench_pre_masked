
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int content_size; scalar_t__* content; } ;
struct tui_source_info {int filename; } ;
struct TYPE_6__ {struct tui_source_info source_info; } ;
struct tui_win_info {TYPE_3__ generic; TYPE_1__ detail; } ;
struct TYPE_10__ {scalar_t__ line_no; scalar_t__ addr; } ;
struct tui_source_element {int has_break; TYPE_5__ line_or_addr; int is_exec_point; } ;
struct TYPE_7__ {struct tui_source_element source; } ;
struct tui_win_element {TYPE_2__ which_element; } ;
struct breakpoint {scalar_t__ line_number; scalar_t__ enable_state; scalar_t__ type; scalar_t__ cond; scalar_t__ hit_count; TYPE_4__* loc; scalar_t__ source_file; struct breakpoint* next; } ;
struct TYPE_9__ {scalar_t__ address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tui_win_info* VAR_5 ;
 struct tui_win_info* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

int
FUNC_1 (struct tui_win_info * VAR_9, int VAR_10)
{
  int VAR_11;
  int VAR_12 = 0;
  struct tui_source_info * VAR_13 = &VAR_9->detail.source_info;

  for (VAR_11 = 0; VAR_11 < VAR_9->generic.content_size; VAR_11++)
    {
      struct breakpoint *VAR_14;
      extern struct breakpoint *VAR_15;
      int VAR_16;
      struct tui_source_element* VAR_17;

      VAR_17 = &((struct tui_win_element *) VAR_9->generic.content[VAR_11])->which_element.source;
      if (VAR_10 && !VAR_17->is_exec_point)
         continue;




      VAR_16 = 0;
      for (VAR_14 = VAR_15;
           VAR_14 != (struct breakpoint *) ((void*)0);
           VAR_14 = VAR_14->next)
        {
          if ((VAR_9 == VAR_6
               && VAR_14->source_file
               && (FUNC_0 (VAR_13->filename, VAR_14->source_file) == 0)
               && VAR_14->line_number == VAR_17->line_or_addr.line_no)
              || (VAR_9 == VAR_5
                  && VAR_14->loc->address == VAR_17->line_or_addr.addr))
            {
              if (VAR_14->enable_state == VAR_7)
                VAR_16 |= VAR_1;
              else
                VAR_16 |= VAR_2;
              if (VAR_14->hit_count)
                VAR_16 |= VAR_4;
              if (VAR_14->cond)
                VAR_16 |= VAR_0;
              if (VAR_14->type == VAR_8)
                VAR_16 |= VAR_3;
            }
        }
      if (VAR_17->has_break != VAR_16)
        {
          VAR_17->has_break = VAR_16;
          VAR_12 = 1;
        }
    }
  return VAR_12;
}
