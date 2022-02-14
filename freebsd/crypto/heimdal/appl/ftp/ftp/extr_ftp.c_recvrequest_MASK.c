
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;
struct timeval {int dummy; } ;
struct stat {int dummy; } ;
typedef int * sighand ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 long VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;



 int FUNC_0 (int *) ;
 int * VAR_12 ;
 scalar_t__ FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,size_t*,struct stat*) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (int) ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (char*,...) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * FUNC_7 (char*) ;
 scalar_t__ VAR_18 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (char*,char*) ;
 int FUNC_13 (int *,long,int ) ;
 scalar_t__ FUNC_14 (int ,struct stat*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct timeval*,struct timezone*) ;
 char* FUNC_17 (char*) ;
 int VAR_19 ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (int ,int,int ) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (char*,char*) ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (char*,char*,char*) ;
 scalar_t__ VAR_20 ;
 int FUNC_24 (char*,long,struct timeval*,struct timeval*) ;
 int FUNC_25 (int,int *) ;
 int FUNC_26 (char) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ,char*,size_t) ;
 int FUNC_29 (int ,int) ;
 scalar_t__ FUNC_30 (int ) ;
 int * FUNC_31 (int ,int *) ;
 int * VAR_24 ;
 scalar_t__ FUNC_32 (char*,char*) ;
 char* FUNC_33 (char*,char) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_38 (char*,...) ;
 int FUNC_39 (char*,char*) ;
 int FUNC_40 (int ,char*,int) ;

void
FUNC_41 (char *VAR_27, char *VAR_28, char *VAR_29,
      char *VAR_30, int VAR_31, int VAR_32)
{
    FILE *VAR_33 = ((void*)0), *VAR_34 = ((void*)0);
    int (*VAR_35) (FILE *);
    sighand VAR_36, VAR_37;
    int VAR_38, VAR_39, VAR_40, VAR_41, VAR_42 = 0;
    static size_t VAR_43;
    static char *VAR_44;
    long VAR_45 = 0, VAR_46 = VAR_5;
    struct timeval VAR_47, VAR_48;
    struct stat VAR_49;

    VAR_40 = FUNC_32 (VAR_27, "RETR") == 0;
    if (VAR_40 && VAR_26 && VAR_31) {
 if (FUNC_32 (VAR_28, "-") != 0)
     FUNC_22 ("local: %s ", VAR_28);
 if (VAR_29)
     FUNC_22 ("remote: %s\n", VAR_29);
    }
    if (VAR_20 && VAR_40) {
 FUNC_23 (VAR_27, VAR_28, VAR_29);
 return;
    }
    VAR_35 = ((void*)0);
    VAR_36 = ((void*)0);
    VAR_37 = ((void*)0);
    VAR_41 = !VAR_15 && VAR_40;
    if (FUNC_30 (VAR_21)) {
 while (VAR_14) {
     FUNC_15 (0);
 }
 if (VAR_17 >= 0) {
     FUNC_5 (VAR_17);
     VAR_17 = -1;
 }
 if (VAR_36)
     FUNC_31 (VAR_9, VAR_36);
 VAR_13 = -1;
 return;
    }
    VAR_36 = FUNC_31 (VAR_9, VAR_12);
    if (!VAR_32 || (FUNC_32(VAR_28, "-") && *VAR_28 != '|')) {
 if (FUNC_1 (VAR_28, 2) < 0) {
     char *VAR_50 = FUNC_33 (VAR_28, '/');

     if (VAR_18 != VAR_2 && VAR_18 != VAR_1) {
  FUNC_38 ("local: %s", VAR_28);
  FUNC_31 (VAR_9, VAR_36);
  VAR_13 = -1;
  return;
     }
     if (VAR_50 != ((void*)0))
  *VAR_50 = 0;
     VAR_39 = FUNC_1 (VAR_50 ? VAR_28 : ".", 2);
     if (VAR_50 != ((void*)0))
  *VAR_50 = '/';
     if (VAR_39 < 0) {
  FUNC_38 ("local: %s", VAR_28);
  FUNC_31 (VAR_9, VAR_36);
  VAR_13 = -1;
  return;
     }
     if (!VAR_23 && VAR_18 == VAR_1 &&
  FUNC_4 (VAR_28, 0600) < 0) {
  FUNC_38 ("local: %s", VAR_28);
  FUNC_31 (VAR_9, VAR_36);
  FUNC_31 (VAR_9, VAR_36);
  VAR_13 = -1;
  return;
     }
     if (VAR_23 && VAR_18 == VAR_1 &&
  (VAR_28 = FUNC_17 (VAR_28)) == ((void*)0)) {
  FUNC_31 (VAR_9, VAR_36);
  VAR_13 = -1;
  return;
     }
 } else if (VAR_23 && (VAR_28 = FUNC_17 (VAR_28)) == ((void*)0)) {
     FUNC_31(VAR_9, VAR_36);
     VAR_13 = -1;
     return;
 }
    }
    if (!VAR_40) {
 if (VAR_16 != 130)
     FUNC_3 (130, 0);
    } else if (VAR_16 != VAR_25)
 FUNC_3 (VAR_25, 0);
    if (FUNC_18 ()) {
 FUNC_31 (VAR_9, VAR_36);
 VAR_13 = -1;
 return;
    }
    if (FUNC_30 (VAR_21))
 goto abort;
    if (VAR_40 && VAR_22 &&
 FUNC_6 ("REST %ld", (long) VAR_22) != VAR_0)
 return;
    if (VAR_29) {
 if (FUNC_6 ("%s %s", VAR_27, VAR_29) != VAR_6) {
     FUNC_31 (VAR_9, VAR_36);
     return;
 }
    } else {
 if (FUNC_6 ("%s", VAR_27) != VAR_6) {
     FUNC_31 (VAR_9, VAR_36);
     return;
 }
    }
    VAR_34 = FUNC_7 ("r");
    if (VAR_34 == ((void*)0))
 goto abort;
    FUNC_29 (FUNC_11 (VAR_34), 1);
    if (VAR_32 && FUNC_32 (VAR_28, "-") == 0)
 VAR_33 = VAR_24;
    else if (VAR_32 && *VAR_28 == '|') {
 VAR_37 = FUNC_31 (VAR_10, VAR_11);
 VAR_33 = FUNC_21 (VAR_28 + 1, "w");
 if (VAR_33 == ((void*)0)) {
     FUNC_38 ("%s", VAR_28 + 1);
     goto abort;
 }
 VAR_35 = FUNC_20;
    } else {
 VAR_33 = FUNC_12 (VAR_28, VAR_30);
 if (VAR_33 == ((void*)0)) {
     FUNC_38 ("local: %s", VAR_28);
     goto abort;
 }
 VAR_35 = FUNC_8;
    }
    VAR_44 = FUNC_2 (VAR_44, &VAR_43,
   FUNC_14 (FUNC_11 (VAR_33), &VAR_49) >= 0 ? &VAR_49 : ((void*)0));
    if (VAR_44 == ((void*)0))
 goto abort;

    FUNC_16 (&VAR_47, (struct timezone *) 0);
    switch (VAR_16) {

    case 129:
    case 128:
 if (VAR_22 &&
     FUNC_19 (FUNC_11 (VAR_33), VAR_22, VAR_8) < 0) {
     FUNC_38 ("local: %s", VAR_28);
     if (VAR_35 != ((void*)0))
  (*VAR_35) (VAR_33);
     return;
 }
 VAR_18 = VAR_39 = 0;
 while ((VAR_38 = FUNC_28 (FUNC_11 (VAR_34), VAR_44, VAR_43)) > 0) {
     if ((VAR_39 = FUNC_40 (FUNC_11 (VAR_33), VAR_44, VAR_38)) != VAR_38)
  break;
     VAR_45 += VAR_38;
     if (VAR_19) {
  while (VAR_45 >= VAR_46) {
      FUNC_26 ('#');
      VAR_46 += VAR_5;
  }
  FUNC_10 (VAR_24);
     }
 }
 if (VAR_19 && VAR_45 > 0) {
     if (VAR_45 < VAR_5)
  FUNC_26 ('#');
     FUNC_26 ('\n');
     FUNC_10 (VAR_24);
 }
 if (VAR_38 < 0) {
     if (VAR_18 != VAR_4)
  FUNC_38 ("netin");
     VAR_45 = -1;
 }
 if (VAR_39 < VAR_38) {
     if (VAR_39 < 0)
  FUNC_38 ("local: %s", VAR_28);
     else
  FUNC_39 ("%s: short write", VAR_28);
 }
 break;

    case 130:
 if (VAR_22) {
     int VAR_51, VAR_52, VAR_53;

     if (FUNC_13 (VAR_33, 0L, VAR_8) < 0)
  goto done;
     VAR_52 = VAR_22;
     for (VAR_51 = 0; VAR_51++ < VAR_52;) {
  if ((VAR_53 = FUNC_27 (VAR_33)) == VAR_3)
      goto done;
  if (VAR_53 == '\n')
      VAR_51++;
     }
     if (FUNC_13 (VAR_33, 0L, VAR_7) < 0) {
 done:
  FUNC_38 ("local: %s", VAR_28);
  if (VAR_35 != ((void*)0))
      (*VAR_35) (VAR_33);
  return;
     }
 }
 while ((VAR_38 = FUNC_27(VAR_34)) != VAR_3) {
     if (VAR_38 == '\n')
  VAR_42++;
     while (VAR_38 == '\r') {
  while (VAR_19 && (VAR_45 >= VAR_46)) {
      FUNC_26 ('#');
      FUNC_10 (VAR_24);
      VAR_46 += VAR_5;
  }
  VAR_45++;
  if ((VAR_38 = FUNC_27 (VAR_34)) != '\n' || VAR_41) {
      if (FUNC_9 (VAR_33))
   goto break2;
      FUNC_25 ('\r', VAR_33);
      if (VAR_38 == '\0') {
   VAR_45++;
   goto contin2;
      }
      if (VAR_38 == VAR_3)
   goto contin2;
  }
     }
     FUNC_25 (VAR_38, VAR_33);
     VAR_45++;
    contin2:;
 }
break2:
 if (VAR_42) {
     FUNC_22 ("WARNING! %d bare linefeeds received in ASCII mode\n",
      VAR_42);
     FUNC_22 ("File may not have transferred correctly.\n");
 }
 if (VAR_19) {
     if (VAR_45 < VAR_46)
  FUNC_26 ('#');
     FUNC_26 ('\n');
     FUNC_10 (VAR_24);
 }
 if (FUNC_9 (VAR_34)) {
     if (VAR_18 != VAR_4)
  FUNC_38 ("netin");
     VAR_45 = -1;
 }
 if (FUNC_9 (VAR_33))
     FUNC_38 ("local: %s", VAR_28);
 break;
    }
    if (VAR_35 != ((void*)0))
 (*VAR_35) (VAR_33);
    FUNC_31 (VAR_9, VAR_36);
    if (VAR_37)
 FUNC_31 (VAR_10, VAR_37);
    FUNC_8 (VAR_34);
    FUNC_16 (&VAR_48, (struct timezone *) 0);
    FUNC_15 (0);
    if (VAR_45 > 0 && VAR_40)
 FUNC_24 ("received", VAR_45, &VAR_47, &VAR_48);
    return;
abort:



    if (VAR_37)
 FUNC_31 (VAR_10, VAR_36);
    FUNC_31 (VAR_9, VAR_11);
    if (!VAR_14) {
 VAR_13 = -1;
 FUNC_31 (VAR_9, VAR_36);
 return;
    }
    FUNC_0(VAR_34);
    VAR_13 = -1;
    if (VAR_17 >= 0) {
 FUNC_5 (VAR_17);
 VAR_17 = -1;
    }
    if (VAR_35 != ((void*)0) && VAR_33 != ((void*)0))
 (*VAR_35) (VAR_33);
    if (VAR_34)
 FUNC_8 (VAR_34);
    FUNC_16 (&VAR_48, (struct timezone *) 0);
    if (VAR_45 > 0)
 FUNC_24 ("received", VAR_45, &VAR_47, &VAR_48);
    FUNC_31 (VAR_9, VAR_36);
}
