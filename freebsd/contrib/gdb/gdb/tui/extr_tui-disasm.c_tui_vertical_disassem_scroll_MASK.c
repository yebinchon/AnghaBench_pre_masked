
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union tui_line_or_address {int addr; } ;
typedef TYPE_5__** tui_win_content ;
struct symtab_and_line {struct symtab* symtab; } ;
struct symtab {int dummy; } ;
typedef enum tui_scroll_direction { ____Placeholder_tui_scroll_direction } tui_scroll_direction ;
struct TYPE_11__ {int height; int * content; } ;
struct TYPE_13__ {TYPE_4__ generic; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_9__ {TYPE_1__ line_or_addr; } ;
struct TYPE_10__ {TYPE_2__ source; } ;
struct TYPE_12__ {TYPE_3__ which_element; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int VAR_3 ;
 struct symtab* FUNC_0 (int ) ;
 struct symtab_and_line FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_6__*,struct symtab*,union tui_line_or_address,int ) ;

void
FUNC_5 (enum tui_scroll_direction VAR_4,
         int VAR_5)
{
  if (VAR_2->generic.content != ((void*)0))
    {
      CORE_ADDR VAR_6;
      tui_win_content VAR_7;
      struct symtab *VAR_8;
      union tui_line_or_address VAR_9;
      int VAR_10, VAR_11;
      struct symtab_and_line VAR_12 = FUNC_1 ();

      VAR_7 = (tui_win_content) VAR_2->generic.content;
      if (VAR_12.symtab == (struct symtab *) ((void*)0))
 VAR_8 = FUNC_0 (FUNC_2 (VAR_3));
      else
 VAR_8 = VAR_12.symtab;


      VAR_10 = VAR_2->generic.height - 2;
      VAR_6 = VAR_7[0]->which_element.source.line_or_addr.addr;
      VAR_11 = (VAR_4 == VAR_1) ? VAR_10 : - VAR_10;

      VAR_9.addr = FUNC_3 (VAR_6, VAR_11);
      FUNC_4 (VAR_2, VAR_8, VAR_9, VAR_0);
    }
}
