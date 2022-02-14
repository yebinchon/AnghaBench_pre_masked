
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union tui_line_or_address {int line_no; int addr; } ;
struct TYPE_2__ {scalar_t__ type; int content_size; } ;
struct tui_win_info {TYPE_1__ generic; } ;
struct symtab_and_line {int line; struct symtab* symtab; } ;
struct symtab {int dummy; } ;
typedef enum tui_status { ____Placeholder_tui_status } tui_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct symtab_and_line*) ;
 int FUNC_1 (struct tui_win_info*) ;
 int FUNC_2 (struct tui_win_info*,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct symtab*,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct tui_win_info*) ;
 int FUNC_8 (struct tui_win_info*,int ) ;
 int FUNC_9 (struct tui_win_info*) ;
 scalar_t__ FUNC_10 () ;

void
FUNC_11 (struct tui_win_info * VAR_6, struct symtab *VAR_7,
    union tui_line_or_address VAR_8, int VAR_9)
{
  enum tui_status VAR_10;

  if (VAR_6->generic.type == VAR_2)
    VAR_10 = FUNC_5 (VAR_7, VAR_8.line_no, VAR_9);
  else
    VAR_10 = FUNC_4 (VAR_8.addr);

  if (VAR_10 == VAR_4)
    {
      FUNC_2 (VAR_6, VAR_0);
      FUNC_1 (VAR_6);
    }
  else
    {
      FUNC_8 (VAR_6, 0);
      FUNC_7 (VAR_6);
      FUNC_9 (VAR_6);
      if (VAR_6->generic.type == VAR_2)
 {
   struct symtab_and_line VAR_11;

   VAR_11.line = VAR_8.line_no +
     (VAR_6->generic.content_size - 2);
   VAR_11.symtab = VAR_7;
   FUNC_0 (&VAR_11);




   if (FUNC_10 () == VAR_3 &&
       FUNC_3 () != VAR_1)
     FUNC_6 (VAR_5);
 }
    }


  return;
}
