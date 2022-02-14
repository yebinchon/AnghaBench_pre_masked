
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* content; } ;
struct TYPE_6__ {int horizontal_offset; } ;
struct TYPE_7__ {TYPE_1__ source_info; } ;
struct tui_win_info {TYPE_5__ generic; TYPE_2__ detail; } ;
struct TYPE_8__ {int line_or_addr; } ;
struct TYPE_9__ {TYPE_3__ source; } ;
struct tui_win_element {TYPE_4__ which_element; } ;
struct symtab_and_line {struct symtab* symtab; } ;
struct symtab {int dummy; } ;
typedef enum tui_scroll_direction { ____Placeholder_tui_scroll_direction } tui_scroll_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct symtab* FUNC_0 (int ) ;
 struct symtab_and_line FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tui_win_info*,struct symtab*,int ,int ) ;

void
FUNC_4 (struct tui_win_info * VAR_3,
         enum tui_scroll_direction VAR_4,
         int VAR_5)
{
  if (VAR_3->generic.content != ((void*)0))
    {
      int VAR_6;
      struct symtab *VAR_7;
      struct symtab_and_line VAR_8 = FUNC_1 ();

      if (VAR_8.symtab == (struct symtab *) ((void*)0))
 VAR_7 = FUNC_0 (FUNC_2 (VAR_2));
      else
 VAR_7 = VAR_8.symtab;

      if (VAR_4 == VAR_1)
 VAR_6 = VAR_3->detail.source_info.horizontal_offset + VAR_5;
      else
 {
   if ((VAR_6 =
      VAR_3->detail.source_info.horizontal_offset - VAR_5) < 0)
     VAR_6 = 0;
 }
      VAR_3->detail.source_info.horizontal_offset = VAR_6;
      FUNC_3 (VAR_3, VAR_7,
          ((struct tui_win_element *)
           VAR_3->generic.content[0])->which_element.source.line_or_addr,
          VAR_0);
    }

  return;
}
