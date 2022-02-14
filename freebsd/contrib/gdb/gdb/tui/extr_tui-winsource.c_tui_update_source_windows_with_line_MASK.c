
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union tui_line_or_address {int line_no; } ;
struct symtab {int dummy; } ;
typedef int CORE_ADDR ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct symtab*,int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct symtab*,union tui_line_or_address,int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5 (struct symtab *VAR_2, int VAR_3)
{
  CORE_ADDR VAR_4;
  union tui_line_or_address VAR_5;

  switch (FUNC_1 ())
    {
    case 129:
    case 128:
      FUNC_0 (VAR_2, VAR_3, &VAR_4);
      FUNC_4 (VAR_4);
      break;
    default:
      VAR_5.line_no = VAR_3;
      FUNC_3 (VAR_2, VAR_5, VAR_0);
      if (FUNC_1 () == VAR_1)
 {
   FUNC_0 (VAR_2, VAR_3, &VAR_4);
   FUNC_2 (VAR_4);
 }
      break;
    }

  return;
}
