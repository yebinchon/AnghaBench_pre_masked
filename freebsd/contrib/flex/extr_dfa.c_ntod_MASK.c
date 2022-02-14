
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yytbl_data {int td_hilen; int td_lolen; int* td_data; } ;
typedef int flex_int32_t ;
struct TYPE_2__ {scalar_t__ dfaacc_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int*,int,int,int,int) ;
 int FUNC_3 (int *,char*,char*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (int*,int,int*,int) ;
 int FUNC_7 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_1__* VAR_8 ;
 int* VAR_9 ;
 int** VAR_10 ;
 int FUNC_10 (int) ;
 int* VAR_11 ;
 int VAR_12 ;
 int* FUNC_11 (int*,int*,int*,int*,int*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,int,...) ;
 int FUNC_16 (char*,int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_17 () ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_18 (int ,int ,int ,int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 () ;
 int* VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 size_t VAR_27 ;
 int * VAR_28 ;
 int * VAR_29 ;
 int FUNC_22 (char*,int) ;
 int FUNC_23 (char*,char*) ;
 int FUNC_24 (char*,char*,int) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (int*,int,int) ;
 scalar_t__ FUNC_27 (int*,int) ;
 int * VAR_30 ;
 int* VAR_31 ;
 scalar_t__ FUNC_28 (int*,int,int*,int,int,int*) ;
 int FUNC_29 (int,int ,int ,int ) ;
 int VAR_32 ;
 int FUNC_30 (int*,int,int,int*) ;
 int FUNC_31 (int*,int,int*,int*) ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int FUNC_32 (struct yytbl_data*) ;
 int FUNC_33 (struct yytbl_data*) ;
 scalar_t__ FUNC_34 (int *,struct yytbl_data*) ;
 int FUNC_35 (struct yytbl_data*,int ) ;

void FUNC_36 ()
{
 int *VAR_39, VAR_40, VAR_41, VAR_42;
 int VAR_43, VAR_44, VAR_45, VAR_46;
 int VAR_47=0;
 int *VAR_48, *VAR_49;
 int VAR_50, VAR_51, VAR_52, VAR_53, VAR_54, VAR_55;
 int VAR_56[VAR_0 + 1];
 int VAR_57;
 int VAR_58, VAR_59;

 struct yytbl_data *VAR_60 = 0;
 flex_int32_t *VAR_61 = 0, VAR_62 = 0;
 int VAR_63[VAR_0 + 1], VAR_64[VAR_0 + 1];
 int VAR_65[VAR_0 + 1], VAR_66[VAR_0 + 1];




 VAR_39 = FUNC_1 ((VAR_19 + 1) * 2);
 VAR_48 = FUNC_1 (VAR_6);







 VAR_58 = VAR_59 = 0;

 for (VAR_52 = 0; VAR_52 <= VAR_5; ++VAR_52) {
  VAR_63[VAR_52] = VAR_2;
  VAR_56[VAR_52] = 0;
 }

 for (VAR_52 = 0; VAR_52 <= VAR_19; ++VAR_52)
  VAR_39[VAR_52] = VAR_2;

 if (VAR_36) {
  FUNC_10 (VAR_31[1]);
  FUNC_16 (FUNC_0("\n\nDFA Dump:\n\n"), VAR_32);
 }

 FUNC_17 ();
 if (!VAR_13 && VAR_11[0] == VAR_22) {



  int VAR_67 = (VAR_22 == VAR_5);

  if (VAR_14 && !VAR_67) {



   int VAR_68;

   for (VAR_68 = 1; VAR_68 <= VAR_5;
        VAR_68 *= 2)
    if (VAR_22 == VAR_68) {
     VAR_67 = 1;
     break;
    }
  }

  if (VAR_67)
   VAR_18 =
    FUNC_1 (VAR_7);




 }


 if (VAR_13) {
  for (VAR_52 = 0; VAR_52 <= VAR_22; ++VAR_52)
   VAR_64[VAR_52] = 0;

  FUNC_26 (VAR_64, 0, 0);
  VAR_8[0].dfaacc_state = 0;
 }

 else if (VAR_14) {
  if (VAR_18)



   VAR_47 = VAR_22;

  else




   VAR_47 = VAR_22 + 1;







  VAR_60 =
   (struct yytbl_data *) FUNC_4 (1,
            sizeof (struct
             yytbl_data));
  FUNC_35 (VAR_60, VAR_4);
  VAR_60->td_hilen = 1;
  VAR_60->td_lolen = VAR_47;
  VAR_60->td_data = VAR_61 =
   (flex_int32_t *) FUNC_4 (VAR_60->td_lolen *
         VAR_60->td_hilen,
         sizeof (flex_int32_t));
  VAR_62 = 0;

  FUNC_3 (&VAR_38,
       "\t{YYTD_ID_NXT, (void**)&yy_nxt, sizeof(%s)},\n",
       VAR_17 ? "flex_int32_t" : "flex_int16_t");




  if (VAR_15)
   FUNC_24
    ("static yyconst %s yy_nxt[][%d] =\n    {\n",
     VAR_17 ? "flex_int32_t" : "flex_int16_t",
     VAR_47);
  else {
   FUNC_22 ("#undef YY_NXT_LOLEN\n#define YY_NXT_LOLEN (%d)\n", VAR_47);
   FUNC_23 ("static yyconst %s *yy_nxt =0;\n",
     VAR_17 ? "flex_int32_t" : "flex_int16_t");
  }


  if (VAR_15)
   FUNC_25 ("    {");


  for (VAR_52 = 0; VAR_52 < VAR_47; ++VAR_52) {
   FUNC_19 (0);
   VAR_61[VAR_62++] = 0;
  }

  FUNC_9 ();
  if (VAR_15)
   FUNC_25 ("    },\n");
 }



 VAR_57 = VAR_16 * 2;

 for (VAR_52 = 1; VAR_52 <= VAR_57; ++VAR_52) {
  VAR_45 = 1;





  if (VAR_52 % 2 == 1)
   VAR_48[VAR_45] = VAR_31[(VAR_52 / 2) + 1];
  else
   VAR_48[VAR_45] =
    FUNC_20 (VAR_30[VAR_52 / 2], VAR_31[VAR_52 / 2]);

  VAR_48 = FUNC_11 (VAR_48, &VAR_45, VAR_39, &VAR_41,
       &VAR_44);

  if (FUNC_28 (VAR_48, VAR_45, VAR_39, VAR_41, VAR_44, &VAR_40)) {
   VAR_20 += VAR_41;
   VAR_35 += VAR_45;
   ++VAR_59;

   if (VAR_37 && VAR_41 > 0)
    FUNC_6 (VAR_48, VAR_45,
       VAR_39, VAR_41);
  }
 }

 if (!VAR_13) {
  if (!FUNC_28 (VAR_48, 0, VAR_39, 0, 0, &VAR_12))
   FUNC_14 (FUNC_0
       ("could not create unique end-of-buffer state"));

  ++VAR_20;
  ++VAR_57;
  ++VAR_59;
 }


 while (VAR_58 < VAR_59) {
  VAR_50 = 0;
  VAR_51 = 0;

  for (VAR_52 = 1; VAR_52 <= VAR_22; ++VAR_52)
   VAR_64[VAR_52] = 0;

  VAR_40 = ++VAR_58;

  VAR_49 = VAR_10[VAR_40];
  VAR_46 = VAR_9[VAR_40];

  if (VAR_36)
   FUNC_15 (VAR_32, FUNC_0("state # %d:\n"), VAR_40);

  FUNC_31 (VAR_49, VAR_46, VAR_56, VAR_63);

  for (VAR_43 = 1; VAR_43 <= VAR_22; ++VAR_43) {
   if (VAR_56[VAR_43]) {
    VAR_56[VAR_43] = 0;

    if (VAR_63[VAR_43] == VAR_2) {

     VAR_45 =
      FUNC_30 (VAR_49, VAR_46,
             VAR_43, VAR_48);
     VAR_48 = FUNC_11 (VAR_48,
          &VAR_45,
          VAR_39, &VAR_41,
          &VAR_44);

     if (FUNC_28
         (VAR_48, VAR_45, VAR_39, VAR_41,
          VAR_44, &VAR_42)) {
      VAR_35 = VAR_35 +
       VAR_45;
      ++VAR_59;
      VAR_20 += VAR_41;

      if (VAR_37 && VAR_41 > 0)
       FUNC_6
        (VAR_48,
         VAR_45,
         VAR_39,
         VAR_41);
     }

     VAR_64[VAR_43] = VAR_42;

     if (VAR_36)
      FUNC_15 (VAR_32,
        "\t%d\t%d\n", VAR_43,
        VAR_42);

     VAR_65[++VAR_50] = 1;
     VAR_66[VAR_50] = VAR_42;
     ++VAR_24;
    }

    else {




     VAR_55 = VAR_64[VAR_63[VAR_43]];
     VAR_64[VAR_43] = VAR_55;

     if (VAR_36)
      FUNC_15 (VAR_32,
        "\t%d\t%d\n", VAR_43,
        VAR_55);





     VAR_52 = 0;
     while (VAR_66[++VAR_52] != VAR_55) ;

     ++VAR_65[VAR_52];
     ++VAR_21;
    }

    ++VAR_51;
    VAR_63[VAR_43] = VAR_2;
   }
  }


  VAR_23 += VAR_51;

  if (VAR_40 > VAR_57)
   FUNC_5 (VAR_40, VAR_64);

  if (VAR_18) {
   VAR_18[VAR_40] = VAR_64[VAR_3];
   VAR_64[VAR_3] = 0;
  }

  if (VAR_14) {


   VAR_60->td_hilen++;
   VAR_60->td_data = VAR_61 =
    (flex_int32_t *) FUNC_27 (VAR_61,
           VAR_60->td_hilen *
           VAR_60->td_lolen *
           sizeof (flex_int32_t));


   if (VAR_15)
    FUNC_25 ("    {");


   if (VAR_40 == VAR_12) {
    FUNC_19 (-VAR_12);
    VAR_61[VAR_62++] =
     -VAR_12;
   }
   else {
    FUNC_19 (VAR_12);
    VAR_61[VAR_62++] =
     VAR_12;
   }

   for (VAR_52 = 1; VAR_52 < VAR_47; ++VAR_52) {



    FUNC_19 (VAR_64[VAR_52] ? VAR_64[VAR_52] : -VAR_40);
    VAR_61[VAR_62++] =
     VAR_64[VAR_52] ? VAR_64[VAR_52] : -VAR_40;
   }

   FUNC_9 ();
   if (VAR_15)
    FUNC_25 ("    },\n");
  }

  else if (VAR_13)
   FUNC_26 (VAR_64, VAR_40, VAR_51);

  else if (VAR_40 == VAR_12)



   FUNC_29 (VAR_40, 0, 0, VAR_1);

  else {





   VAR_54 = 0;
   VAR_53 = 0;

   for (VAR_52 = 1; VAR_52 <= VAR_50; ++VAR_52)
    if (VAR_65[VAR_52] > VAR_54) {
     VAR_54 = VAR_65[VAR_52];
     VAR_53 = VAR_66[VAR_52];
    }

   FUNC_2 (VAR_64, VAR_40, VAR_51, VAR_53, VAR_54);
  }
 }

 if (VAR_14) {
  FUNC_8 ();
  if (VAR_33) {
   FUNC_32 (VAR_60);
   if (FUNC_34 (&VAR_34, VAR_60) < 0)
    FUNC_13 (FUNC_0
        ("Could not write yynxt_tbl[][]"));
  }
  if (VAR_60) {
   FUNC_33 (VAR_60);
   VAR_60 = 0;
  }
 }

 else if (!VAR_13) {
  FUNC_7 ();




  while (VAR_27 > 0) {
   FUNC_18 (VAR_28[VAR_27], VAR_29[VAR_27],
    VAR_26[VAR_27], VAR_25[VAR_27]);
   --VAR_27;
  }

  FUNC_21 ();
 }

 FUNC_12 ((void *) VAR_39);
 FUNC_12 ((void *) VAR_48);
}
