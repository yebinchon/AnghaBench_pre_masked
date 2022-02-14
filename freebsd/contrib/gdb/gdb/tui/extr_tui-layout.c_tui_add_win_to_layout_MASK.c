
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;
typedef enum tui_layout_type { ____Placeholder_tui_layout_type } tui_layout_type ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void
FUNC_3 (enum tui_win_type VAR_5)
{
  enum tui_layout_type VAR_6 = FUNC_2 ();

  switch (VAR_5)
    {
    case 128:
      if (VAR_6 != VAR_2 &&
   VAR_6 != VAR_4 &&
   VAR_6 != VAR_3)
 {
   FUNC_1 ();
   if (VAR_6 == VAR_1)
     FUNC_0 (VAR_3);
   else
     FUNC_0 (VAR_2);
 }
      break;
    case 129:
      if (VAR_6 != VAR_0 &&
   VAR_6 != VAR_4 &&
   VAR_6 != VAR_1)
 {
   FUNC_1 ();
   if (VAR_6 == VAR_3)
     FUNC_0 (VAR_1);
   else
     FUNC_0 (VAR_0);
 }
      break;
    case 130:
      if (VAR_6 != VAR_3 &&
   VAR_6 != VAR_1)
 {
   if (VAR_6 == VAR_0)
     FUNC_0 (VAR_1);
   else
     FUNC_0 (VAR_3);
 }
      break;
    default:
      break;
    }
}
