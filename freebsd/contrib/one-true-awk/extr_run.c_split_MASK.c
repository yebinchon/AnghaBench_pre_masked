
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uschar ;
struct TYPE_12__ {int initstat; scalar_t__ restr; } ;
typedef TYPE_1__ fa ;
struct TYPE_13__ {int tval; char* sval; int fval; int nval; } ;
typedef int Node ;
typedef TYPE_2__ Cell ;
typedef int Array ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* VAR_6 ;
 char* FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 () ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (char*,int) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (TYPE_1__*,char*) ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,char*,double,int,int *) ;
 int FUNC_16 (char*,char*,int) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (TYPE_2__*) ;

Cell *FUNC_20(Node **VAR_9, int VAR_10)
{
 Cell *VAR_11 = ((void*)0), *VAR_12, *VAR_13;
 char *VAR_14, *VAR_15;
 char *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 int VAR_18;
 char *VAR_19, VAR_20, VAR_21[50];
 int VAR_22, VAR_23, VAR_24;

 VAR_12 = FUNC_4(VAR_9[0]);
 VAR_15 = VAR_14 = FUNC_17(FUNC_7(VAR_12));
 VAR_24 = FUNC_14(VAR_9[3]);
 if (VAR_9[2] == ((void*)0))
  VAR_16 = FUNC_7(VAR_6);
 else if (VAR_24 == VAR_5) {
  VAR_11 = FUNC_4(VAR_9[2]);
  VAR_17 = VAR_16 = FUNC_17(FUNC_7(VAR_11));
  FUNC_19(VAR_11);
 } else if (VAR_24 == VAR_3)
  VAR_16 = "(regexpr)";
 else
  FUNC_0("illegal type of split");
 VAR_18 = *VAR_16;
 VAR_13 = FUNC_4(VAR_9[1]);
 FUNC_6(VAR_13);
    FUNC_3( ("split: s=|%s|, a=%s, sep=|%s|\n", VAR_14, FUNC_1(VAR_13->nval), VAR_16) );
 VAR_13->tval &= ~VAR_4;
 VAR_13->tval |= VAR_0;
 VAR_13->sval = (char *) FUNC_12(VAR_1);

 VAR_22 = 0;
        if (VAR_24 == VAR_3 && FUNC_18((char*)((fa*)VAR_9[2])->restr) == 0) {

  VAR_24 = 0;
  VAR_16 = "";
  VAR_18 = 0;
 }
 if (*VAR_14 != '\0' && (FUNC_18(VAR_16) > 1 || VAR_24 == VAR_3)) {
  fa *VAR_25;
  if (VAR_24 == VAR_3) {
   VAR_25 = (fa *) VAR_9[2];
  } else {
   VAR_25 = FUNC_11(VAR_16, 1);
  }
  if (FUNC_13(VAR_25,VAR_14)) {
   VAR_23 = VAR_25->initstat;
   VAR_25->initstat = 2;
   do {
    VAR_22++;
    FUNC_16(VAR_21, "%d", VAR_22);
    VAR_20 = *VAR_7;
    *VAR_7 = '\0';
    if (FUNC_9(VAR_14))
     FUNC_15(VAR_21, VAR_14, FUNC_2(VAR_14), VAR_4|VAR_2, (Array *) VAR_13->sval);
    else
     FUNC_15(VAR_21, VAR_14, 0.0, VAR_4, (Array *) VAR_13->sval);
    *VAR_7 = VAR_20;
    VAR_14 = VAR_7 + VAR_8;
    if (*(VAR_7+VAR_8-1) == 0 || *VAR_14 == 0) {
     VAR_22++;
     FUNC_16(VAR_21, "%d", VAR_22);
     FUNC_15(VAR_21, "", 0.0, VAR_4, (Array *) VAR_13->sval);
     VAR_25->initstat = VAR_23;
     goto spdone;
    }
   } while (FUNC_13(VAR_25,VAR_14));
   VAR_25->initstat = VAR_23;

  }
  VAR_22++;
  FUNC_16(VAR_21, "%d", VAR_22);
  if (FUNC_9(VAR_14))
   FUNC_15(VAR_21, VAR_14, FUNC_2(VAR_14), VAR_4|VAR_2, (Array *) VAR_13->sval);
  else
   FUNC_15(VAR_21, VAR_14, 0.0, VAR_4, (Array *) VAR_13->sval);
  spdone:
  VAR_25 = ((void*)0);
 } else if (VAR_18 == ' ') {
  for (VAR_22 = 0; ; ) {
   while (*VAR_14 == ' ' || *VAR_14 == '\t' || *VAR_14 == '\n')
    VAR_14++;
   if (*VAR_14 == 0)
    break;
   VAR_22++;
   VAR_19 = VAR_14;
   do
    VAR_14++;
   while (*VAR_14!=' ' && *VAR_14!='\t' && *VAR_14!='\n' && *VAR_14!='\0');
   VAR_20 = *VAR_14;
   *VAR_14 = '\0';
   FUNC_16(VAR_21, "%d", VAR_22);
   if (FUNC_9(VAR_19))
    FUNC_15(VAR_21, VAR_19, FUNC_2(VAR_19), VAR_4|VAR_2, (Array *) VAR_13->sval);
   else
    FUNC_15(VAR_21, VAR_19, 0.0, VAR_4, (Array *) VAR_13->sval);
   *VAR_14 = VAR_20;
   if (*VAR_14 != 0)
    VAR_14++;
  }
 } else if (VAR_18 == 0) {
  for (VAR_22 = 0; *VAR_14 != 0; VAR_14++) {
   char VAR_26[2];
   VAR_22++;
   FUNC_16(VAR_21, "%d", VAR_22);
   VAR_26[0] = *VAR_14;
   VAR_26[1] = 0;
   if (FUNC_10((uschar)VAR_26[0]))
    FUNC_15(VAR_21, VAR_26, FUNC_2(VAR_26), VAR_4|VAR_2, (Array *) VAR_13->sval);
   else
    FUNC_15(VAR_21, VAR_26, 0.0, VAR_4, (Array *) VAR_13->sval);
  }
 } else if (*VAR_14 != 0) {
  for (;;) {
   VAR_22++;
   VAR_19 = VAR_14;
   while (*VAR_14 != VAR_18 && *VAR_14 != '\n' && *VAR_14 != '\0')
    VAR_14++;
   VAR_20 = *VAR_14;
   *VAR_14 = '\0';
   FUNC_16(VAR_21, "%d", VAR_22);
   if (FUNC_9(VAR_19))
    FUNC_15(VAR_21, VAR_19, FUNC_2(VAR_19), VAR_4|VAR_2, (Array *) VAR_13->sval);
   else
    FUNC_15(VAR_21, VAR_19, 0.0, VAR_4, (Array *) VAR_13->sval);
   *VAR_14 = VAR_20;
   if (*VAR_14++ == 0)
    break;
  }
 }
 FUNC_19(VAR_13);
 FUNC_19(VAR_12);
 FUNC_5(VAR_15);
 FUNC_5(VAR_17);
 VAR_11 = FUNC_8();
 VAR_11->tval = VAR_2;
 VAR_11->fval = VAR_22;
 return(VAR_11);
}
