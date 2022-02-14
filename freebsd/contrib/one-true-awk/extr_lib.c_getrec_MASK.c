
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uschar ;
struct TYPE_7__ {char* sval; int tval; int fval; } ;
struct TYPE_6__ {int fval; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 char** VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_3__** VAR_13 ;
 TYPE_1__* VAR_14 ;
 int * FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 char* FUNC_6 (scalar_t__) ;
 int * VAR_15 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 TYPE_1__* VAR_16 ;
 int FUNC_10 (char**,int*,int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int * VAR_17 ;
 int FUNC_13 (char*) ;

int FUNC_14(char **VAR_18, int *VAR_19, int VAR_20)
{
 int VAR_21;
 char *VAR_22 = *VAR_18;
 uschar VAR_23;
 int VAR_24 = *VAR_19, VAR_25 = VAR_24;

 if (VAR_12) {
  VAR_12 = 0;
  FUNC_7();
 }
    FUNC_2( ("RS=<%s>, FS=<%s>, ARGC=%g, FILENAME=%s\n",
  *VAR_6, *VAR_3, *VAR_0, *VAR_2) );
 if (VAR_20) {
  VAR_9 = 0;
  VAR_10 = 1;
 }
 VAR_23 = VAR_22[0];
 VAR_22[0] = 0;
 while (VAR_8 < *VAR_0 || VAR_15 == VAR_17) {
     FUNC_2( ("argno=%d, file=|%s|\n", VAR_8, VAR_11) );
  if (VAR_15 == ((void*)0)) {
   VAR_11 = FUNC_6(VAR_8);
   if (VAR_11 == ((void*)0) || *VAR_11 == '\0') {
    VAR_8++;
    continue;
   }
   if (FUNC_9(VAR_11)) {
    FUNC_11(VAR_11);
    VAR_8++;
    continue;
   }
   *VAR_2 = VAR_11;
      FUNC_2( ("opening file %s\n", VAR_11) );
   if (*VAR_11 == '-' && *(VAR_11+1) == '\0')
    VAR_15 = VAR_17;
   else if ((VAR_15 = FUNC_4(VAR_11, "r")) == ((void*)0))
    FUNC_0("can't open file %s", VAR_11);
   FUNC_12(VAR_14, 0.0);
  }
  VAR_21 = FUNC_10(&VAR_22, &VAR_24, VAR_15);
  if (VAR_21 != 0 || VAR_22[0] != '\0') {
   if (VAR_20) {
    if (FUNC_5(VAR_13[0]))
     FUNC_13(VAR_13[0]->sval);
    VAR_13[0]->sval = VAR_22;
    VAR_13[0]->tval = VAR_5 | VAR_7 | VAR_1;
    if (FUNC_8(VAR_13[0]->sval)) {
     VAR_13[0]->fval = FUNC_1(VAR_13[0]->sval);
     VAR_13[0]->tval |= VAR_4;
    }
   }
   FUNC_12(VAR_16, VAR_16->fval+1);
   FUNC_12(VAR_14, VAR_14->fval+1);
   *VAR_18 = VAR_22;
   *VAR_19 = VAR_24;
   return 1;
  }

  if (VAR_15 != VAR_17)
   FUNC_3(VAR_15);
  VAR_15 = ((void*)0);
  VAR_8++;
 }
 VAR_22[0] = VAR_23;
 *VAR_18 = VAR_22;
 *VAR_19 = VAR_25;
 return 0;
}
