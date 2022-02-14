
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_data {int td_lolen; int* td_data; int td_flags; } ;
typedef int flex_int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 int * VAR_6 ;
 size_t VAR_7 ;
 int* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int *,char*,char*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 () ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int FUNC_6 () ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (char*,char*) ;
 int FUNC_24 (char*) ;
 int FUNC_25 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_26 (int ,int) ;
 scalar_t__ VAR_18 ;
 struct yytbl_data* FUNC_27 () ;
 int FUNC_28 (int) ;
 struct yytbl_data* FUNC_29 () ;
 struct yytbl_data* FUNC_30 () ;
 struct yytbl_data* FUNC_31 () ;
 struct yytbl_data* FUNC_32 () ;
 int* VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_33 (int *) ;
 int FUNC_34 (char*,int) ;
 int FUNC_35 (char*,unsigned int) ;
 int FUNC_36 (char*,char*) ;
 int FUNC_37 (int ,char*,int) ;
 int FUNC_38 (char*) ;
 size_t VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int* VAR_26 ;
 int * VAR_27 ;
 char** VAR_28 ;
 int VAR_29 ;
 int FUNC_39 (int) ;
 int FUNC_40 () ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int FUNC_41 (struct yytbl_data*) ;
 int FUNC_42 (struct yytbl_data*) ;
 scalar_t__ FUNC_43 (int *,struct yytbl_data*) ;
 int FUNC_44 (struct yytbl_data*,int ) ;
 scalar_t__ VAR_39 ;

void FUNC_45 ()
{
 int VAR_40;
 int VAR_41 = 0;
 struct yytbl_data *VAR_42;


 FUNC_40 ();




 FUNC_39 (1);

 if (VAR_38 && !VAR_39) {
  FUNC_24 ("YY_G(yytext_ptr) -= YY_G(yy_more_len); \\");
  FUNC_24
   ("yyleng = (size_t) (yy_cp - YY_G(yytext_ptr)); \\");
 }

 else
  FUNC_24 ("yyleng = (size_t) (yy_cp - yy_bp); \\");


 FUNC_40 ();
 if (VAR_39) {
  if (VAR_38)
   FUNC_24
    ("if ( yyleng + YY_G(yy_more_offset) >= YYLMAX ) \\");
  else
   FUNC_24 ("if ( yyleng >= YYLMAX ) \\");

  FUNC_25 ();
  FUNC_24
   ("YY_FATAL_ERROR( \"token too large, exceeds YYLMAX\" ); \\");
  FUNC_22 ();

  if (VAR_38) {
   FUNC_24
    ("yy_flex_strncpy( &yytext[YY_G(yy_more_offset)], YY_G(yytext_ptr), yyleng + 1 M4_YY_CALL_LAST_ARG); \\");
   FUNC_24 ("yyleng += YY_G(yy_more_offset); \\");
   FUNC_24
    ("YY_G(yy_prev_more_offset) = YY_G(yy_more_offset); \\");
   FUNC_24 ("YY_G(yy_more_offset) = 0; \\");
  }
  else {
   FUNC_24
    ("yy_flex_strncpy( yytext, YY_G(yytext_ptr), yyleng + 1 M4_YY_CALL_LAST_ARG); \\");
  }
 }

 FUNC_39 (0);

 FUNC_40 ();




 FUNC_34 ("#define YY_NUM_RULES %d\n", VAR_21);
 FUNC_34 ("#define YY_END_OF_BUFFER %d\n", VAR_21 + 1);

 if (VAR_13) {



  int VAR_43 = VAR_33 + VAR_22 + 1;
  char *VAR_44 =
   (VAR_43 >= VAR_1 || VAR_18) ?
   "flex_int32_t" : "flex_int16_t";

  FUNC_39 (0);
  FUNC_24 ("struct yy_trans_info");
  FUNC_25 ();
  FUNC_24 ("{");


  FUNC_23 ("%s yy_verify;", VAR_44);
  FUNC_23 ("%s yy_nxt;", VAR_44);
  FUNC_24 ("};");
  FUNC_22 ();
 }
 else {





  FUNC_24
   ("/* This struct is not used in this scanner,");
  FUNC_24 ("   but its presence is necessary. */");
  FUNC_24 ("struct yy_trans_info");
  FUNC_25 ();
  FUNC_24 ("{");
  FUNC_24 ("flex_int32_t yy_verify;");
  FUNC_24 ("flex_int32_t yy_nxt;");
  FUNC_24 ("};");
  FUNC_22 ();
 }

 if (VAR_13) {
  FUNC_15 ();
  if (VAR_31) {
   struct yytbl_data *VAR_45;

   VAR_45 = FUNC_27 ();
   FUNC_41 (VAR_45);
   if (FUNC_43 (&VAR_32, VAR_45) < 0)
    FUNC_7 (FUNC_2("Could not write ftbl"));
   FUNC_42 (VAR_45);

   VAR_45 = FUNC_32 ();
   FUNC_41 (VAR_45);
   if (FUNC_43 (&VAR_32, VAR_45) < 0)
    FUNC_7 (FUNC_2("Could not write ssltbl"));
   FUNC_42 (VAR_45);
   VAR_45 = 0;

   if (VAR_35) {
    VAR_45 = FUNC_29 ();
    FUNC_41 (VAR_45);
    if (FUNC_43 (&VAR_32, VAR_45) < 0)
     FUNC_7 (FUNC_2
         ("Could not write ecstbl"));
    FUNC_42 (VAR_45);
    VAR_45 = 0;
   }
  }
 }
 else if (VAR_14) {
  FUNC_17 ();
  if (VAR_31) {
   struct yytbl_data *VAR_46;

   VAR_46 = FUNC_31 ();
   FUNC_41 (VAR_46);
   if (FUNC_43 (&VAR_32, VAR_46) < 0)
    FUNC_7 (FUNC_2("Could not write ftbl"));
   FUNC_42 (VAR_46);
   VAR_46 = 0;

   if (VAR_35) {
    VAR_46 = FUNC_29 ();
    FUNC_41 (VAR_46);
    if (FUNC_43 (&VAR_32, VAR_46) < 0)
     FUNC_7 (FUNC_2
         ("Could not write ecstbl"));
    FUNC_42 (VAR_46);
    VAR_46 = 0;
   }
  }
 }
 else
  FUNC_18 ();

 if (VAR_12) {

  FUNC_16 ();

  if (VAR_31) {
   struct yytbl_data *VAR_47;

   VAR_47 = FUNC_30 ();
   FUNC_41 (VAR_47);
   if (FUNC_43 (&VAR_32, VAR_47) < 0)
    FUNC_7 (FUNC_2("Could not write eoltbl"));
   FUNC_42 (VAR_47);
   VAR_47 = 0;
  }
 }





 if (VAR_20 > 0 && !VAR_25) {
  if (!VAR_0 && !VAR_24) {
   FUNC_24
    ("static yy_state_type yy_last_accepting_state;");
   FUNC_24
    ("static char *yy_last_accepting_cpos;\n");
  }
 }

 if (VAR_19) {
  flex_int32_t *VAR_48 = 0;


  FUNC_37 (FUNC_21 (), "yy_NUL_trans",
        VAR_16 + 1);
  FUNC_3 (&VAR_37,
       "\t{YYTD_ID_NUL_TRANS, (void**)&yy_NUL_trans, sizeof(%s)},\n",
       (VAR_13) ? "struct yy_trans_info*" :
       "flex_int32_t");

  VAR_42 =
   (struct yytbl_data *) FUNC_4 (1,
            sizeof (struct
             yytbl_data));
  FUNC_44 (VAR_42, VAR_2);
  if (VAR_13)
   VAR_42->td_flags |= VAR_3;
  VAR_42->td_lolen = VAR_16 + 1;
  VAR_42->td_data = VAR_48 =
   (flex_int32_t *) FUNC_4 (VAR_42->td_lolen,
         sizeof (flex_int32_t));

  for (VAR_40 = 1; VAR_40 <= VAR_16; ++VAR_40) {
   if (VAR_13) {
    FUNC_34 ("    &yy_transition[%d],\n",
      VAR_8[VAR_40]);
    VAR_48[VAR_40] = VAR_8[VAR_40];
   }
   else {
    FUNC_28 (VAR_19[VAR_40]);
    VAR_48[VAR_40] = VAR_19[VAR_40];
   }
  }

  FUNC_5 ();
  if (VAR_31) {
   FUNC_41 (VAR_42);
   if (FUNC_43 (&VAR_32, VAR_42) <
       0)
    FUNC_7 (FUNC_2
        ("Could not write yynultrans_tbl"));
   FUNC_42 (VAR_42);
   VAR_42 = ((void*)0);
  }

 }

 if (!VAR_0 && !VAR_24) {
  FUNC_24 ("extern int yy_flex_debug;");
  FUNC_23 ("int yy_flex_debug = %s;\n",
         VAR_10 ? "1" : "0");
 }

 if (VAR_10) {
  FUNC_37 (VAR_18 ? FUNC_20 () :
        FUNC_19 (), "yy_rule_linenum",
        VAR_21);
  for (VAR_40 = 1; VAR_40 < VAR_21; ++VAR_40)
   FUNC_28 (VAR_26[VAR_40]);
  FUNC_5 ();
 }

 if (VAR_25) {
  FUNC_38 ("m4_ifdef( [[M4_YY_USES_REJECT]],\n[[");

  if (!VAR_0 && !VAR_24) {
   FUNC_38 ("static yy_state_type *yy_state_buf=0, *yy_state_ptr=0;");
   FUNC_38 ("static char *yy_full_match;");
   FUNC_38 ("static int yy_lp;");
  }

  if (VAR_36) {
   if (!VAR_0 && !VAR_24) {
    FUNC_38 ("static int yy_looking_for_trail_begin = 0;");
    FUNC_38 ("static int yy_full_lp;");
    FUNC_38 ("static int *yy_full_state;");
   }

   FUNC_35 ("#define YY_TRAILING_MASK 0x%x\n",
     (unsigned int) VAR_5);
   FUNC_35 ("#define YY_TRAILING_HEAD_MASK 0x%x\n",
     (unsigned int) VAR_4);
  }

  FUNC_38 ("#define REJECT \\");
  FUNC_38 ("{ \\");
  FUNC_38 ("*yy_cp = YY_G(yy_hold_char); /* undo effects of setting up yytext */ \\");
  FUNC_38 ("yy_cp = YY_G(yy_full_match); /* restore poss. backed-over text */ \\");

  if (VAR_36) {
   FUNC_38 ("YY_G(yy_lp) = YY_G(yy_full_lp); /* restore orig. accepting pos. */ \\");
   FUNC_38 ("YY_G(yy_state_ptr) = YY_G(yy_full_state); /* restore orig. state */ \\");
   FUNC_38 ("yy_current_state = *YY_G(yy_state_ptr); /* restore curr. state */ \\");
  }

  FUNC_38 ("++YY_G(yy_lp); \\");
  FUNC_38 ("goto find_rule; \\");

  FUNC_38 ("}");
  FUNC_38 ("]])\n");
 }

 else {
  FUNC_38 ("/* The intent behind this definition is that it'll catch");
  FUNC_38 (" * any uses of REJECT which flex missed.");
  FUNC_38 (" */");
  FUNC_38 ("#define REJECT reject_used_but_not_detected");
 }

 if (VAR_38) {
  if (!VAR_0) {
   if (VAR_39) {
    if (!VAR_24){
        FUNC_24 ("static int yy_more_offset = 0;");
                    FUNC_24 ("static int yy_prev_more_offset = 0;");
                }
   }
   else if (!VAR_24) {
    FUNC_24
     ("static int yy_more_flag = 0;");
    FUNC_24
     ("static int yy_more_len = 0;");
   }
  }

  if (VAR_39) {
   FUNC_24
    ("#define yymore() (YY_G(yy_more_offset) = yy_flex_strlen( yytext M4_YY_CALL_LAST_ARG))");
   FUNC_24 ("#define YY_NEED_STRLEN");
   FUNC_24 ("#define YY_MORE_ADJ 0");
   FUNC_24
    ("#define YY_RESTORE_YY_MORE_OFFSET \\");
   FUNC_25 ();
   FUNC_24 ("{ \\");
   FUNC_24
    ("YY_G(yy_more_offset) = YY_G(yy_prev_more_offset); \\");
   FUNC_24 ("yyleng -= YY_G(yy_more_offset); \\");
   FUNC_24 ("}");
   FUNC_22 ();
  }
  else {
   FUNC_24
    ("#define yymore() (YY_G(yy_more_flag) = 1)");
   FUNC_24
    ("#define YY_MORE_ADJ YY_G(yy_more_len)");
   FUNC_24 ("#define YY_RESTORE_YY_MORE_OFFSET");
  }
 }

 else {
  FUNC_24
   ("#define yymore() yymore_used_but_not_detected");
  FUNC_24 ("#define YY_MORE_ADJ 0");
  FUNC_24 ("#define YY_RESTORE_YY_MORE_OFFSET");
 }

 if (!VAR_0) {
  if (VAR_39) {
   FUNC_38 ("#ifndef YYLMAX");
   FUNC_38 ("#define YYLMAX 8192");
   FUNC_38 ("#endif\n");
   if (!VAR_24){
                FUNC_38 ("char yytext[YYLMAX];");
                FUNC_38 ("char *yytext_ptr;");
            }
  }

  else {
   if(! VAR_24)
                FUNC_38 ("char *yytext;");
  }
 }

 FUNC_33 (&VAR_6[VAR_11]);

 FUNC_26 (VAR_30, 0);

 FUNC_40 ();

 if (!VAR_0) {
  if (VAR_34) {
   FUNC_38 ("\terrno=0; \\");
   FUNC_38 ("\twhile ( (result = read( fileno(yyin), (char *) buf, max_size )) < 0 ) \\");
   FUNC_38 ("\t{ \\");
   FUNC_38 ("\t\tif( errno != EINTR) \\");
   FUNC_38 ("\t\t{ \\");
   FUNC_38 ("\t\t\tYY_FATAL_ERROR( \"input in flex scanner failed\" ); \\");
   FUNC_38 ("\t\t\tbreak; \\");
   FUNC_38 ("\t\t} \\");
   FUNC_38 ("\t\terrno=0; \\");
   FUNC_38 ("\t\tclearerr(yyin); \\");
   FUNC_38 ("\t}\\");
  }

  else {
   FUNC_38 ("\tif ( YY_CURRENT_BUFFER_LVALUE->yy_is_interactive ) \\");
   FUNC_38 ("\t\t{ \\");
   FUNC_38 ("\t\tint c = '*'; \\");
   FUNC_38 ("\t\tsize_t n; \\");
   FUNC_38 ("\t\tfor ( n = 0; n < max_size && \\");
   FUNC_38 ("\t\t\t     (c = getc( yyin )) != EOF && c != '\\n'; ++n ) \\");
   FUNC_38 ("\t\t\tbuf[n] = (char) c; \\");
   FUNC_38 ("\t\tif ( c == '\\n' ) \\");
   FUNC_38 ("\t\t\tbuf[n++] = (char) c; \\");
   FUNC_38 ("\t\tif ( c == EOF && ferror( yyin ) ) \\");
   FUNC_38 ("\t\t\tYY_FATAL_ERROR( \"input in flex scanner failed\" ); \\");
   FUNC_38 ("\t\tresult = n; \\");
   FUNC_38 ("\t\t} \\");
   FUNC_38 ("\telse \\");
   FUNC_38 ("\t\t{ \\");
   FUNC_38 ("\t\terrno=0; \\");
   FUNC_38 ("\t\twhile ( (result = fread(buf, 1, max_size, yyin))==0 && ferror(yyin)) \\");
   FUNC_38 ("\t\t\t{ \\");
   FUNC_38 ("\t\t\tif( errno != EINTR) \\");
   FUNC_38 ("\t\t\t\t{ \\");
   FUNC_38 ("\t\t\t\tYY_FATAL_ERROR( \"input in flex scanner failed\" ); \\");
   FUNC_38 ("\t\t\t\tbreak; \\");
   FUNC_38 ("\t\t\t\t} \\");
   FUNC_38 ("\t\t\terrno=0; \\");
   FUNC_38 ("\t\t\tclearerr(yyin); \\");
   FUNC_38 ("\t\t\t} \\");
   FUNC_38 ("\t\t}\\");
  }
 }

 FUNC_40 ();

 FUNC_24 ("#define YY_RULE_SETUP \\");
 FUNC_25 ();
 if (VAR_9) {
  FUNC_24 ("if ( yyleng > 0 ) \\");
  FUNC_25 ();
  FUNC_24 ("YY_CURRENT_BUFFER_LVALUE->yy_at_bol = \\");
  FUNC_24 ("\t\t(yytext[yyleng - 1] == '\\n'); \\");
  FUNC_22 ();
 }
 FUNC_24 ("YY_USER_ACTION");
 FUNC_22 ();

 FUNC_40 ();


 FUNC_33 (&VAR_6[VAR_23]);

 FUNC_26 (VAR_30, 0);

 FUNC_40 ();

 FUNC_39 (2);

 if (VAR_38 && !VAR_39) {
  FUNC_24 ("YY_G(yy_more_len) = 0;");
  FUNC_24 ("if ( YY_G(yy_more_flag) )");
  FUNC_25 ();
  FUNC_24 ("{");
  FUNC_24
   ("YY_G(yy_more_len) = YY_G(yy_c_buf_p) - YY_G(yytext_ptr);");
  FUNC_24 ("YY_G(yy_more_flag) = 0;");
  FUNC_24 ("}");
  FUNC_22 ();
 }

 FUNC_40 ();

 FUNC_14 ();


 FUNC_38 ("yy_match:");
 FUNC_12 ();

 FUNC_40 ();
 FUNC_39 (2);
 FUNC_11 ();

 FUNC_40 ();
 FUNC_38 ("m4_ifdef( [[M4_YY_USE_LINENO]],[[");
 FUNC_24
  ("if ( yy_act != YY_END_OF_BUFFER && yy_rule_can_match_eol[yy_act] )");
 FUNC_25 ();
 FUNC_24 ("{");
 FUNC_24 ("yy_size_t yyl;");
 FUNC_6 ();
 FUNC_36 ("for ( yyl = %s; yyl < yyleng; ++yyl )\n",
   VAR_38 ? (VAR_39 ? "YY_G(yy_prev_more_offset)" :
    "YY_G(yy_more_len)") : "0");
 FUNC_25 ();
 FUNC_24 ("if ( yytext[yyl] == '\\n' )");
 FUNC_25 ();
 FUNC_24 ("M4_YY_INCR_LINENO();");
 FUNC_22 ();
 FUNC_22 ();
 FUNC_24 ("}");
 FUNC_22 ();
 FUNC_38 ("]])");

 FUNC_40 ();
 if (VAR_10) {
  FUNC_24 ("if ( yy_flex_debug )");
  FUNC_25 ();

  FUNC_24 ("{");
  FUNC_24 ("if ( yy_act == 0 )");
  FUNC_25 ();
  FUNC_24 (VAR_0 ?
        "std::cerr << \"--scanner backing up\\n\";" :
        "fprintf( stderr, \"--scanner backing up\\n\" );");
  FUNC_22 ();

  FUNC_6 ();
  FUNC_34 ("else if ( yy_act < %d )\n", VAR_21);
  FUNC_25 ();

  if (VAR_0) {
   FUNC_24
    ("std::cerr << \"--accepting rule at line \" << yy_rule_linenum[yy_act] <<");
   FUNC_24
    ("         \"(\\\"\" << yytext << \"\\\")\\n\";");
  }
  else {
   FUNC_24
    ("fprintf( stderr, \"--accepting rule at line %ld (\\\"%s\\\")\\n\",");

   FUNC_24
    ("         (long)yy_rule_linenum[yy_act], yytext );");
  }

  FUNC_22 ();

  FUNC_6 ();
  FUNC_34 ("else if ( yy_act == %d )\n", VAR_21);
  FUNC_25 ();

  if (VAR_0) {
   FUNC_24
    ("std::cerr << \"--accepting default rule (\\\"\" << yytext << \"\\\")\\n\";");
  }
  else {
   FUNC_24
    ("fprintf( stderr, \"--accepting default rule (\\\"%s\\\")\\n\",");
   FUNC_24 ("         yytext );");
  }

  FUNC_22 ();

  FUNC_6 ();
  FUNC_34 ("else if ( yy_act == %d )\n", VAR_21 + 1);
  FUNC_25 ();

  FUNC_24 (VAR_0 ?
        "std::cerr << \"--(end of buffer or a NUL)\\n\";" :
        "fprintf( stderr, \"--(end of buffer or a NUL)\\n\" );");

  FUNC_22 ();

  FUNC_6 ();
  FUNC_38 ("else");
  FUNC_25 ();

  if (VAR_0) {
   FUNC_24
    ("std::cerr << \"--EOF (start condition \" << YY_START << \")\\n\";");
  }
  else {
   FUNC_24
    ("fprintf( stderr, \"--EOF (start condition %d)\\n\", YY_START );");
  }

  FUNC_22 ();

  FUNC_24 ("}");
  FUNC_22 ();
 }


 FUNC_40 ();
 FUNC_25 ();
 FUNC_10 ();
 FUNC_33 (&VAR_6[VAR_7]);

 FUNC_26 (VAR_30, 0);


 for (VAR_40 = 1; VAR_40 <= VAR_17; ++VAR_40)
  if (!VAR_27[VAR_40]) {
   FUNC_6 ();
   FUNC_36 ("case YY_STATE_EOF(%s):\n", VAR_28[VAR_40]);
   VAR_41 = 1;
  }

 if (VAR_41) {
  FUNC_25 ();
  FUNC_24 ("yyterminate();");
  FUNC_22 ();
 }







 FUNC_40 ();
 FUNC_39 (4);

 if (VAR_13 || VAR_14)
  FUNC_24 ("yy_cp = YY_G(yy_c_buf_p);");

 else {
  if (!VAR_25 && !VAR_15) {



   FUNC_24
    ("yy_cp = YY_G(yy_last_accepting_cpos);");
   FUNC_24
    ("yy_current_state = YY_G(yy_last_accepting_state);");
  }

  else




   FUNC_24 ("yy_cp = YY_G(yy_c_buf_p);");
 }



 FUNC_39 (1);
 FUNC_40 ();

 FUNC_14 ();

 FUNC_39 (2);
 FUNC_40 ();
 FUNC_13 (1);

 FUNC_39 (1);
 FUNC_40 ();
 FUNC_9 ();

 FUNC_40 ();
 FUNC_40 ();

 if (VAR_9) {
  FUNC_24
   ("YY_CURRENT_BUFFER_LVALUE->yy_at_bol = (c == '\\n');");
  if (VAR_12) {
   FUNC_24
    ("if ( YY_CURRENT_BUFFER_LVALUE->yy_at_bol )");
   FUNC_25 ();
   FUNC_24 ("M4_YY_INCR_LINENO();");
   FUNC_22 ();
  }
 }

 else if (VAR_12) {
  FUNC_24 ("if ( c == '\\n' )");
  FUNC_25 ();
  FUNC_24 ("M4_YY_INCR_LINENO();");
  FUNC_22 ();
 }

 FUNC_40 ();



 FUNC_26 (VAR_30, 1);

 if (VAR_29 == 3) {
  FUNC_0 ();
  (void) FUNC_8 ();
  FUNC_1 ();
 }
}
