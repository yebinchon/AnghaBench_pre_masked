
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_4 ()
{
 if (VAR_0)
  FUNC_1 ("yy_act = yy_current_state[-1].yy_nxt;");

 else if (VAR_1)
  FUNC_1 ("yy_act = yy_accept[yy_current_state];");

 else if (VAR_4) {
  FUNC_1 ("yy_current_state = *--YY_G(yy_state_ptr);");
  FUNC_1 ("YY_G(yy_lp) = yy_accept[yy_current_state];");

  FUNC_3 ("goto find_rule; /* avoid `defined but not used' warning */");
  FUNC_3 ("find_rule: /* we branch to this label when backing up */");

  FUNC_1
   ("for ( ; ; ) /* until we find what rule we matched */");

  FUNC_2 ();

  FUNC_1 ("{");

  FUNC_1
   ("if ( YY_G(yy_lp) && YY_G(yy_lp) < yy_accept[yy_current_state + 1] )");
  FUNC_2 ();
  FUNC_1 ("{");
  FUNC_1 ("yy_act = yy_acclist[YY_G(yy_lp)];");

  if (VAR_5) {
   FUNC_1
    ("if ( yy_act & YY_TRAILING_HEAD_MASK ||");
   FUNC_1 ("     YY_G(yy_looking_for_trail_begin) )");
   FUNC_2 ();
   FUNC_1 ("{");

   FUNC_1
    ("if ( yy_act == YY_G(yy_looking_for_trail_begin) )");
   FUNC_2 ();
   FUNC_1 ("{");
   FUNC_1 ("YY_G(yy_looking_for_trail_begin) = 0;");
   FUNC_1 ("yy_act &= ~YY_TRAILING_HEAD_MASK;");
   FUNC_1 ("break;");
   FUNC_1 ("}");
   FUNC_0 ();

   FUNC_1 ("}");
   FUNC_0 ();

   FUNC_1
    ("else if ( yy_act & YY_TRAILING_MASK )");
   FUNC_2 ();
   FUNC_1 ("{");
   FUNC_1
    ("YY_G(yy_looking_for_trail_begin) = yy_act & ~YY_TRAILING_MASK;");
   FUNC_1
    ("YY_G(yy_looking_for_trail_begin) |= YY_TRAILING_HEAD_MASK;");

   if (VAR_3) {



    FUNC_1
     ("YY_G(yy_full_match) = yy_cp;");
    FUNC_1
     ("YY_G(yy_full_state) = YY_G(yy_state_ptr);");
    FUNC_1 ("YY_G(yy_full_lp) = YY_G(yy_lp);");
   }

   FUNC_1 ("}");
   FUNC_0 ();

   FUNC_1 ("else");
   FUNC_2 ();
   FUNC_1 ("{");
   FUNC_1 ("YY_G(yy_full_match) = yy_cp;");
   FUNC_1
    ("YY_G(yy_full_state) = YY_G(yy_state_ptr);");
   FUNC_1 ("YY_G(yy_full_lp) = YY_G(yy_lp);");
   FUNC_1 ("break;");
   FUNC_1 ("}");
   FUNC_0 ();

   FUNC_1 ("++YY_G(yy_lp);");
   FUNC_1 ("goto find_rule;");
  }

  else {



   FUNC_2 ();
   FUNC_1 ("{");
   FUNC_1 ("YY_G(yy_full_match) = yy_cp;");
   FUNC_1 ("break;");
   FUNC_1 ("}");
   FUNC_0 ();
  }

  FUNC_1 ("}");
  FUNC_0 ();

  FUNC_1 ("--yy_cp;");





  FUNC_1 ("yy_current_state = *--YY_G(yy_state_ptr);");
  FUNC_1 ("YY_G(yy_lp) = yy_accept[yy_current_state];");

  FUNC_1 ("}");

  FUNC_0 ();
 }

 else {
  FUNC_1 ("yy_act = yy_accept[yy_current_state];");

  if (VAR_2 && !VAR_4) {



   FUNC_1 ("if ( yy_act == 0 )");
   FUNC_2 ();
   FUNC_1 ("{ /* have to back up */");
   FUNC_1
    ("yy_cp = YY_G(yy_last_accepting_cpos);");
   FUNC_1
    ("yy_current_state = YY_G(yy_last_accepting_state);");
   FUNC_1
    ("yy_act = yy_accept[yy_current_state];");
   FUNC_1 ("}");
   FUNC_0 ();
  }
 }
}
