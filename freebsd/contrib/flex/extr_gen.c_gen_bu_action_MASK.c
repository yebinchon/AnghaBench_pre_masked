
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;

void FUNC_3 ()
{
 if (VAR_3 || VAR_2 == 0)
  return;

 FUNC_2 (3);

 FUNC_0 ("case 0: /* must back up */");
 FUNC_0 ("/* undo the effects of YY_DO_BEFORE_ACTION */");
 FUNC_0 ("*yy_cp = YY_G(yy_hold_char);");

 if (VAR_0 || VAR_1)
  FUNC_0 ("yy_cp = YY_G(yy_last_accepting_cpos) + 1;");
 else



  FUNC_0 ("yy_cp = YY_G(yy_last_accepting_cpos);");

 FUNC_0 ("yy_current_state = YY_G(yy_last_accepting_state);");
 FUNC_0 ("goto yy_find_action;");
 FUNC_1 ('\n');

 FUNC_2 (0);
}
