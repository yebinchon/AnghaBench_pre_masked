
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NUL_ec_str ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (char*,int,char*,int) ;

void FUNC_9 ()
{



 int VAR_8 = (VAR_6 > 0 && !VAR_7);

 if (VAR_8 && (!VAR_5 || VAR_1 || VAR_2))



  FUNC_4 ("char *yy_cp = YY_G(yy_c_buf_p);");

 FUNC_7 ('\n');

 if (VAR_5) {
  FUNC_4
   ("yy_current_state = yy_NUL_trans[yy_current_state];");
  FUNC_4 ("yy_is_jam = (yy_current_state == 0);");
 }

 else if (VAR_2) {
  FUNC_0 ();
  if (VAR_3)
   FUNC_6 ("yy_current_state = yy_nxt[yy_current_state][%d];\n", VAR_0);
  else
   FUNC_6 ("yy_current_state = yy_nxt[yy_current_state*YY_NXT_LOLEN + %d];\n", VAR_0);
  FUNC_4 ("yy_is_jam = (yy_current_state <= 0);");
 }

 else if (VAR_1) {
  FUNC_0 ();
  FUNC_6 ("int yy_c = %d;\n", VAR_0);

  FUNC_4
   ("yyconst struct yy_trans_info *yy_trans_info;\n");
  FUNC_4
   ("yy_trans_info = &yy_current_state[(unsigned int) yy_c];");
  FUNC_4 ("yy_current_state += yy_trans_info->yy_nxt;");

  FUNC_4
   ("yy_is_jam = (yy_trans_info->yy_verify != yy_c);");
 }

 else {
  char VAR_9[20];

  FUNC_8 (VAR_9, sizeof(VAR_9), "%d", VAR_0);
  FUNC_2 (VAR_9);

  FUNC_0 ();
  FUNC_6 ("yy_is_jam = (yy_current_state == %d);\n",
    VAR_4);

  if (VAR_7) {




   FUNC_4 ("if ( ! yy_is_jam )");
   FUNC_5 ();
   FUNC_4
    ("*YY_G(yy_state_ptr)++ = yy_current_state;");
   FUNC_3 ();
  }
 }





 if (VAR_8 && (VAR_1 || VAR_2)) {
  FUNC_7 ('\n');
  FUNC_4 ("if ( ! yy_is_jam )");
  FUNC_5 ();
  FUNC_4 ("{");
  FUNC_1 ();
  FUNC_4 ("}");
  FUNC_3 ();
 }
}
