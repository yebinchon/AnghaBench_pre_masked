
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 struct archive_entry* FUNC_7 () ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*,int,int ) ;
 int FUNC_10 (struct archive_entry*,int,int ) ;
 int FUNC_11 (struct archive_entry*,int) ;
 int FUNC_12 (struct archive_entry*,int,int ) ;
 int FUNC_13 (struct archive_entry*,int) ;
 int FUNC_14 (struct archive_entry*) ;
 int FUNC_15 (struct archive*,int ) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*) ;
 int FUNC_18 (struct archive*) ;
 struct archive* FUNC_19 () ;
 int FUNC_20 (struct archive*,struct archive_entry**) ;
 int FUNC_21 (struct archive*) ;
 int FUNC_22 (struct archive*) ;
 int FUNC_23 (struct archive*) ;
 int FUNC_24 (struct archive*) ;
 int FUNC_25 (struct archive*,char*,int) ;
 int FUNC_26 (struct archive*) ;
 int FUNC_27 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_28 () ;
 int FUNC_29 (struct archive*,char*,size_t,size_t*) ;
 int FUNC_30 (struct archive*,char const*) ;
 int FUNC_31 (struct archive*,char const*,char*,char const*) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int,int ) ;
 int FUNC_34 (struct archive*,int,int) ;
 int FUNC_35 (char*,void const*,size_t) ;
 int FUNC_36 (char*,int ) ;
 int FUNC_37 (char*) ;
 char* FUNC_38 (size_t) ;
 int FUNC_39 (struct archive*,char*,size_t,int) ;
 int FUNC_40 (char*,char const*) ;

__attribute__((used)) static void
FUNC_41(const char *VAR_6, const char *VAR_7,
    int VAR_8, int VAR_9, const void *VAR_10, size_t VAR_11)
{
 struct archive_entry *VAR_12;
 struct archive *VAR_13;
 size_t VAR_14;
 size_t VAR_15 = 1024 * 1024;
 char *VAR_16;
 int VAR_17;

 FUNC_32((VAR_16 = FUNC_38(VAR_15)) != ((void*)0));
 if (VAR_16 == ((void*)0))
  return;


 FUNC_32((VAR_13 = FUNC_28()) != ((void*)0));
 VAR_17 = FUNC_30(VAR_13, VAR_6);
 if (VAR_17 == VAR_5) {
  FUNC_40("%s format not fully supported on this platform",
     VAR_7);
  FUNC_33(VAR_4, FUNC_26(VAR_13));
  FUNC_37(VAR_16);
  return;
 }
 FUNC_34(VAR_13, VAR_4, VAR_17);
 if (VAR_7 != ((void*)0) &&
     VAR_4 != FUNC_31(VAR_13, VAR_6,
     "compression", VAR_7)) {
  FUNC_40("%s writing not fully supported on this platform",
     VAR_7);
  FUNC_33(VAR_4, FUNC_26(VAR_13));
  FUNC_37(VAR_16);
  return;
 }
 FUNC_34(VAR_13, VAR_4, FUNC_23(VAR_13));
 FUNC_34(VAR_13, VAR_4,
     FUNC_29(VAR_13, VAR_16, VAR_15, &VAR_14));




 FUNC_32((VAR_12 = FUNC_7()) != ((void*)0));
 FUNC_12(VAR_12, 1, 0);
 FUNC_33(1, FUNC_6(VAR_12));
 FUNC_10(VAR_12, 1, 0);
 FUNC_33(1, FUNC_2(VAR_12));
 FUNC_9(VAR_12, 1, 0);
 FUNC_33(1, FUNC_0(VAR_12));
 FUNC_1(VAR_12, "file");
 FUNC_36("file", FUNC_8(VAR_12));
 FUNC_11(VAR_12, VAR_1 | 0755);
 FUNC_33((VAR_1 | 0755), FUNC_5(VAR_12));
 FUNC_13(VAR_12, 8);
 FUNC_33(0, FUNC_27(VAR_13, VAR_12));
 FUNC_4(VAR_12);
 FUNC_33(8, FUNC_25(VAR_13, "12345678", 8));


 FUNC_34(VAR_13, VAR_4, FUNC_24(VAR_13));
 FUNC_33(VAR_4, FUNC_26(VAR_13));

 if (VAR_10 && VAR_11 > 0) {
  FUNC_35(VAR_16, VAR_10, VAR_11);
 }
 if (VAR_8 > 0) {




  FUNC_32((VAR_13 = FUNC_19()) != ((void*)0));
  FUNC_34(VAR_13, VAR_4,
      FUNC_22(VAR_13));
  FUNC_34(VAR_13, VAR_4,
      FUNC_21(VAR_13));
  FUNC_34(VAR_13, VAR_4,
      FUNC_39(VAR_13, VAR_16, VAR_14, 7));

  if (VAR_9 & 1) {
   FUNC_34(VAR_13, VAR_4,
       FUNC_20(VAR_13, &VAR_12));
   FUNC_36(".", FUNC_8(VAR_12));
   FUNC_33(VAR_0, FUNC_3(VAR_12));
  }



  FUNC_34(VAR_13, VAR_4, FUNC_20(VAR_13, &VAR_12));
  FUNC_33(1, FUNC_6(VAR_12));
  if (VAR_9 & 2) {
   FUNC_36("./file", FUNC_8(VAR_12));
  } else {
   FUNC_36("file", FUNC_8(VAR_12));
  }
  FUNC_33(VAR_1, FUNC_3(VAR_12));
  FUNC_33(8, FUNC_14(VAR_12));


  FUNC_34(VAR_13, VAR_2, FUNC_20(VAR_13, &VAR_12));


  FUNC_34(VAR_13, VAR_3,
      FUNC_15(VAR_13, 0));
  FUNC_34(VAR_13, VAR_8, FUNC_16(VAR_13));

  FUNC_33(VAR_4, FUNC_17(VAR_13));
  FUNC_33(VAR_4, FUNC_18(VAR_13));
 }
 FUNC_37(VAR_16);
}
