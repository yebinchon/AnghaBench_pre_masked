
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files {int ** names; scalar_t__ uncompress; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int int64_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct archive*) ;
 size_t FUNC_2 (struct archive*,char*,size_t const) ;
 scalar_t__ FUNC_3 (struct archive*,void const**,size_t*,int *) ;
 int FUNC_4 (struct archive*) ;
 struct archive* FUNC_5 () ;
 scalar_t__ FUNC_6 (struct archive*,struct archive_entry**) ;
 int FUNC_7 (struct archive*,int **,int) ;
 scalar_t__ FUNC_8 (struct archive*,char*,size_t) ;
 scalar_t__ FUNC_9 (struct archive*) ;
 scalar_t__ FUNC_10 (struct archive*) ;
 scalar_t__ FUNC_11 (struct archive*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (size_t,int ) ;
 int FUNC_14 (struct archive*,int,scalar_t__) ;
 int FUNC_15 (int **) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (char*,char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,int,size_t,int *) ;
 char* FUNC_21 (char*) ;
 char* FUNC_22 (size_t const) ;
 int FUNC_23 (char*,char*,size_t) ;
 size_t FUNC_24 () ;
 char* FUNC_25 (char*,size_t) ;
 int FUNC_26 (char*,...) ;
 char* FUNC_27 (size_t*,int *) ;
 int FUNC_28 (unsigned int) ;
 scalar_t__ FUNC_29 (int *) ;

__attribute__((used)) static void
FUNC_30(const struct files *VAR_2)
{
 const void *VAR_3;
 size_t VAR_4;
 int64_t VAR_5;
 int VAR_6;
 const char *VAR_7;

 VAR_7 = FUNC_21("SKIP_TEST_FUZZ");
 if (VAR_7 != ((void*)0)) {
  FUNC_26("Skipping fuzz tests due to SKIP_TEST_FUZZ "
      "environment variable");
  return;
 }

 for (VAR_6 = 0; VAR_2[VAR_6].names != ((void*)0); ++VAR_6) {
  const size_t VAR_8 = 30000000;
  struct archive_entry *VAR_9;
  struct archive *VAR_10;
  char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
  size_t VAR_14 = 0, VAR_15 = 0;
  int VAR_16, VAR_17;

  FUNC_15(VAR_2[VAR_6].names);
  if (VAR_2[VAR_6].uncompress) {
   int VAR_18;

   FUNC_12((VAR_10 = FUNC_5()) != ((void*)0));
   FUNC_14(VAR_10, VAR_1,
       FUNC_9(VAR_10));
   FUNC_14(VAR_10, VAR_1,
       FUNC_11(VAR_10));
   VAR_18 = FUNC_7(VAR_10, VAR_2[VAR_6].names, 16384);
   if (VAR_18 != VAR_1) {
    FUNC_4(VAR_10);
    if (VAR_2[VAR_6].names[0] == ((void*)0) || VAR_2[VAR_6].names[1] == ((void*)0)) {
     FUNC_26("Cannot uncompress fileset");
    } else {
     FUNC_26("Cannot uncompress %s", VAR_2[VAR_6].names[0]);
    }
    continue;
   }
   FUNC_14(VAR_10, VAR_1,
       FUNC_6(VAR_10, &VAR_9));
   VAR_11 = FUNC_22(VAR_8);
   VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_8);
   FUNC_14(VAR_10, VAR_0,
       FUNC_6(VAR_10, &VAR_9));
   FUNC_13(VAR_1,
       FUNC_4(VAR_10));
   FUNC_12(VAR_14 > 0);
   if (VAR_2[VAR_6].names[0] == ((void*)0) || VAR_2[VAR_6].names[1] == ((void*)0)) {
    FUNC_16("Internal buffer is not big enough for "
     "uncompressed test files");
   } else {
    FUNC_16("Internal buffer is not big enough for "
     "uncompressed test file: %s", VAR_2[VAR_6].names[0]);
   }
   if (!FUNC_12(VAR_14 < VAR_8)) {
    FUNC_19(VAR_11);
    VAR_11 = ((void*)0);
    continue;
   }
  } else {
   for (VAR_16 = 0; VAR_2[VAR_6].names[VAR_16] != ((void*)0); ++VAR_16)
   {
    char *VAR_19;
    VAR_13 = FUNC_27(&VAR_14, VAR_2[VAR_6].names[VAR_16]);
    VAR_19 = FUNC_25(VAR_11, VAR_15 + VAR_14);
    if (!FUNC_12(VAR_19 != ((void*)0)))
    {
     FUNC_19(VAR_11);
     VAR_11 = ((void*)0);
     FUNC_19(VAR_13);
     continue;
    }
    VAR_11 = VAR_19;
    FUNC_23(VAR_11 + VAR_15, VAR_13, VAR_14);
    VAR_15 += VAR_14;
    VAR_14 = VAR_15;
    FUNC_19(VAR_13);
   }
  }
  if (VAR_14 == 0) {
   FUNC_19(VAR_11);
   VAR_11 = ((void*)0);
   continue;
  }
  VAR_12 = FUNC_22(VAR_14);
  FUNC_12(VAR_12 != ((void*)0));
  if (VAR_12 == ((void*)0)) {
   FUNC_19(VAR_11);
   VAR_11 = ((void*)0);
   return;
  }

  FUNC_12(VAR_11 != ((void*)0));

  FUNC_28((unsigned)FUNC_29(((void*)0)));

  for (VAR_16 = 0; VAR_16 < 1000; ++VAR_16) {
   FILE *VAR_20;
   int VAR_21, VAR_22, VAR_23;


   FUNC_23(VAR_12, VAR_11, VAR_14);
   VAR_17 = (int)VAR_14 / 100;
   if (VAR_17 < 4)
    VAR_17 = 4;
   VAR_22 = (int)(FUNC_24() % VAR_17);
   for (VAR_21 = 0; VAR_21 < VAR_22; ++VAR_21)
    VAR_12[FUNC_24() % VAR_14] = (char)FUNC_24();



   for (VAR_23 = 0; VAR_23 < 3; VAR_23++) {
    VAR_20 = FUNC_18("after.test.failure.send.this.file."
        "to.libarchive.maintainers.with.system.details", "wb");
    if (VAR_20 != ((void*)0))
     break;
   }
   FUNC_12(VAR_20 != ((void*)0));
   FUNC_13((size_t)VAR_14, FUNC_20(VAR_12, 1, (size_t)VAR_14, VAR_20));
   FUNC_17(VAR_20);


   FUNC_12((VAR_10 = FUNC_5()) != ((void*)0));
   FUNC_14(VAR_10, VAR_1,
       FUNC_9(VAR_10));
   FUNC_14(VAR_10, VAR_1,
       FUNC_10(VAR_10));

   if (0 == FUNC_8(VAR_10, VAR_12, VAR_14)) {
    while(0 == FUNC_6(VAR_10, &VAR_9)) {
     while (0 == FUNC_3(VAR_10,
      &VAR_3, &VAR_4, &VAR_5))
      continue;
    }
    FUNC_1(VAR_10);
   }
   FUNC_4(VAR_10);


   FUNC_12((VAR_10 = FUNC_5()) != ((void*)0));
   FUNC_14(VAR_10, VAR_1,
       FUNC_9(VAR_10));
   FUNC_14(VAR_10, VAR_1,
       FUNC_10(VAR_10));

   if (0 == FUNC_8(VAR_10, VAR_12, VAR_14)) {
    while(0 == FUNC_6(VAR_10, &VAR_9)) {
    }
    FUNC_1(VAR_10);
   }
   FUNC_4(VAR_10);
  }
  FUNC_19(VAR_12);
  FUNC_19(VAR_11);
 }
}
