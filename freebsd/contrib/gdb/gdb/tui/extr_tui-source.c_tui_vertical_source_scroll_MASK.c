
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


union tui_line_or_address {int line_no; } ;
typedef TYPE_5__** tui_win_content ;
struct symtab_and_line {struct symtab* symtab; } ;
struct symtab {int nlines; } ;
typedef enum tui_scroll_direction { ____Placeholder_tui_scroll_direction } tui_scroll_direction ;
struct TYPE_7__ {int * content; } ;
struct TYPE_12__ {TYPE_1__ generic; } ;
struct TYPE_8__ {int line_no; } ;
struct TYPE_9__ {TYPE_2__ line_or_addr; } ;
struct TYPE_10__ {TYPE_3__ source; } ;
struct TYPE_11__ {TYPE_4__ which_element; } ;


 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;
 struct symtab* FUNC_0 (int ) ;
 struct symtab_and_line FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct symtab*,int,int,int ) ;

void
FUNC_4 (enum tui_scroll_direction VAR_3,
       int VAR_4)
{
  if (VAR_1->generic.content != ((void*)0))
    {
      union tui_line_or_address VAR_5;
      struct symtab *VAR_6;
      tui_win_content VAR_7 = (tui_win_content) VAR_1->generic.content;
      struct symtab_and_line VAR_8 = FUNC_1 ();

      if (VAR_8.symtab == (struct symtab *) ((void*)0))
 VAR_6 = FUNC_0 (FUNC_2 (VAR_2));
      else
 VAR_6 = VAR_8.symtab;

      if (VAR_3 == VAR_0)
 {
   VAR_5.line_no = VAR_7[0]->which_element.source.line_or_addr.line_no +
     VAR_4;
   if (VAR_5.line_no > VAR_6->nlines)


     VAR_5.line_no = VAR_7[0]->which_element.source.line_or_addr.line_no;
 }
      else
 {
   VAR_5.line_no = VAR_7[0]->which_element.source.line_or_addr.line_no -
     VAR_4;
   if (VAR_5.line_no <= 0)
     VAR_5.line_no = 1;
 }

      FUNC_3 (VAR_6, VAR_5.line_no, VAR_5.line_no + 1, 0);
    }
}
