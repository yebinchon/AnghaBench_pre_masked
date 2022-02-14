
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union tui_line_or_address {int line_no; } ;
struct tui_win_info {int dummy; } ;
struct symtab_and_line {int symtab; int line; } ;
struct TYPE_2__ {int count; scalar_t__* list; } ;
typedef scalar_t__ CORE_ADDR ;




 int VAR_0 ;
 int VAR_1 ;

 struct symtab_and_line FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct tui_win_info*) ;
 int FUNC_2 (struct tui_win_info*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,union tui_line_or_address,int ) ;
 TYPE_1__* FUNC_7 () ;

void
FUNC_8 (CORE_ADDR VAR_2)
{
  if (VAR_2 != 0)
    {
      struct symtab_and_line VAR_3;
      union tui_line_or_address VAR_4;

      switch (FUNC_3 ())
 {
 case 130:
 case 129:
   FUNC_4 (VAR_2);
   break;
 case 128:
   FUNC_5 (VAR_2);
   break;
 default:
   VAR_3 = FUNC_0 (VAR_2, 0);
   VAR_4.line_no = VAR_3.line;
   FUNC_6 (VAR_3.symtab, VAR_4, VAR_1);
   break;
 }
    }
  else
    {
      int VAR_5;

      for (VAR_5 = 0; VAR_5 < (FUNC_7 ())->count; VAR_5++)
 {
   struct tui_win_info * VAR_6 = (struct tui_win_info *) (FUNC_7 ())->list[VAR_5];

   FUNC_2 (VAR_6, VAR_0);
   FUNC_1 (VAR_6);
 }
    }
}
