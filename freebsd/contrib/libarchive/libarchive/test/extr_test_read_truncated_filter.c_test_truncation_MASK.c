
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
typedef struct archive archive ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*,char*) ;
 int FUNC_1 (struct archive_entry*) ;
 struct archive_entry* FUNC_2 () ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive_entry*,size_t) ;
 int * FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*) ;
 scalar_t__ FUNC_8 (struct archive*,char*,size_t) ;
 int FUNC_9 (struct archive*) ;
 struct archive* FUNC_10 () ;
 int FUNC_11 (struct archive*,struct archive_entry**) ;
 int FUNC_12 (struct archive*,char*,size_t) ;
 int FUNC_13 (struct archive*) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*,char*,size_t) ;
 int FUNC_18 (struct archive*) ;
 int FUNC_19 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_20 () ;
 int FUNC_21 (struct archive*,char*,size_t,size_t*) ;
 int FUNC_22 (struct archive*,int) ;
 int FUNC_23 (struct archive*) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int,int ) ;
 int FUNC_26 (struct archive*,int,int ) ;
 int FUNC_27 (char*,int ) ;
 int FUNC_28 (char*,...) ;
 int FUNC_29 (char*) ;
 scalar_t__ FUNC_30 (size_t) ;
 int FUNC_31 (char*,int ,size_t) ;
 int FUNC_32 () ;
 int FUNC_33 (char*,char const*) ;
 int FUNC_34 (char*,char*,char const*,int) ;
 int FUNC_35 (struct archive*) ;

__attribute__((used)) static void
FUNC_36(const char *VAR_3,
    int (*VAR_4)(struct archive *), int VAR_5)
{
 struct archive_entry *VAR_6;
 struct archive* VAR_7;
 char VAR_8[16];
 char *VAR_9, *VAR_10;
 size_t VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_11 = 2000000;
 FUNC_24(((void*)0) != (VAR_9 = (char *)FUNC_30(VAR_11)));
 if (VAR_9 == ((void*)0))
  return;

 VAR_12 = 10000;
 FUNC_24(((void*)0) != (VAR_10 = (char *)FUNC_30(VAR_12)));
 if (VAR_10 == ((void*)0)) {
  FUNC_29(VAR_9);
  return;
 }
 FUNC_31(VAR_10, 0, VAR_12);




 FUNC_24((VAR_7 = FUNC_20()) != ((void*)0));
 FUNC_26(VAR_7, VAR_1, FUNC_23(VAR_7));
 FUNC_26(VAR_7, VAR_1,
     FUNC_15(VAR_7));
 VAR_16 = (*VAR_4)(VAR_7);
 if (VAR_16 != VAR_1 && !VAR_5) {
  FUNC_33("%s writing not supported on this platform",
      VAR_3);
  FUNC_25(VAR_1, FUNC_18(VAR_7));
  FUNC_29(VAR_9);
  FUNC_29(VAR_10);
  return;
 }
 VAR_17 = (VAR_16 == VAR_2 && VAR_5);
 FUNC_26(VAR_7, VAR_1,
     FUNC_22(VAR_7, 10));
 FUNC_26(VAR_7, VAR_1,
     FUNC_21(VAR_7, VAR_9, VAR_11, &VAR_13));
 FUNC_24((VAR_6 = FUNC_2()) != ((void*)0));
 FUNC_4(VAR_6, VAR_0);
 FUNC_5(VAR_6, VAR_12);
 for (VAR_14 = 0; VAR_14 < 100; VAR_14++) {
  FUNC_34(VAR_8, "%s%d", VAR_3, VAR_14);
  FUNC_0(VAR_6, VAR_8);
  FUNC_28(VAR_8);
  if (!FUNC_26(VAR_7, VAR_1,
      FUNC_19(VAR_7, VAR_6))) {
   FUNC_18(VAR_7);
   FUNC_29(VAR_10);
   FUNC_29(VAR_9);
   return;
  }
  for (VAR_15 = 0; VAR_15 < (int)VAR_12; ++VAR_15) {
   VAR_10[VAR_15] = (char)(FUNC_32() % 256);
  }
  FUNC_28(VAR_8);
  if (!FUNC_26(VAR_7, VAR_12,
      FUNC_17(VAR_7, VAR_10, VAR_12))) {
   FUNC_18(VAR_7);
   FUNC_29(VAR_10);
   FUNC_29(VAR_9);
   return;
  }
 }
 FUNC_1(VAR_6);
 FUNC_26(VAR_7, VAR_1, FUNC_16(VAR_7));
 FUNC_25(VAR_1, FUNC_18(VAR_7));

 FUNC_24((VAR_7 = FUNC_10()) != ((void*)0));
 FUNC_26(VAR_7, VAR_1, FUNC_14(VAR_7));
 FUNC_26(VAR_7, VAR_1, FUNC_13(VAR_7));

 FUNC_26(VAR_7, VAR_1,
     FUNC_12(VAR_7, VAR_9, VAR_13 - VAR_13/64));
 for (VAR_14 = 0; VAR_14 < 100; VAR_14++) {
  if (VAR_1 != FUNC_11(VAR_7, &VAR_6)) {
   FUNC_28("Should have non-NULL error message for %s",
       VAR_3);
   FUNC_24(((void*)0) != FUNC_6(VAR_7));
   break;
  }
  FUNC_34(VAR_8, "%s%d", VAR_3, VAR_14);
  FUNC_27(VAR_8, FUNC_3(VAR_6));
  if (VAR_12 != (size_t)FUNC_8(VAR_7, VAR_10, VAR_12)) {
   FUNC_28("Should have non-NULL error message for %s",
       VAR_3);
   FUNC_24(((void*)0) != FUNC_6(VAR_7));
   break;
  }
 }
 FUNC_26(VAR_7, (VAR_17)?VAR_2:VAR_1,
     FUNC_7(VAR_7));
 FUNC_25(VAR_1, FUNC_9(VAR_7));

 FUNC_29(VAR_10);
 FUNC_29(VAR_9);
}
