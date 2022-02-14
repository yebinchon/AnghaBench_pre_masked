
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union tui_line_or_address {int addr; } ;
struct tui_win_info {int dummy; } ;
struct symtab {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct tui_win_info* VAR_4 ;
 struct symtab* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct symtab*,union tui_line_or_address,int ) ;
 struct tui_win_info* FUNC_5 () ;

void
FUNC_6 (CORE_ADDR VAR_5)
{
  struct symtab *VAR_6 = FUNC_0 (VAR_5);
  struct tui_win_info * VAR_7 = FUNC_5 ();
  union tui_line_or_address VAR_8;

  VAR_8.addr = VAR_5;
  FUNC_1 (VAR_0);
  FUNC_4 (VAR_3, VAR_6, VAR_8, VAR_1);




  if (FUNC_2 () != VAR_2 && VAR_7 == VAR_4)
    FUNC_3 (VAR_3);

  return;
}
