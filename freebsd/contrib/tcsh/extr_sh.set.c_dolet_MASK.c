
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int * vec; } ;
struct command {int dummy; } ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct command*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,char) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,int*) ;
 struct varent* FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (char) ;
 char* FUNC_11 (char,int ,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int VAR_7 ;
 char* FUNC_17 (char*,char***) ;

void
FUNC_18(Char **VAR_8, struct command *VAR_9)
{
    Char *VAR_10;
    Char *VAR_11, VAR_12, VAR_13;
    int VAR_14;
    int VAR_15;

    FUNC_1(VAR_9);
    VAR_8++;
    VAR_10 = *VAR_8++;
    if (VAR_10 == 0) {
 FUNC_12();
 return;
    }
    do {
 VAR_14 = 0;
 VAR_11 = VAR_10;
 if (FUNC_10(*VAR_10))
     for (; FUNC_2(*VAR_10); VAR_10++)
  continue;
 if (VAR_11 == VAR_10 || !FUNC_10(*VAR_11))
     FUNC_14(VAR_1 | VAR_4);
 if (*VAR_10 == '[') {
     VAR_14++;
     VAR_10 = FUNC_8(VAR_10, &VAR_15);
 }
 if (*VAR_10 == 0 && *VAR_8)
     VAR_10 = *VAR_8++;
 if ((VAR_13 = *VAR_10) != 0)
     *VAR_10++ = 0;
 else
     FUNC_14(VAR_1 | VAR_0);





 if (*VAR_10 == '\0' && *VAR_8 == ((void*)0))
     FUNC_14(VAR_1 | VAR_0);

 VAR_11 = FUNC_0(VAR_11);
 FUNC_6(VAR_11, VAR_7);
 if (VAR_13 == '=') {
     VAR_12 = '=';
     VAR_10 = FUNC_17(VAR_10, &VAR_8);
 }
 else {
     VAR_12 = *VAR_10++;
     if (FUNC_3("+-", VAR_12)) {
  if (VAR_12 != VAR_13 || *VAR_10)
      FUNC_14(VAR_1 | VAR_3);
  VAR_10 = FUNC_0(VAR_5);
     }
     else {
  if (FUNC_3("<>", VAR_13)) {
      if (VAR_12 != VAR_13)
   FUNC_14(VAR_1 | VAR_3);
      FUNC_14(VAR_1 | VAR_2);
  }
  if (VAR_12 != '=')
      FUNC_14(VAR_1 | VAR_3);
  VAR_10 = FUNC_17(VAR_10, &VAR_8);
     }
 }
 FUNC_6(VAR_10, VAR_7);
 if (VAR_13 == '=') {
     if (VAR_14)
  FUNC_4(VAR_11, VAR_15, VAR_10);
     else
  FUNC_13(VAR_11, VAR_10, VAR_6);
     FUNC_5(VAR_10);
 }
 else if (VAR_14) {
     struct varent *VAR_16 = FUNC_9(VAR_11, VAR_15);
     Char *VAR_17;

     VAR_17 = FUNC_11(VAR_13, VAR_16->vec[VAR_15 - 1], VAR_10);
     FUNC_6(VAR_17, VAR_7);
     FUNC_4(VAR_11, VAR_15, VAR_17);
     FUNC_5(VAR_17);
     FUNC_7(VAR_17);
 }
 else {
     Char *VAR_18;

     VAR_18 = FUNC_11(VAR_13, FUNC_16(VAR_11), VAR_10);
     FUNC_6(VAR_18, VAR_7);
     FUNC_13(VAR_11, VAR_18, VAR_6);
     FUNC_5(VAR_18);
     FUNC_7(VAR_18);
 }
 FUNC_15(VAR_11);
 FUNC_7(VAR_11);
    } while ((VAR_10 = *VAR_8++) != ((void*)0));
}
