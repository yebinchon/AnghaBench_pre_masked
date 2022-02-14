
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive_entry*,char*) ;
 int FUNC_1 (struct archive_entry*) ;
 struct archive_entry* FUNC_2 () ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive_entry*,size_t) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive*,int ) ;
 int FUNC_8 (struct archive*,int ) ;
 int * FUNC_9 () ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 struct archive* FUNC_12 () ;
 int FUNC_13 (struct archive*,struct archive_entry**) ;
 int FUNC_14 (struct archive*,char*,size_t) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*) ;
 int FUNC_18 (struct archive*) ;
 scalar_t__ FUNC_19 (struct archive*,char*,size_t) ;
 int FUNC_20 (struct archive*) ;
 int FUNC_21 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_22 () ;
 int FUNC_23 (struct archive*,char*,size_t,size_t*) ;
 int FUNC_24 (struct archive*,int) ;
 int FUNC_25 (struct archive*,int) ;
 int FUNC_26 (struct archive*) ;
 int FUNC_27 (struct archive*,char const*) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int) ;
 int FUNC_30 (int,int) ;
 int FUNC_31 (struct archive*,int,int) ;
 int FUNC_32 (char*,int ) ;
 scalar_t__ FUNC_33 (int,size_t) ;
 int FUNC_34 () ;
 int FUNC_35 (char*) ;
 scalar_t__ FUNC_36 (size_t) ;
 int FUNC_37 (char*) ;
 int FUNC_38 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_39(const char *VAR_4)
{
 struct archive_entry *VAR_5;
 struct archive* VAR_6;
 char *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10;
 char VAR_11[16];
 size_t VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0, VAR_16;

 FUNC_28((VAR_6 = FUNC_22()) != ((void*)0));
 VAR_14 = FUNC_17(VAR_6);
 if (FUNC_9() == ((void*)0)) {
  if (!FUNC_34()) {
   FUNC_37("lz4 writing not supported on this platform");
   FUNC_30(VAR_3, VAR_14);
   FUNC_30(VAR_2, FUNC_20(VAR_6));
   return;
  } else {
   FUNC_30(VAR_3, VAR_14);
   VAR_15 = 1;
  }
 } else {
  FUNC_30(VAR_2, VAR_14);
 }
 FUNC_30(VAR_2, FUNC_20(VAR_6));

 VAR_9 = 2000000;
 FUNC_28(((void*)0) != (VAR_7 = (char *)FUNC_36(VAR_9)));

 VAR_10 = 10000;
 FUNC_28(((void*)0) != (VAR_8 = (char *)FUNC_33(1, VAR_10)));
 VAR_16 = 10;




 FUNC_28((VAR_6 = FUNC_22()) != ((void*)0));
 FUNC_31(VAR_6, VAR_2, FUNC_26(VAR_6));
 FUNC_31(VAR_6, (VAR_15)?VAR_3:VAR_2,
     FUNC_17(VAR_6));
 FUNC_31(VAR_6, VAR_2,
     FUNC_27(VAR_6, VAR_4));
 FUNC_31(VAR_6, VAR_2,
     FUNC_25(VAR_6, 1024));
 FUNC_31(VAR_6, VAR_2,
     FUNC_24(VAR_6, 1024));
 FUNC_30(VAR_1, FUNC_7(VAR_6, 0));
 FUNC_32("lz4", FUNC_8(VAR_6, 0));
 FUNC_31(VAR_6, VAR_2,
     FUNC_23(VAR_6, VAR_7, VAR_9, &VAR_12));
 FUNC_28((VAR_5 = FUNC_2()) != ((void*)0));
 FUNC_4(VAR_5, VAR_0);
 FUNC_5(VAR_5, VAR_10);
 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
  FUNC_38(VAR_11, "file%03d", VAR_13);
  FUNC_0(VAR_5, VAR_11);
  FUNC_31(VAR_6, VAR_2, FUNC_21(VAR_6, VAR_5));
  FUNC_29(VAR_10
      == (size_t)FUNC_19(VAR_6, VAR_8, VAR_10));
 }
 FUNC_1(VAR_5);
 FUNC_31(VAR_6, VAR_2, FUNC_18(VAR_6));
 FUNC_30(VAR_2, FUNC_20(VAR_6));

 FUNC_28((VAR_6 = FUNC_12()) != ((void*)0));
 FUNC_31(VAR_6, VAR_2, FUNC_16(VAR_6));
 VAR_14 = FUNC_15(VAR_6);
 if (VAR_14 == VAR_3) {
  FUNC_37("Can't verify lz4 writing by reading back;"
      " lz4 reading not fully supported on this platform");
 } else {
  FUNC_31(VAR_6, VAR_2,
      FUNC_14(VAR_6, VAR_7, VAR_12));
  for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
   FUNC_38(VAR_11, "file%03d", VAR_13);
   if (!FUNC_30(VAR_2,
    FUNC_13(VAR_6, &VAR_5)))
    break;
   FUNC_32(VAR_11, FUNC_3(VAR_5));
   FUNC_30((int)VAR_10, FUNC_6(VAR_5));
  }
  FUNC_31(VAR_6, VAR_2, FUNC_10(VAR_6));
 }
 FUNC_30(VAR_2, FUNC_11(VAR_6));




 FUNC_35(VAR_8);
 FUNC_35(VAR_7);
}
