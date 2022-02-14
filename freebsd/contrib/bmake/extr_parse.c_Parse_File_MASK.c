
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loadedfile {int dummy; } ;
struct TYPE_2__ {int lineno; struct loadedfile* lf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (scalar_t__,int ,char*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*) ;
 char* FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (int ,char*,...) ;
 scalar_t__ FUNC_18 (char*) ;
 int FUNC_19 (char const*,int ,int,int ,struct loadedfile*) ;
 int FUNC_20 (int *,int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (char*,int) ;
 char* FUNC_23 (int *,char*,int ,int) ;
 int FUNC_24 (char*) ;
 char* FUNC_25 (char*) ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int FUNC_26 (int) ;
 scalar_t__ VAR_13 ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ,char*,...) ;
 int FUNC_29 (char*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_30 (unsigned char) ;
 int VAR_15 ;
 struct loadedfile* FUNC_31 (char const*,int) ;
 char* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int * FUNC_32 (char*,char) ;
 scalar_t__ FUNC_33 (char*,char*,int) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;

void
FUNC_34(const char *VAR_21, int VAR_22)
{
    char *VAR_23;
    char *VAR_24;
    struct loadedfile *VAR_25;

    VAR_25 = FUNC_31(VAR_21, VAR_22);

    VAR_14 = VAR_1;
    VAR_13 = 0;

    if (VAR_21 == ((void*)0)) {
     VAR_21 = "(stdin)";
    }

    FUNC_19(VAR_21, 0, -1, VAR_15, VAR_25);
    VAR_11->lf = VAR_25;

    do {
 for (; (VAR_24 = FUNC_14()) != ((void*)0); ) {
     if (FUNC_0(VAR_2))
  FUNC_28(VAR_12, "ParseReadLine (%d): '%s'\n",
   VAR_11->lineno, VAR_24);
     if (*VAR_24 == '.') {






  for (VAR_23 = VAR_24 + 1; FUNC_30((unsigned char)*VAR_23); VAR_23++) {
      continue;
  }
  if (FUNC_1(VAR_23, VAR_1)) {
      FUNC_8(VAR_23);
      continue;
  }
  if (FUNC_33(VAR_23, "undef", 5) == 0) {
      char *VAR_26;
      for (VAR_23 += 5; FUNC_30((unsigned char) *VAR_23); VAR_23++)
   continue;
      for (VAR_26 = VAR_23; !FUNC_30((unsigned char) *VAR_26) &&
       (*VAR_26 != '\0'); VAR_26++)
   continue;
      *VAR_26 = '\0';
      FUNC_21(VAR_23, VAR_10);
      continue;
  } else if (FUNC_33(VAR_23, "export", 6) == 0) {
      for (VAR_23 += 6; FUNC_30((unsigned char) *VAR_23); VAR_23++)
   continue;
      FUNC_22(VAR_23, 1);
      continue;
  } else if (FUNC_33(VAR_23, "unexport", 8) == 0) {
      FUNC_24(VAR_23);
      continue;
  } else if (FUNC_33(VAR_23, "info", 4) == 0 ||
      FUNC_33(VAR_23, "error", 5) == 0 ||
      FUNC_33(VAR_23, "warning", 7) == 0) {
      if (FUNC_13(VAR_23))
   continue;
  }
     }

     if (*VAR_24 == '\t') {




  VAR_23 = VAR_24 + 1;
       shellCommand:
  for (; FUNC_30 ((unsigned char)*VAR_23); VAR_23++) {
      continue;
  }
  if (*VAR_23) {
      if (!VAR_14)
   FUNC_17(VAR_3,
         "Unassociated shell command \"%s\"",
         VAR_23);





      if (VAR_20) {
   VAR_23 = FUNC_25(VAR_23);
   FUNC_5(VAR_20, VAR_5, VAR_23);



      }
  }
  continue;
     }
     if (FUNC_18(VAR_24)) {
  FUNC_10();
  FUNC_16(VAR_24, VAR_10);
  continue;
     }
     VAR_23 = VAR_24;
     if (FUNC_30((unsigned char) VAR_24[0])) {
  while ((*VAR_23 != '\0') && FUNC_30((unsigned char) *VAR_23))
      VAR_23++;
  while (*VAR_23 && (FUNC_12(VAR_24, VAR_23) ||
   (*VAR_23 != ':') && (*VAR_23 != '!'))) {
      VAR_23++;
  }
  if (*VAR_23 == '\0') {
      if (VAR_14) {
   FUNC_17(VAR_4,
         "Shell command needs a leading tab");
   goto shellCommand;
      }
  }
     }

     FUNC_10();






     {
  int VAR_27 = 0;

  for (VAR_23 = VAR_24; *VAR_23 != 0; VAR_23++) {
      if (*VAR_23 == '\\' && VAR_23[1] != 0) {
   VAR_23++;
   continue;
      }
      if (*VAR_23 == '$' &&
   (VAR_23[1] == '(' || VAR_23[1] == '{')) {
   VAR_27++;
   continue;
      }
      if (VAR_27 > 0) {
   if (*VAR_23 == ')' || *VAR_23 == '}') {
       VAR_27--;
       continue;
   }
      } else if (*VAR_23 == ';') {
   break;
      }
  }
     }
     if (*VAR_23 != 0)

  *VAR_23++ = 0;
     else
  VAR_23 = ((void*)0);






     VAR_24 = FUNC_23(((void*)0), VAR_24, VAR_9, VAR_7|VAR_8);




     if (VAR_20)
  FUNC_4(VAR_20, ((void*)0));

     VAR_20 = FUNC_6(VAR_1);
     VAR_14 = VAR_6;

     FUNC_7(VAR_24);
     FUNC_29(VAR_24);


     if (VAR_23 != ((void*)0)) {
  goto shellCommand;
     }
 }



    } while (FUNC_9() == VAR_0);

    if (VAR_13) {
 (void)FUNC_27(VAR_18);
 (void)FUNC_28(VAR_17,
     "%s: Fatal errors encountered -- cannot continue",
     VAR_16);
 FUNC_20(((void*)0), ((void*)0));
 FUNC_26(1);
    }
}
