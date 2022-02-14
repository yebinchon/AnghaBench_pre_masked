
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yytbl_data {int td_lolen; int* td_data; } ;
typedef int flex_int32_t ;
struct TYPE_2__ {int* dfaacc_set; int dfaacc_state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_2 (char*) ;
 int* VAR_12 ;
 int* FUNC_3 (int ) ;
 int* VAR_13 ;
 int FUNC_4 (int *,char*,char*) ;
 scalar_t__ FUNC_5 (int,int) ;
 int* VAR_14 ;
 int VAR_15 ;
 int FUNC_6 () ;
 int* VAR_16 ;
 TYPE_1__* VAR_17 ;
 size_t VAR_18 ;
 int FUNC_7 (void*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,int,...) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_14 (int) ;
 struct yytbl_data* FUNC_15 () ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int* VAR_29 ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (char,int ) ;
 scalar_t__ VAR_30 ;
 scalar_t__* VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int * VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int FUNC_18 (struct yytbl_data*) ;
 int FUNC_19 (struct yytbl_data*) ;
 scalar_t__ FUNC_20 (int *,struct yytbl_data*) ;
 int FUNC_21 (struct yytbl_data*,int ) ;

void FUNC_22 ()
{
 int VAR_43, VAR_44, VAR_45, *VAR_46, VAR_47, *VAR_48, VAR_49;
 int VAR_50 = VAR_24 + 1;
 struct yytbl_data *VAR_51 = 0, *VAR_52 = 0, *VAR_53 = 0,
  *VAR_54 = 0, *VAR_55 = 0, *VAR_56 = 0, *VAR_57=0;
 flex_int32_t *VAR_58 = 0, *VAR_59 = 0, *VAR_60 = 0,
  *VAR_61 = 0, *VAR_62 = 0, *VAR_63=0;
 flex_int32_t VAR_64 = 0, VAR_65=0,VAR_66=0;

 VAR_48 = FUNC_3 (VAR_15);
 VAR_27 = 0;






 ++VAR_23;

 if (VAR_30) {






  int VAR_67[2];


  VAR_67[0] = 0;
  VAR_67[1] = VAR_50;
  VAR_12[VAR_18] = 1;
  VAR_17[VAR_18].dfaacc_set =
   VAR_67;

  FUNC_16 (VAR_22 ? FUNC_13 () :
        FUNC_12 (), "yy_acclist", FUNC_1 (VAR_25,
           1) + 1);

        FUNC_4 (&VAR_42,
                "\t{YYTD_ID_ACCLIST, (void**)&yy_acclist, sizeof(%s)},\n",
                VAR_22 ? "flex_int32_t" : "flex_int16_t");

        VAR_57 = (struct yytbl_data*)FUNC_5(1,sizeof(struct yytbl_data));
        FUNC_21 (VAR_57, VAR_4);
        VAR_57->td_lolen = FUNC_1(VAR_25,1) + 1;
        VAR_57->td_data = VAR_63 =
            (flex_int32_t *) FUNC_5 (VAR_57->td_lolen, sizeof (flex_int32_t));
        VAR_65 = 1;

  VAR_44 = 1;

  for (VAR_43 = 1; VAR_43 <= VAR_21; ++VAR_43) {
   VAR_48[VAR_43] = VAR_44;

   if (VAR_12[VAR_43] != 0) {
    VAR_46 = VAR_17[VAR_43].dfaacc_set;
    VAR_47 = VAR_12[VAR_43];

    if (VAR_38)
     FUNC_9 (VAR_32,
       FUNC_2("state # %d accepts: "),
       VAR_43);

    for (VAR_45 = 1; VAR_45 <= VAR_47; ++VAR_45) {
     int VAR_68 = VAR_46[VAR_45];

     ++VAR_44;

     if (VAR_41
         && !(VAR_68 &
       VAR_10)
         && VAR_68 > 0
         && VAR_68 <= VAR_24
         && VAR_31[VAR_68] ==
         VAR_2) {




      VAR_68 |= VAR_11;
     }

     FUNC_14 (VAR_68);
                    VAR_63[VAR_65++] = VAR_68;

     if (VAR_38) {
      FUNC_9 (VAR_32, "[%d]",
        VAR_46[VAR_45]);

      if (VAR_45 < VAR_47)
       FUNC_10 (", ",
              VAR_32);
      else
       FUNC_17 ('\n',
             VAR_32);
     }
    }
   }
  }


  VAR_48[VAR_43] = VAR_44;

  FUNC_6 ();
        if (VAR_33) {
            FUNC_18 (VAR_57);
            if (FUNC_20 (&VAR_34, VAR_57) < 0)
                FUNC_8 (FUNC_2("Could not write yyacclist_tbl"));
            FUNC_19 (VAR_57);
            VAR_57 = ((void*)0);
        }
 }

 else {
  VAR_17[VAR_18].dfaacc_state =
   VAR_50;

  for (VAR_43 = 1; VAR_43 <= VAR_21; ++VAR_43)
   VAR_48[VAR_43] = VAR_17[VAR_43].dfaacc_state;


  VAR_48[VAR_43] = 0;
 }
 VAR_45 = VAR_21 + 2;

 if (VAR_30)





  ++VAR_45;

 FUNC_16 (VAR_22 ? FUNC_13 () : FUNC_12 (),
       "yy_accept", VAR_45);

 FUNC_4 (&VAR_42,
      "\t{YYTD_ID_ACCEPT, (void**)&yy_accept, sizeof(%s)},\n",
      VAR_22 ? "flex_int32_t" : "flex_int16_t");

 VAR_51 =
  (struct yytbl_data *) FUNC_5 (1,
           sizeof (struct yytbl_data));
 FUNC_21 (VAR_51, VAR_3);
 VAR_51->td_lolen = VAR_45;
 VAR_51->td_data = VAR_58 =
  (flex_int32_t *) FUNC_5 (VAR_51->td_lolen, sizeof (flex_int32_t));
    VAR_66=1;

 for (VAR_43 = 1; VAR_43 <= VAR_21; ++VAR_43) {
  FUNC_14 (VAR_48[VAR_43]);
  VAR_58[VAR_66++] = VAR_48[VAR_43];

  if (!VAR_30 && VAR_38 && VAR_48[VAR_43])
   FUNC_9 (VAR_32, FUNC_2("state # %d accepts: [%d]\n"),
     VAR_43, VAR_48[VAR_43]);
 }


 FUNC_14 (VAR_48[VAR_43]);
 VAR_58[VAR_66++] = VAR_48[VAR_43];

 if (VAR_30) {

  FUNC_14 (VAR_48[VAR_43]);
  VAR_58[VAR_66++] = VAR_48[VAR_43];
 }

 FUNC_6 ();
 if (VAR_33) {
  FUNC_18 (VAR_51);
  if (FUNC_20 (&VAR_34, VAR_51) < 0)
   FUNC_8 (FUNC_2("Could not write yyacc_tbl"));
  FUNC_19 (VAR_51);
  VAR_51 = ((void*)0);
 }


 if (VAR_39) {

  FUNC_11 ();
  if (VAR_33) {
   struct yytbl_data *VAR_69;

   VAR_69 = FUNC_15 ();
   FUNC_18 (VAR_69);
   if (FUNC_20 (&VAR_34, VAR_69) < 0)
    FUNC_8 (FUNC_2("Could not write ecstbl"));
   FUNC_19 (VAR_69);
   VAR_69 = 0;
  }
 }

 if (VAR_40) {




  flex_int32_t *VAR_70 = 0;
  VAR_52 =
   (struct yytbl_data *) FUNC_5 (1,
            sizeof (struct
             yytbl_data));
  FUNC_21 (VAR_52, VAR_8);
  VAR_52->td_lolen = VAR_26 + 1;
  VAR_52->td_data = VAR_70 =
   (flex_int32_t *) FUNC_5 (VAR_52->td_lolen,
         sizeof (flex_int32_t));

  if (VAR_38)
   FUNC_10 (FUNC_2("\n\nMeta-Equivalence Classes:\n"),
          VAR_32);

  FUNC_16 (FUNC_13 (), "yy_meta", VAR_26 + 1);
  FUNC_4 (&VAR_42,
       "\t{YYTD_ID_META, (void**)&yy_meta, sizeof(%s)},\n",
       "flex_int32_t");

  for (VAR_43 = 1; VAR_43 <= VAR_26; ++VAR_43) {
   if (VAR_38)
    FUNC_9 (VAR_32, "%d = %d\n",
      VAR_43, FUNC_0 (VAR_36[VAR_43]));

   FUNC_14 (FUNC_0 (VAR_36[VAR_43]));
   VAR_70[VAR_43] = FUNC_0 (VAR_36[VAR_43]);
  }

  FUNC_6 ();
  if (VAR_33) {
   FUNC_18 (VAR_52);
   if (FUNC_20 (&VAR_34, VAR_52) < 0)
    FUNC_8 (FUNC_2
        ("Could not write yymeta_tbl"));
   FUNC_19 (VAR_52);
   VAR_52 = ((void*)0);
  }

 }

 VAR_49 = VAR_21 + VAR_28;


 FUNC_16 ((VAR_35 >= VAR_0 || VAR_22) ?
       FUNC_13 () : FUNC_12 (),
       "yy_base", VAR_49 + 1);

 FUNC_4 (&VAR_42,
      "\t{YYTD_ID_BASE, (void**)&yy_base, sizeof(%s)},\n",
      (VAR_35 >= VAR_0
       || VAR_22) ? "flex_int32_t" : "flex_int16_t");
 VAR_53 =
  (struct yytbl_data *) FUNC_5 (1,
           sizeof (struct yytbl_data));
 FUNC_21 (VAR_53, VAR_5);
 VAR_53->td_lolen = VAR_49 + 1;
 VAR_53->td_data = VAR_59 =
  (flex_int32_t *) FUNC_5 (VAR_53->td_lolen,
        sizeof (flex_int32_t));
 VAR_64 = 1;

 for (VAR_43 = 1; VAR_43 <= VAR_21; ++VAR_43) {
  int VAR_71 = VAR_16[VAR_43];

  if (VAR_13[VAR_43] == VAR_1)
   VAR_13[VAR_43] = VAR_19;

  if (VAR_71 == VAR_1)
   VAR_16[VAR_43] = VAR_20;

  else if (VAR_71 < 0) {

   ++VAR_37;
   VAR_16[VAR_43] = VAR_21 - VAR_71 + 1;
  }

  FUNC_14 (VAR_13[VAR_43]);
  VAR_59[VAR_64++] = VAR_13[VAR_43];
 }


 FUNC_14 (VAR_13[VAR_43]);
 VAR_59[VAR_64++] = VAR_13[VAR_43];

 for (++VAR_43 ; VAR_43 <= VAR_49; ++VAR_43) {
  FUNC_14 (VAR_13[VAR_43]);
  VAR_59[VAR_64++] = VAR_13[VAR_43];
  VAR_16[VAR_43] = VAR_20;
 }

 FUNC_6 ();
 if (VAR_33) {
  FUNC_18 (VAR_53);
  if (FUNC_20 (&VAR_34, VAR_53) < 0)
   FUNC_8 (FUNC_2("Could not write yybase_tbl"));
  FUNC_19 (VAR_53);
  VAR_53 = ((void*)0);
 }




 FUNC_16 ((VAR_49 >= VAR_0 || VAR_22) ?
       FUNC_13 () : FUNC_12 (),
       "yy_def", VAR_49 + 1);

 FUNC_4 (&VAR_42,
      "\t{YYTD_ID_DEF, (void**)&yy_def, sizeof(%s)},\n",
      (VAR_49 >= VAR_0
       || VAR_22) ? "flex_int32_t" : "flex_int16_t");

 VAR_54 =
  (struct yytbl_data *) FUNC_5 (1,
           sizeof (struct yytbl_data));
 FUNC_21 (VAR_54, VAR_7);
 VAR_54->td_lolen = VAR_49 + 1;
 VAR_54->td_data = VAR_60 =
  (flex_int32_t *) FUNC_5 (VAR_54->td_lolen, sizeof (flex_int32_t));

 for (VAR_43 = 1; VAR_43 <= VAR_49; ++VAR_43) {
  FUNC_14 (VAR_16[VAR_43]);
  VAR_60[VAR_43] = VAR_16[VAR_43];
 }

 FUNC_6 ();
 if (VAR_33) {
  FUNC_18 (VAR_54);
  if (FUNC_20 (&VAR_34, VAR_54) < 0)
   FUNC_8 (FUNC_2("Could not write yydef_tbl"));
  FUNC_19 (VAR_54);
  VAR_54 = ((void*)0);
 }




 FUNC_16 ((VAR_49 >= VAR_0 || VAR_22) ?
       FUNC_13 () : FUNC_12 (), "yy_nxt",
       VAR_35 + 1);

 FUNC_4 (&VAR_42,
      "\t{YYTD_ID_NXT, (void**)&yy_nxt, sizeof(%s)},\n",
      (VAR_49 >= VAR_0
       || VAR_22) ? "flex_int32_t" : "flex_int16_t");

 VAR_55 =
  (struct yytbl_data *) FUNC_5 (1,
           sizeof (struct yytbl_data));
 FUNC_21 (VAR_55, VAR_9);
 VAR_55->td_lolen = VAR_35 + 1;
 VAR_55->td_data = VAR_61 =
  (flex_int32_t *) FUNC_5 (VAR_55->td_lolen, sizeof (flex_int32_t));

 for (VAR_43 = 1; VAR_43 <= VAR_35; ++VAR_43) {



  if (VAR_14[VAR_43] == 0 || VAR_29[VAR_43] == 0)
   VAR_29[VAR_43] = VAR_20;

  FUNC_14 (VAR_29[VAR_43]);
  VAR_61[VAR_43] = VAR_29[VAR_43];
 }

 FUNC_6 ();
 if (VAR_33) {
  FUNC_18 (VAR_55);
  if (FUNC_20 (&VAR_34, VAR_55) < 0)
   FUNC_8 (FUNC_2("Could not write yynxt_tbl"));
  FUNC_19 (VAR_55);
  VAR_55 = ((void*)0);
 }



 FUNC_16 ((VAR_49 >= VAR_0 || VAR_22) ?
       FUNC_13 () : FUNC_12 (), "yy_chk",
       VAR_35 + 1);

 FUNC_4 (&VAR_42,
      "\t{YYTD_ID_CHK, (void**)&yy_chk, sizeof(%s)},\n",
      (VAR_49 >= VAR_0
       || VAR_22) ? "flex_int32_t" : "flex_int16_t");

 VAR_56 =
  (struct yytbl_data *) FUNC_5 (1,
           sizeof (struct yytbl_data));
 FUNC_21 (VAR_56, VAR_6);
 VAR_56->td_lolen = VAR_35 + 1;
 VAR_56->td_data = VAR_62 =
  (flex_int32_t *) FUNC_5 (VAR_56->td_lolen, sizeof (flex_int32_t));

 for (VAR_43 = 1; VAR_43 <= VAR_35; ++VAR_43) {
  if (VAR_14[VAR_43] == 0)
   ++VAR_27;

  FUNC_14 (VAR_14[VAR_43]);
  VAR_62[VAR_43] = VAR_14[VAR_43];
 }

 FUNC_6 ();
 if (VAR_33) {
  FUNC_18 (VAR_56);
  if (FUNC_20 (&VAR_34, VAR_56) < 0)
   FUNC_8 (FUNC_2("Could not write yychk_tbl"));
  FUNC_19 (VAR_56);
  VAR_56 = ((void*)0);
 }


 FUNC_7 ((void *) VAR_48);
}
