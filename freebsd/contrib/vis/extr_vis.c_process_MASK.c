
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wint_t ;
typedef int mbibuff ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,int,int ,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int *) ;
 char FUNC_2 (int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char*,int,char*,int,int,int ,int*) ;
 int FUNC_7 (char*,char) ;

__attribute__((used)) static void
FUNC_8(FILE *VAR_13)
{
 static int VAR_14 = 0;
 static char VAR_15[] = "\0";
 char *VAR_16 = VAR_15 + 1;
 wint_t VAR_17, VAR_18, VAR_19;
 char VAR_20[2 * VAR_1 + 1];
 char VAR_21[4 * VAR_1 + 1];
 int VAR_22, VAR_23 = 0, VAR_24 = 0;
 VAR_17 = FUNC_2(VAR_13);
 if (VAR_17 == VAR_4 && VAR_7 == VAR_0) {

  VAR_17 = (wint_t)FUNC_1(VAR_13);
  VAR_23 = 1;
 }
 while (VAR_17 != VAR_4) {

  FUNC_3(VAR_20, 0, sizeof(VAR_20));

  if (!VAR_23)
   VAR_19 = FUNC_2(VAR_13);
  if (VAR_23 || (VAR_19 == VAR_4 && VAR_7 == VAR_0)) {

   VAR_19 = (wint_t)FUNC_1(VAR_13);
   VAR_24 = 1;
  }
  if (VAR_12) {

   VAR_16 = VAR_21;
   *VAR_16++ = VAR_17;
   if (VAR_17 == '\\')
    *VAR_16++ = '\\';
   *VAR_16 = '\0';
  } else if (VAR_11 && VAR_17 == '\n') {

   VAR_16 = VAR_21;
   if ((VAR_6 & VAR_3) == 0)
    *VAR_16++ = '\\';
   *VAR_16++ = '$';
   *VAR_16++ = '\n';
   *VAR_16 = '\0';
  } else {
   VAR_18 = VAR_19;
   if (VAR_18 == VAR_4)
    VAR_18 = L'\0';






   if (VAR_23) {
    *VAR_20 = (char)VAR_17;
    VAR_22 = 1;
   } else
    VAR_22 = FUNC_7(VAR_20, VAR_17);

   if (VAR_24)
    VAR_20[VAR_22] = (char)VAR_18;
   else
    FUNC_7(VAR_20 + VAR_22, VAR_18);

   (void) FUNC_6(VAR_21, 4 * VAR_1, VAR_20,
       1, VAR_6, VAR_8, &VAR_23);
  }

  VAR_16 = VAR_21;
  if (VAR_9) {




   VAR_14 = FUNC_0(VAR_16, VAR_14, VAR_10, VAR_6);




  }
  do {
   (void)FUNC_5(*VAR_16);
  } while (*++VAR_16);
  VAR_17 = VAR_19;
  VAR_23 = VAR_24;
 }



 if (VAR_9 && *(VAR_16 - 1) != '\n')
  (void)FUNC_4(VAR_6 & VAR_2 ? "=\n" : "\\\n");
}
