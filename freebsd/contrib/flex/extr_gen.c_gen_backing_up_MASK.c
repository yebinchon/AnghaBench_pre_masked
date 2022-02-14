
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_3 ()
{
 if (VAR_2 || VAR_1 == 0)
  return;

 if (VAR_0)
  FUNC_1 ("if ( yy_current_state[-1].yy_nxt )");
 else
  FUNC_1 ("if ( yy_accept[yy_current_state] )");

 FUNC_2 ();
 FUNC_1 ("{");
 FUNC_1 ("YY_G(yy_last_accepting_state) = yy_current_state;");
 FUNC_1 ("YY_G(yy_last_accepting_cpos) = yy_cp;");
 FUNC_1 ("}");
 FUNC_0 ();
}
