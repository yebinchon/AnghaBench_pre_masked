
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_8__ {int files; } ;
typedef TYPE_1__ Path ;
typedef int * LstNode ;
typedef int Lst ;
typedef scalar_t__ Boolean ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (scalar_t__,char const*,char const*) ;
 char* FUNC_2 (TYPE_1__*,char const*,char const*,scalar_t__) ;
 char* FUNC_3 (TYPE_1__*,char const*,char const*) ;
 char* FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (int ,char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_6 (int *,char const*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int * FUNC_10 (int ) ;
 int * FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*,struct stat*) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (char*) ;
 int VAR_9 ;
 char* FUNC_17 (char const*,char) ;
 char const* VAR_10 ;

char *
FUNC_18(const char *VAR_11, Lst VAR_12)
{
    LstNode VAR_13;
    char *VAR_14;
    Path *VAR_15;
    const char *VAR_16;
    Boolean VAR_17 = VAR_2;
    Boolean VAR_18;
    struct stat VAR_19;
    const char *VAR_20 = ".";





    VAR_16 = FUNC_17(VAR_11, '/');
    if (VAR_16) {
 VAR_18 = VAR_3;
 VAR_16 += 1;
    } else {
 VAR_18 = VAR_2;
 VAR_16 = VAR_11;
    }

    if (FUNC_0(VAR_0)) {
 FUNC_15(VAR_6, "Searching for %s ...", VAR_11);
    }

    if (FUNC_12(VAR_12) == VAR_1) {
 if (FUNC_0(VAR_0)) {
     FUNC_15(VAR_6, "couldn't open path, file not found\n");
 }
 VAR_9 += 1;
 return ((void*)0);
    }

    if ((VAR_13 = FUNC_9(VAR_12)) != ((void*)0)) {
 VAR_15 = (Path *)FUNC_8(VAR_13);
 if (VAR_15 == VAR_8) {
     VAR_17 = VAR_3;
            if (FUNC_0(VAR_0))
  FUNC_15(VAR_6, "[dot last]...");
 }
    }
    if (FUNC_0(VAR_0)) {
 FUNC_15(VAR_6, "\n");
    }






    if (!VAR_18 || (VAR_16 - VAR_11 == 2 && *VAR_11 == '.')) {
     if (!VAR_17 &&
   (VAR_14 = FUNC_1(VAR_18, VAR_11, VAR_16)) != ((void*)0)) {
      FUNC_7(VAR_12);
      return VAR_14;
     }

     while ((VAR_13 = FUNC_11(VAR_12)) != ((void*)0)) {
  VAR_15 = (Path *)FUNC_8(VAR_13);
  if (VAR_15 == VAR_8)
      continue;
  if ((VAR_14 = FUNC_2(VAR_15, VAR_11, VAR_16, VAR_18)) != ((void*)0)) {
      FUNC_7(VAR_12);
      return VAR_14;
  }
     }

     if (VAR_17 &&
   (VAR_14 = FUNC_1(VAR_18, VAR_11, VAR_16)) != ((void*)0)) {
      FUNC_7(VAR_12);
      return VAR_14;
     }
    }
    FUNC_7(VAR_12);
    if (!VAR_18) {
 if (FUNC_0(VAR_0)) {
     FUNC_15(VAR_6, "   failed.\n");
 }
 VAR_9 += 1;
 return ((void*)0);
    }

    if (*VAR_16 == '\0') {

 VAR_16 = VAR_20;
    }

    if (VAR_11[0] != '/') {
 Boolean VAR_21 = VAR_2;

 if (FUNC_0(VAR_0)) {
     FUNC_15(VAR_6, "   Trying subdirectories...\n");
 }

 if (!VAR_17) {
  if (VAR_7) {
   VAR_21 = VAR_3;
   if ((VAR_14 = FUNC_4(VAR_7, VAR_11)) != ((void*)0))
    return VAR_14;
  }
  if (VAR_5 && (VAR_14 = FUNC_4(VAR_5, VAR_11)) != ((void*)0))
   return VAR_14;
 }

 (void)FUNC_12(VAR_12);
 while ((VAR_13 = FUNC_11(VAR_12)) != ((void*)0)) {
     VAR_15 = (Path *)FUNC_8(VAR_13);
     if (VAR_15 == VAR_8)
  continue;
     if (VAR_15 == VAR_7) {
      if (VAR_21)
       continue;
  VAR_21 = VAR_3;
     }
     if ((VAR_14 = FUNC_4(VAR_15, VAR_11)) != ((void*)0)) {
  FUNC_7(VAR_12);
  return VAR_14;
     }
 }
 FUNC_7(VAR_12);

 if (VAR_17) {
  if (VAR_7 && !VAR_21) {
   VAR_21 = VAR_3;
   if ((VAR_14 = FUNC_4(VAR_7, VAR_11)) != ((void*)0))
    return VAR_14;
  }
  if (VAR_5 && (VAR_14 = FUNC_4(VAR_5, VAR_11)) != ((void*)0))
   return VAR_14;
 }

 if (VAR_21) {




     if (FUNC_0(VAR_0)) {
  FUNC_15(VAR_6, "   Checked . already, returning NULL\n");
     }
     return ((void*)0);
 }

    } else {
 if (FUNC_0(VAR_0)) {
     FUNC_15(VAR_6, "   Trying exact path matches...\n");
 }

 if (!VAR_17 && VAR_5 && ((VAR_14 = FUNC_3(VAR_5, VAR_11, VAR_16))
  != ((void*)0))) {
     if (VAR_14[0] == '\0') {
  FUNC_16(VAR_14);
  return ((void*)0);
     }
     return VAR_14;
 }

 (void)FUNC_12(VAR_12);
 while ((VAR_13 = FUNC_11(VAR_12)) != ((void*)0)) {
     VAR_15 = (Path *)FUNC_8(VAR_13);
     if (VAR_15 == VAR_8)
  continue;
     if ((VAR_14 = FUNC_3(VAR_15, VAR_11, VAR_16)) != ((void*)0)) {
  FUNC_7(VAR_12);
  if (VAR_14[0] == '\0') {
      FUNC_16(VAR_14);
      return ((void*)0);
  }
  return VAR_14;
     }
 }
 FUNC_7(VAR_12);

 if (VAR_17 && VAR_5 && ((VAR_14 = FUNC_3(VAR_5, VAR_11, VAR_16))
  != ((void*)0))) {
     if (VAR_14[0] == '\0') {
  FUNC_16(VAR_14);
  return ((void*)0);
     }
     return VAR_14;
 }
    }
    if (FUNC_0(VAR_0)) {
 FUNC_15(VAR_6, "   Looking for \"%s\" ...\n", VAR_11);
    }

    VAR_4 += 1;
    if (FUNC_14(VAR_11, &VAR_19) == 0) {
 return (FUNC_13(VAR_11));
    }

    if (FUNC_0(VAR_0)) {
 FUNC_15(VAR_6, "   failed. Returning NULL\n");
    }
    return ((void*)0);

}
