
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int filedata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*,char*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 struct archive_entry* FUNC_8 () ;
 int FUNC_9 (struct archive_entry*) ;
 int FUNC_10 (struct archive_entry*,int) ;
 int FUNC_11 (struct archive_entry*,int,int) ;
 int FUNC_12 (struct archive_entry*,int) ;
 int FUNC_13 (struct archive_entry*) ;
 int FUNC_14 (struct archive_entry*) ;
 int FUNC_15 (struct archive*,int ) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*) ;
 int FUNC_18 (struct archive*,char*,int) ;
 int FUNC_19 (struct archive*) ;
 struct archive* FUNC_20 () ;
 int FUNC_21 (struct archive*,struct archive_entry**) ;
 int FUNC_22 (struct archive*) ;
 int FUNC_23 (struct archive*) ;
 int FUNC_24 (struct archive*) ;
 int FUNC_25 (struct archive*) ;
 int FUNC_26 (struct archive*,char*,int) ;
 int FUNC_27 (struct archive*) ;
 int FUNC_28 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_29 () ;
 int FUNC_30 (struct archive*,char*,size_t,size_t*) ;
 int FUNC_31 (struct archive*) ;
 int FUNC_32 (struct archive*,char*,char*,char const*) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int,int ) ;
 int FUNC_35 (struct archive*,int,int ) ;
 int FUNC_36 (char*,char*,int) ;
 int FUNC_37 (char*,int ) ;
 int FUNC_38 (char*) ;
 int FUNC_39 (char*) ;
 char* FUNC_40 (size_t) ;
 int FUNC_41 (struct archive*,char*,size_t,int) ;
 int FUNC_42 (char*,char const*) ;

__attribute__((used)) static void
FUNC_43(const char *VAR_7)
{
 char VAR_8[64];
 struct archive_entry *VAR_9;
 struct archive *VAR_10;
 size_t VAR_11;
 size_t VAR_12 = 1000;
 char *VAR_13;

 VAR_13 = FUNC_40(VAR_12);


 FUNC_33((VAR_10 = FUNC_29()) != ((void*)0));
 FUNC_35(VAR_10, VAR_6, FUNC_31(VAR_10));
 if (VAR_7 != ((void*)0) &&
     VAR_6 != FUNC_32(VAR_10, "7zip",
     "compression", VAR_7)) {
  FUNC_42("%s writing not fully supported on this platform",
     VAR_7);
  FUNC_34(VAR_6, FUNC_27(VAR_10));
  FUNC_39(VAR_13);
  return;
 }
 FUNC_35(VAR_10, VAR_6, FUNC_24(VAR_10));
 FUNC_35(VAR_10, VAR_6,
     FUNC_30(VAR_10, VAR_13, VAR_12, &VAR_11));




 FUNC_33((VAR_9 = FUNC_8()) != ((void*)0));
 FUNC_11(VAR_9, 1, 10);
 FUNC_34(1, FUNC_6(VAR_9));
 FUNC_34(10, FUNC_7(VAR_9));
 FUNC_1(VAR_9, "empty");
 FUNC_37("empty", FUNC_9(VAR_9));
 FUNC_10(VAR_9, VAR_2 | 0755);
 FUNC_34((VAR_2 | 0755), FUNC_5(VAR_9));

 FUNC_34(VAR_6, FUNC_28(VAR_10, VAR_9));
 FUNC_4(VAR_9);




 FUNC_33((VAR_9 = FUNC_8()) != ((void*)0));
 FUNC_11(VAR_9, 1, 10);
 FUNC_34(1, FUNC_6(VAR_9));
 FUNC_34(10, FUNC_7(VAR_9));
 FUNC_1(VAR_9, "empty2");
 FUNC_37("empty2", FUNC_9(VAR_9));
 FUNC_10(VAR_9, VAR_2 | 0444);
 FUNC_34((VAR_2 | 0444), FUNC_5(VAR_9));

 FUNC_34(VAR_6, FUNC_28(VAR_10, VAR_9));
 FUNC_4(VAR_9);




 FUNC_33((VAR_9 = FUNC_8()) != ((void*)0));
 FUNC_11(VAR_9, 1, 100);
 FUNC_34(1, FUNC_6(VAR_9));
 FUNC_34(100, FUNC_7(VAR_9));
 FUNC_1(VAR_9, "file");
 FUNC_37("file", FUNC_9(VAR_9));
 FUNC_10(VAR_9, VAR_2 | 0755);
 FUNC_34((VAR_2 | 0755), FUNC_5(VAR_9));
 FUNC_12(VAR_9, 8);

 FUNC_34(0, FUNC_28(VAR_10, VAR_9));
 FUNC_4(VAR_9);
 FUNC_34(8, FUNC_26(VAR_10, "12345678", 9));
 FUNC_34(0, FUNC_26(VAR_10, "1", 1));




 FUNC_33((VAR_9 = FUNC_8()) != ((void*)0));
 FUNC_11(VAR_9, 1, 10);
 FUNC_34(1, FUNC_6(VAR_9));
 FUNC_34(10, FUNC_7(VAR_9));
 FUNC_1(VAR_9, "file2");
 FUNC_37("file2", FUNC_9(VAR_9));
 FUNC_10(VAR_9, VAR_2 | 0755);
 FUNC_34((VAR_2 | 0755), FUNC_5(VAR_9));
 FUNC_12(VAR_9, 4);

 FUNC_34(VAR_6, FUNC_28(VAR_10, VAR_9));
 FUNC_4(VAR_9);
 FUNC_34(4, FUNC_26(VAR_10, "1234", 5));




 FUNC_33((VAR_9 = FUNC_8()) != ((void*)0));
 FUNC_11(VAR_9, 1, 10);
 FUNC_34(1, FUNC_6(VAR_9));
 FUNC_34(10, FUNC_7(VAR_9));
 FUNC_1(VAR_9, "symbolic");
 FUNC_2(VAR_9, "file1");
 FUNC_37("symbolic", FUNC_9(VAR_9));
 FUNC_10(VAR_9, VAR_1 | 0755);
 FUNC_34((VAR_1 | 0755), FUNC_5(VAR_9));

 FUNC_34(VAR_6, FUNC_28(VAR_10, VAR_9));
 FUNC_4(VAR_9);




 FUNC_33((VAR_9 = FUNC_8()) != ((void*)0));
 FUNC_11(VAR_9, 11, 100);
 FUNC_1(VAR_9, "dir");
 FUNC_10(VAR_9, VAR_0 | 0755);
 FUNC_12(VAR_9, 512);

 FUNC_35(VAR_10, VAR_6, FUNC_28(VAR_10, VAR_9));
 FUNC_38("size should be zero so that applications know not to write");
 FUNC_34(0, FUNC_13(VAR_9));
 FUNC_4(VAR_9);
 FUNC_35(VAR_10, 0, FUNC_26(VAR_10, "12345678", 9));




 FUNC_33((VAR_9 = FUNC_8()) != ((void*)0));
 FUNC_11(VAR_9, 11, 200);
 FUNC_1(VAR_9, "dir/subdir");
 FUNC_10(VAR_9, VAR_0 | 0755);
 FUNC_12(VAR_9, 512);

 FUNC_35(VAR_10, VAR_6, FUNC_28(VAR_10, VAR_9));
 FUNC_38("size should be zero so that applications know not to write");
 FUNC_34(0, FUNC_13(VAR_9));
 FUNC_4(VAR_9);
 FUNC_35(VAR_10, 0, FUNC_26(VAR_10, "12345678", 9));




 FUNC_33((VAR_9 = FUNC_8()) != ((void*)0));
 FUNC_11(VAR_9, 11, 300);
 FUNC_1(VAR_9, "dir/subdir/subdir");
 FUNC_10(VAR_9, VAR_0 | 0755);
 FUNC_12(VAR_9, 512);

 FUNC_35(VAR_10, VAR_6, FUNC_28(VAR_10, VAR_9));
 FUNC_38("size should be zero so that applications know not to write");
 FUNC_34(0, FUNC_13(VAR_9));
 FUNC_4(VAR_9);
 FUNC_35(VAR_10, 0, FUNC_26(VAR_10, "12345678", 9));


 FUNC_34(VAR_6, FUNC_25(VAR_10));
 FUNC_34(VAR_6, FUNC_27(VAR_10));


 FUNC_36(VAR_13, "\x37\x7a\xbc\xaf\x27\x1c\x00\x03", 8);





 FUNC_33((VAR_10 = FUNC_20()) != ((void*)0));
 FUNC_35(VAR_10, VAR_6, FUNC_23(VAR_10));
 FUNC_35(VAR_10, VAR_6, FUNC_22(VAR_10));
 FUNC_35(VAR_10, VAR_6, FUNC_41(VAR_10, VAR_13, VAR_11, 7));




 FUNC_35(VAR_10, VAR_6, FUNC_21(VAR_10, &VAR_9));
 FUNC_34(1, FUNC_6(VAR_9));
 FUNC_34(100, FUNC_7(VAR_9));
 FUNC_34(0, FUNC_0(VAR_9));
 FUNC_34(0, FUNC_3(VAR_9));
 FUNC_37("file", FUNC_9(VAR_9));
 FUNC_34(VAR_2 | 0755, FUNC_5(VAR_9));
 FUNC_34(8, FUNC_13(VAR_9));
 FUNC_35(VAR_10, 8,
     FUNC_18(VAR_10, VAR_8, sizeof(VAR_8)));
 FUNC_36(VAR_8, "12345678", 8);





 FUNC_35(VAR_10, VAR_6, FUNC_21(VAR_10, &VAR_9));
 FUNC_34(1, FUNC_6(VAR_9));
 FUNC_34(0, FUNC_7(VAR_9));
 FUNC_34(0, FUNC_0(VAR_9));
 FUNC_34(0, FUNC_3(VAR_9));
 FUNC_37("file2", FUNC_9(VAR_9));
 FUNC_34(VAR_2 | 0755, FUNC_5(VAR_9));
 FUNC_34(4, FUNC_13(VAR_9));
 FUNC_35(VAR_10, 4,
     FUNC_18(VAR_10, VAR_8, sizeof(VAR_8)));
 FUNC_36(VAR_8, "1234", 4);




 FUNC_35(VAR_10, VAR_6, FUNC_21(VAR_10, &VAR_9));
 FUNC_34(1, FUNC_6(VAR_9));
 FUNC_34(0, FUNC_7(VAR_9));
 FUNC_34(0, FUNC_0(VAR_9));
 FUNC_34(0, FUNC_3(VAR_9));
 FUNC_37("symbolic", FUNC_9(VAR_9));
 FUNC_37("file1", FUNC_14(VAR_9));
 FUNC_34(VAR_1 | 0755, FUNC_5(VAR_9));
 FUNC_34(0, FUNC_13(VAR_9));




 FUNC_35(VAR_10, VAR_6, FUNC_21(VAR_10, &VAR_9));
 FUNC_34(1, FUNC_6(VAR_9));
 FUNC_34(0, FUNC_7(VAR_9));
 FUNC_34(0, FUNC_0(VAR_9));
 FUNC_34(0, FUNC_3(VAR_9));
 FUNC_37("empty", FUNC_9(VAR_9));
 FUNC_34(VAR_2 | 0755, FUNC_5(VAR_9));
 FUNC_34(0, FUNC_13(VAR_9));




 FUNC_35(VAR_10, VAR_6, FUNC_21(VAR_10, &VAR_9));
 FUNC_34(1, FUNC_6(VAR_9));
 FUNC_34(0, FUNC_7(VAR_9));
 FUNC_34(0, FUNC_0(VAR_9));
 FUNC_34(0, FUNC_3(VAR_9));
 FUNC_37("empty2", FUNC_9(VAR_9));
 FUNC_34(VAR_2 | 0444, FUNC_5(VAR_9));
 FUNC_34(0, FUNC_13(VAR_9));




 FUNC_35(VAR_10, VAR_6, FUNC_21(VAR_10, &VAR_9));
 FUNC_34(11, FUNC_6(VAR_9));
 FUNC_34(300, FUNC_7(VAR_9));
 FUNC_34(0, FUNC_0(VAR_9));
 FUNC_34(0, FUNC_3(VAR_9));
 FUNC_37("dir/subdir/subdir/", FUNC_9(VAR_9));
 FUNC_34(VAR_0 | 0755, FUNC_5(VAR_9));
 FUNC_34(0, FUNC_13(VAR_9));
 FUNC_35(VAR_10, 0, FUNC_18(VAR_10, VAR_8, 10));




 FUNC_35(VAR_10, VAR_6, FUNC_21(VAR_10, &VAR_9));
 FUNC_34(11, FUNC_6(VAR_9));
 FUNC_34(200, FUNC_7(VAR_9));
 FUNC_34(0, FUNC_0(VAR_9));
 FUNC_34(0, FUNC_3(VAR_9));
 FUNC_37("dir/subdir/", FUNC_9(VAR_9));
 FUNC_34(VAR_0 | 0755, FUNC_5(VAR_9));
 FUNC_34(0, FUNC_13(VAR_9));
 FUNC_35(VAR_10, 0, FUNC_18(VAR_10, VAR_8, 10));




 FUNC_35(VAR_10, VAR_6, FUNC_21(VAR_10, &VAR_9));
 FUNC_34(11, FUNC_6(VAR_9));
 FUNC_34(100, FUNC_7(VAR_9));
 FUNC_34(0, FUNC_0(VAR_9));
 FUNC_34(0, FUNC_3(VAR_9));
 FUNC_37("dir/", FUNC_9(VAR_9));
 FUNC_34(VAR_0 | 0755, FUNC_5(VAR_9));
 FUNC_34(0, FUNC_13(VAR_9));
 FUNC_35(VAR_10, 0, FUNC_18(VAR_10, VAR_8, 10));


 FUNC_35(VAR_10, VAR_3, FUNC_21(VAR_10, &VAR_9));


 FUNC_35(VAR_10, VAR_4, FUNC_15(VAR_10, 0));
 FUNC_35(VAR_10, VAR_5, FUNC_16(VAR_10));

 FUNC_34(VAR_6, FUNC_17(VAR_10));
 FUNC_34(VAR_6, FUNC_19(VAR_10));

 FUNC_39(VAR_13);
}
