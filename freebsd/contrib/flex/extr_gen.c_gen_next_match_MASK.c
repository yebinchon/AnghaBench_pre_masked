
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_9 ()
{



 char *VAR_9 = VAR_8 ?
  "yy_ec[YY_SC_TO_UI(*yy_cp)] " : "YY_SC_TO_UI(*yy_cp)";

 char *VAR_10 = VAR_8 ?
  "yy_ec[YY_SC_TO_UI(*++yy_cp)] " : "YY_SC_TO_UI(*++yy_cp)";

 if (VAR_1) {
  if (VAR_2)
   FUNC_4
    ("while ( (yy_current_state = yy_nxt[yy_current_state][ %s ]) > 0 )",
     VAR_9);
  else
   FUNC_4
    ("while ( (yy_current_state = yy_nxt[yy_current_state*YY_NXT_LOLEN +  %s ]) > 0 )",
     VAR_9);

  FUNC_6 ();

  if (VAR_6 > 0) {
   FUNC_5 ("{");
   FUNC_1 ();
   FUNC_8 ('\n');
  }

  FUNC_5 ("++yy_cp;");

  if (VAR_6 > 0)

   FUNC_5 ("}");

  FUNC_3 ();

  FUNC_8 ('\n');
  FUNC_5 ("yy_current_state = -yy_current_state;");
 }

 else if (VAR_0) {
  FUNC_5 ("{");
  FUNC_5
   ("yyconst struct yy_trans_info *yy_trans_info;\n");
  FUNC_5 ("YY_CHAR yy_c;\n");
  FUNC_4 ("for ( yy_c = %s;", VAR_9);
  FUNC_5
   ("      (yy_trans_info = &yy_current_state[(unsigned int) yy_c])->");
  FUNC_5 ("yy_verify == yy_c;");
  FUNC_4 ("      yy_c = %s )", VAR_10);

  FUNC_6 ();

  if (VAR_6 > 0)
   FUNC_5 ("{");

  FUNC_5 ("yy_current_state += yy_trans_info->yy_nxt;");

  if (VAR_6 > 0) {
   FUNC_8 ('\n');
   FUNC_1 ();
   FUNC_5 ("}");
  }

  FUNC_3 ();
  FUNC_5 ("}");
 }

 else {
  FUNC_5 ("do");

  FUNC_6 ();
  FUNC_5 ("{");

  FUNC_2 (0);

  FUNC_5 ("++yy_cp;");


  FUNC_5 ("}");
  FUNC_3 ();

  FUNC_0 ();

  if (VAR_3)
   FUNC_7 ("while ( yy_base[yy_current_state] != %d );\n", VAR_4);
  else
   FUNC_7 ("while ( yy_current_state != %d );\n",
     VAR_5);

  if (!VAR_7 && !VAR_3) {



   FUNC_5
    ("yy_cp = YY_G(yy_last_accepting_cpos);");
   FUNC_5
    ("yy_current_state = YY_G(yy_last_accepting_state);");
  }
 }
}
