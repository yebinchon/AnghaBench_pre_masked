
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
typedef scalar_t__ ReturnStatus ;
typedef int Lst ;
typedef TYPE_1__ GNode ;
typedef scalar_t__ Boolean ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_7 (char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_8 (char*,TYPE_1__*,int,int*,void**) ;
 char* FUNC_9 (int *,char*,TYPE_1__*,int) ;
 char* FUNC_10 (size_t) ;
 char* FUNC_11 (char*,size_t) ;
 int VAR_9 ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (unsigned char) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,size_t,char*,char*,char*) ;
 scalar_t__ FUNC_16 (char*,char) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;
 char* VAR_10 ;

ReturnStatus
FUNC_19(char **VAR_11, Lst VAR_12, GNode *VAR_13)
{
    char *VAR_14;
    GNode *VAR_15;
    char *VAR_16;
    char *VAR_17;
    char *VAR_18;
    char VAR_19;
    Boolean VAR_20;


    VAR_16 = *VAR_11;

    VAR_20 = VAR_1;

    for (VAR_14 = VAR_16; *VAR_14 != '(' && *VAR_14 != '\0'; VAR_14++) {
 if (*VAR_14 == '$') {




     int VAR_21;
     void *VAR_22;
     char *VAR_23;

     VAR_23 = FUNC_8(VAR_14, VAR_13, VAR_7|VAR_8,
          &VAR_21, &VAR_22);
     FUNC_12(VAR_22);

     if (VAR_23 == VAR_10) {
  return(VAR_0);
     } else {
  VAR_20 = VAR_6;
     }

     VAR_14 += VAR_21-1;
 }
    }

    *VAR_14++ = '\0';
    if (VAR_20) {
 VAR_16 = FUNC_9(((void*)0), VAR_16, VAR_13, VAR_7|VAR_8);
    }


    for (;;) {





 Boolean VAR_24 = VAR_1;

 while (*VAR_14 != '\0' && *VAR_14 != ')' && FUNC_13 ((unsigned char)*VAR_14)) {
     VAR_14++;
 }
 VAR_17 = VAR_14;
 while (*VAR_14 != '\0' && *VAR_14 != ')' && !FUNC_13 ((unsigned char)*VAR_14)) {
     if (*VAR_14 == '$') {




  int VAR_25;
  void *VAR_26;
  char *VAR_27;

  VAR_27 = FUNC_8(VAR_14, VAR_13, VAR_7|VAR_8,
       &VAR_25, &VAR_26);
  FUNC_12(VAR_26);

  if (VAR_27 == VAR_10) {
      return(VAR_0);
  } else {
      VAR_24 = VAR_6;
  }

  VAR_14 += VAR_25;
     } else {
  VAR_14++;
     }
 }






 if (*VAR_14 == '\0') {
     FUNC_14("No closing parenthesis in archive specification\n");
     return (VAR_0);
 }




 if (VAR_14 == VAR_17) {
     break;
 }

 VAR_19 = *VAR_14;
 *VAR_14 = '\0';
 if (VAR_24) {
     char *VAR_28;
     char *VAR_29;
     char *VAR_30 = VAR_17;
     size_t VAR_31;

     VAR_17 = FUNC_9(((void*)0), VAR_17, VAR_13,
    VAR_7|VAR_8);






     VAR_31 = FUNC_18(VAR_17)+FUNC_18(VAR_16)+3;
     VAR_28 = VAR_29 = FUNC_10(VAR_31);

     FUNC_15(VAR_28, VAR_31, "%s(%s)", VAR_16, VAR_17);

     if (FUNC_16(VAR_17, '$') && FUNC_17(VAR_17, VAR_30) == 0) {





  VAR_15 = FUNC_7(VAR_28, VAR_5);

  if (VAR_15 == ((void*)0)) {
      FUNC_12(VAR_28);
      return(VAR_0);
  } else {
      VAR_15->type |= VAR_3;
      (void)FUNC_2(VAR_12, VAR_15);
  }
     } else if (FUNC_19(&VAR_29, VAR_12, VAR_13)!=VAR_4) {




  FUNC_12(VAR_28);
  return(VAR_0);
     }



     FUNC_12(VAR_28);
 } else if (FUNC_1(VAR_17)) {
     Lst VAR_32 = FUNC_5(VAR_1);
     char *VAR_33;
     size_t VAR_34 = VAR_2, VAR_35;
     VAR_18 = FUNC_10(VAR_34);

     FUNC_0(VAR_17, VAR_9, VAR_32);
     while (!FUNC_6(VAR_32)) {
  VAR_33 = (char *)FUNC_3(VAR_32);
  VAR_35 = FUNC_18(VAR_16) + FUNC_18(VAR_33) + 3;
  if (VAR_34 > VAR_35)
      VAR_18 = FUNC_11(VAR_18, VAR_34 = VAR_35 * 2);

  FUNC_15(VAR_18, VAR_34, "%s(%s)", VAR_16, VAR_33);
  FUNC_12(VAR_33);
  VAR_15 = FUNC_7(VAR_18, VAR_5);
  if (VAR_15 == ((void*)0)) {
      FUNC_12(VAR_18);
      return (VAR_0);
  } else {







      VAR_15->type |= VAR_3;
      (void)FUNC_2(VAR_12, VAR_15);
  }
     }
     FUNC_4(VAR_32, ((void*)0));
     FUNC_12(VAR_18);
 } else {
     size_t VAR_36 = FUNC_18(VAR_16) + FUNC_18(VAR_17) + 3;
     VAR_18 = FUNC_10(VAR_36);
     FUNC_15(VAR_18, VAR_36, "%s(%s)", VAR_16, VAR_17);
     VAR_15 = FUNC_7(VAR_18, VAR_5);
     FUNC_12(VAR_18);
     if (VAR_15 == ((void*)0)) {
  return (VAR_0);
     } else {







  VAR_15->type |= VAR_3;
  (void)FUNC_2(VAR_12, VAR_15);
     }
 }
 if (VAR_24) {
     FUNC_12(VAR_17);
 }

 *VAR_14 = VAR_19;
    }




    if (VAR_20) {
 FUNC_12(VAR_16);
    }






    do {
 VAR_14++;
    } while (*VAR_14 != '\0' && FUNC_13 ((unsigned char)*VAR_14));

    *VAR_11 = VAR_14;
    return (VAR_4);
}
