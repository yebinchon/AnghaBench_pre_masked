
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union tui_line_or_address {int line_no; } ;
struct symtab_and_line {TYPE_1__* symtab; int line; } ;
struct TYPE_2__ {char* filename; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct symtab_and_line FUNC_0 (int ,int ) ;
 int FUNC_1 (struct symtab_and_line*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,TYPE_1__*,union tui_line_or_address,int ) ;

void
FUNC_6 (CORE_ADDR VAR_3)
{
  struct symtab_and_line VAR_4;

  FUNC_3 (VAR_3);
  if (FUNC_2 () == VAR_0)
    {
      union tui_line_or_address VAR_5;





      VAR_4 = FUNC_0 (VAR_3, 0);
      VAR_5.line_no = VAR_4.line;
      FUNC_5 (VAR_2, VAR_4.symtab, VAR_5, VAR_1);
      if (VAR_4.symtab)
 {
   FUNC_1 (&VAR_4);
   FUNC_4 (VAR_4.symtab->filename);
 }
      else
 FUNC_4 ("?");
    }

  return;
}
