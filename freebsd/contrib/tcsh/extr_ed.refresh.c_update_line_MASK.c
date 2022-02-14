
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 char* FUNC_5 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,int,int,int) ;
 int FUNC_12 (char*,int,int,char*,int) ;

__attribute__((used)) static void
FUNC_13(Char *VAR_8, Char *VAR_9, int VAR_10)
{
    Char *VAR_11, *VAR_12, *VAR_13, VAR_14;
    Char *VAR_15, *VAR_16, *VAR_17, *VAR_18, *VAR_19, *VAR_20;
    Char *VAR_21, *VAR_22, *VAR_23, *VAR_24;
    int VAR_25, VAR_26;




    for (VAR_11 = VAR_8, VAR_12 = VAR_9; *VAR_11 && (*VAR_11 == *VAR_12); VAR_11++, VAR_12++)
 continue;
    VAR_15 = VAR_11;
    VAR_18 = VAR_12;




    VAR_11 = FUNC_5(VAR_11);





    if (!(FUNC_6(VAR_4) && VAR_3)) {
    while (VAR_15 < VAR_11) {
 if (VAR_11[-1] != ' ')
     break;
 VAR_11--;
    }
    }
    VAR_17 = VAR_11;
    *VAR_17 = (Char) 0;

    VAR_12 = FUNC_5(VAR_12);


    if (!(FUNC_6(VAR_4) && VAR_3)) {
    while (VAR_18 < VAR_12) {
 if (VAR_12[-1] != ' ')
     break;
 VAR_12--;
    }
    }
    VAR_20 = VAR_12;
    *VAR_20 = (Char) 0;




    if (*VAR_15 == '\0' && *VAR_18 == '\0') {



 return;
    }




    while ((VAR_11 > VAR_15) && (VAR_12 > VAR_18) && (*--VAR_11 == *--VAR_12))
 continue;
    if (*VAR_11 != *VAR_12) {
 VAR_11++;
 VAR_12++;
    }
    while (*VAR_11 == VAR_0) {
 VAR_11++;
 VAR_12++;
    }
    VAR_16 = VAR_11;
    VAR_19 = VAR_12;




    VAR_21 = VAR_16;
    VAR_23 = VAR_19;
    VAR_22 = VAR_16;
    VAR_24 = VAR_19;




    if (*VAR_15) {
 for (VAR_14 = *VAR_15, VAR_12 = VAR_18; VAR_12 < VAR_19; VAR_12++) {
     if (VAR_14 == *VAR_12) {
  for (VAR_11 = VAR_15, VAR_13 = VAR_12; VAR_13 < VAR_19 && VAR_11 < VAR_16 && *VAR_11 == *VAR_13; VAR_11++, VAR_13++)
      continue;




  if (((VAR_24 - VAR_23) < (VAR_13 - VAR_12)) && (2 * (VAR_13 - VAR_12) > VAR_12 - VAR_18)) {
      VAR_23 = VAR_12;
      VAR_24 = VAR_13;
      VAR_21 = VAR_15;
      VAR_22 = VAR_11;
  }
     }
 }
    }




    if (*VAR_18) {
 for (VAR_14 = *VAR_18, VAR_11 = VAR_15; VAR_11 < VAR_16; VAR_11++) {
     if (VAR_14 == *VAR_11) {
  for (VAR_12 = VAR_18, VAR_13 = VAR_11; VAR_13 < VAR_16 && VAR_12 < VAR_19 && *VAR_13 == *VAR_12; VAR_13++, VAR_12++)
      continue;




  if (((VAR_22 - VAR_21) < (VAR_13 - VAR_11)) && (2 * (VAR_13 - VAR_11) > VAR_11 - VAR_15)) {
      VAR_23 = VAR_18;
      VAR_24 = VAR_12;
      VAR_21 = VAR_11;
      VAR_22 = VAR_13;
  }
     }
 }
    }
    if ((VAR_17 - VAR_16) < VAR_2) {
 VAR_16 = VAR_17;
 VAR_19 = VAR_20;
    }
    VAR_25 = (int) ((VAR_23 - VAR_18) - (VAR_21 - VAR_15));




    VAR_26 = (int) ((VAR_19 - VAR_24) - (VAR_16 - VAR_22));

    if (!VAR_6) {
 if (VAR_25 > 0) {
     VAR_21 = VAR_16;
     VAR_22 = VAR_16;
     VAR_23 = VAR_19;
     VAR_24 = VAR_19;
 }
 if (VAR_26 > 0) {
     VAR_16 = VAR_17;
     VAR_19 = VAR_20;
 }
 if ((VAR_16 - VAR_15) < (VAR_19 - VAR_18)) {
     VAR_16 = VAR_17;
     VAR_19 = VAR_20;
 }
    }
    if (!VAR_5) {
 if (VAR_25 < 0) {
     VAR_21 = VAR_16;
     VAR_22 = VAR_16;
     VAR_23 = VAR_19;
     VAR_24 = VAR_19;
 }
 if (VAR_26 < 0) {
     VAR_16 = VAR_17;
     VAR_19 = VAR_20;
 }
 if ((VAR_16 - VAR_15) > (VAR_19 - VAR_18)) {
     VAR_16 = VAR_17;
     VAR_19 = VAR_20;
 }
    }







    if ((VAR_22 - VAR_21) < VAR_2) {
 VAR_21 = VAR_16;
 VAR_22 = VAR_16;
 VAR_23 = VAR_19;
 VAR_24 = VAR_19;
    }




    VAR_25 = (int) ((VAR_23 - VAR_18) - (VAR_21 - VAR_15));
    VAR_26 = (int) ((VAR_19 - VAR_24) - (VAR_16 - VAR_22));
    FUNC_4(VAR_10);
    VAR_13 = (VAR_16 != VAR_17) ? VAR_17 : VAR_22;







    if ((VAR_23 != VAR_18) && VAR_25 > 0 && ((VAR_13 - VAR_8) + VAR_25 < VAR_7)) {






 FUNC_3(VAR_18 - VAR_9);



 if (VAR_23 != VAR_20) {






     if (VAR_25 > 0) {




  FUNC_2(VAR_18, VAR_25);
  FUNC_12(VAR_8, (int) (VAR_15 - VAR_8), VAR_7, VAR_18, VAR_25);
     }



     FUNC_9(VAR_18 + VAR_25, (VAR_23 - VAR_18) - VAR_25);
     FUNC_10(VAR_15 + VAR_25, VAR_18 + VAR_25, (int) ((VAR_23 - VAR_18) - VAR_25));
 }
 else {



     FUNC_9(VAR_18, (VAR_23 - VAR_18));
     FUNC_10(VAR_15, VAR_18, (int) (VAR_23 - VAR_18));



     return;
 }
    }
    else if (VAR_25 < 0) {






 FUNC_3(VAR_15 - VAR_8);



 if (VAR_21 != VAR_17) {







     if (VAR_25 < 0) {




  FUNC_1(-VAR_25);
  FUNC_11(VAR_8, (int) (VAR_15 - VAR_8), VAR_7, -VAR_25);
     }



     FUNC_9(VAR_18, (VAR_23 - VAR_18));
     FUNC_10(VAR_15, VAR_18, (int) (VAR_23 - VAR_18));

 }
 else {






     FUNC_9(VAR_18, (VAR_23 - VAR_18));




     FUNC_0((VAR_17 - VAR_8) - (VAR_20 - VAR_9));
     return;
 }
    }
    else
 VAR_25 = 0;

    if (VAR_26 < 0) {
 FUNC_3((VAR_22 - VAR_8) + VAR_25);



 if (VAR_16 != VAR_17) {






     if (VAR_26 < 0) {




  FUNC_1(-VAR_26);
     }




     FUNC_9(VAR_24, (VAR_19 - VAR_24));
 }
 else {
     int VAR_27 = (int) (VAR_17 - VAR_8 + VAR_25);
     if (VAR_27 > VAR_7)
  VAR_27 = VAR_7;



     FUNC_9(VAR_24, (VAR_19 - VAR_24));




     FUNC_0(VAR_27 - (VAR_20 - VAR_9));






 }
    }




    if ((VAR_23 != VAR_18) && (VAR_21 - VAR_15) <= (VAR_23 - VAR_18) && (VAR_25 == 0)) {




 FUNC_3(VAR_18 - VAR_9);



 if (VAR_23 != VAR_20) {
     VAR_25 = (int) ((VAR_23 - VAR_18) - (VAR_21 - VAR_15));
     if (VAR_25 > 0) {







  FUNC_2(VAR_18, VAR_25);
  FUNC_12(VAR_8, (int) (VAR_15 - VAR_8), VAR_7, VAR_18, VAR_25);
     }




     FUNC_9(VAR_18 + VAR_25, (VAR_23 - VAR_18) - VAR_25);
     FUNC_10(VAR_15 + VAR_25, VAR_18 + VAR_25, (int) ((VAR_23 - VAR_18) - VAR_25));
 }
 else {



     FUNC_9(VAR_18, (VAR_23 - VAR_18));
     FUNC_10(VAR_15, VAR_18, (int) (VAR_23 - VAR_18));
 }
    }




    if (VAR_26 >= 0) {



 FUNC_3(VAR_24 - VAR_9);
 if (VAR_16 != VAR_17) {



     if (VAR_26 > 0) {





  FUNC_2(VAR_24, VAR_26);
     }




     FUNC_9(VAR_24 + VAR_26, (VAR_19 - VAR_24) - VAR_26);
 }
 else {



     FUNC_9(VAR_24, (VAR_19 - VAR_24));






 }
    }



}
