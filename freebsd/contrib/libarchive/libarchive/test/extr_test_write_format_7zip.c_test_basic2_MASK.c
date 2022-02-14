
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
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 struct archive_entry* FUNC_7 () ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*,int) ;
 int FUNC_10 (struct archive_entry*,int,int) ;
 int FUNC_11 (struct archive_entry*,int) ;
 int FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (struct archive*,int ) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*,char*,int) ;
 int FUNC_17 (struct archive*) ;
 struct archive* FUNC_18 () ;
 int FUNC_19 (struct archive*,struct archive_entry**) ;
 int FUNC_20 (struct archive*) ;
 int FUNC_21 (struct archive*) ;
 int FUNC_22 (struct archive*) ;
 int FUNC_23 (struct archive*) ;
 int FUNC_24 (struct archive*,char*,int) ;
 int FUNC_25 (struct archive*) ;
 int FUNC_26 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_27 () ;
 int FUNC_28 (struct archive*,char*,size_t,size_t*) ;
 int FUNC_29 (struct archive*) ;
 int FUNC_30 (struct archive*,char*,char*,char const*) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int,int ) ;
 int FUNC_33 (struct archive*,int,int ) ;
 int FUNC_34 (char*,char*,int) ;
 int FUNC_35 (char*,int ) ;
 int FUNC_36 (char*) ;
 int FUNC_37 (char*) ;
 char* FUNC_38 (size_t) ;
 int FUNC_39 (struct archive*,char*,size_t,int) ;
 int FUNC_40 (char*,char const*) ;

__attribute__((used)) static void
FUNC_41(const char *VAR_6)
{
 char VAR_7[64];
 struct archive_entry *VAR_8;
 struct archive *VAR_9;
 size_t VAR_10;
 size_t VAR_11 = 1000;
 char *VAR_12;

 VAR_12 = FUNC_38(VAR_11);


 FUNC_31((VAR_9 = FUNC_27()) != ((void*)0));
 FUNC_33(VAR_9, VAR_5, FUNC_29(VAR_9));
 if (VAR_6 != ((void*)0) &&
     VAR_5 != FUNC_30(VAR_9, "7zip",
     "compression", VAR_6)) {
  FUNC_40("%s writing not fully supported on this platform",
     VAR_6);
  FUNC_32(VAR_5, FUNC_25(VAR_9));
  FUNC_37(VAR_12);
  return;
 }
 FUNC_33(VAR_9, VAR_5, FUNC_22(VAR_9));
 FUNC_33(VAR_9, VAR_5,
     FUNC_28(VAR_9, VAR_12, VAR_11, &VAR_10));




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_10(VAR_8, 1, 100);
 FUNC_32(1, FUNC_5(VAR_8));
 FUNC_32(100, FUNC_6(VAR_8));
 FUNC_1(VAR_8, "file");
 FUNC_35("file", FUNC_8(VAR_8));
 FUNC_9(VAR_8, VAR_1 | 0755);
 FUNC_32((VAR_1 | 0755), FUNC_4(VAR_8));
 FUNC_11(VAR_8, 8);

 FUNC_32(0, FUNC_26(VAR_9, VAR_8));
 FUNC_3(VAR_8);
 FUNC_32(8, FUNC_24(VAR_9, "12345678", 9));
 FUNC_32(0, FUNC_24(VAR_9, "1", 1));




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_10(VAR_8, 1, 10);
 FUNC_32(1, FUNC_5(VAR_8));
 FUNC_32(10, FUNC_6(VAR_8));
 FUNC_1(VAR_8, "file2");
 FUNC_35("file2", FUNC_8(VAR_8));
 FUNC_9(VAR_8, VAR_1 | 0755);
 FUNC_32((VAR_1 | 0755), FUNC_4(VAR_8));
 FUNC_11(VAR_8, 4);

 FUNC_32(VAR_5, FUNC_26(VAR_9, VAR_8));
 FUNC_3(VAR_8);
 FUNC_32(4, FUNC_24(VAR_9, "1234", 5));




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_10(VAR_8, 11, 100);
 FUNC_1(VAR_8, "dir");
 FUNC_9(VAR_8, VAR_0 | 0755);
 FUNC_11(VAR_8, 512);

 FUNC_33(VAR_9, VAR_5, FUNC_26(VAR_9, VAR_8));
 FUNC_36("size should be zero so that applications know not to write");
 FUNC_32(0, FUNC_12(VAR_8));
 FUNC_3(VAR_8);
 FUNC_33(VAR_9, 0, FUNC_24(VAR_9, "12345678", 9));




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_10(VAR_8, 11, 200);
 FUNC_1(VAR_8, "dir/subdir");
 FUNC_9(VAR_8, VAR_0 | 0755);
 FUNC_11(VAR_8, 512);

 FUNC_33(VAR_9, VAR_5, FUNC_26(VAR_9, VAR_8));
 FUNC_36("size should be zero so that applications know not to write");
 FUNC_32(0, FUNC_12(VAR_8));
 FUNC_3(VAR_8);
 FUNC_33(VAR_9, 0, FUNC_24(VAR_9, "12345678", 9));




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_10(VAR_8, 11, 300);
 FUNC_1(VAR_8, "dir/subdir/subdir");
 FUNC_9(VAR_8, VAR_0 | 0755);
 FUNC_11(VAR_8, 512);

 FUNC_33(VAR_9, VAR_5, FUNC_26(VAR_9, VAR_8));
 FUNC_36("size should be zero so that applications know not to write");
 FUNC_32(0, FUNC_12(VAR_8));
 FUNC_3(VAR_8);
 FUNC_33(VAR_9, 0, FUNC_24(VAR_9, "12345678", 9));


 FUNC_32(VAR_5, FUNC_23(VAR_9));
 FUNC_32(VAR_5, FUNC_25(VAR_9));


 FUNC_34(VAR_12, "\x37\x7a\xbc\xaf\x27\x1c\x00\x03", 8);





 FUNC_31((VAR_9 = FUNC_18()) != ((void*)0));
 FUNC_33(VAR_9, VAR_5, FUNC_21(VAR_9));
 FUNC_33(VAR_9, VAR_5, FUNC_20(VAR_9));
 FUNC_33(VAR_9, VAR_5, FUNC_39(VAR_9, VAR_12, VAR_10, 7));




 FUNC_33(VAR_9, VAR_5, FUNC_19(VAR_9, &VAR_8));
 FUNC_32(1, FUNC_5(VAR_8));
 FUNC_32(100, FUNC_6(VAR_8));
 FUNC_32(0, FUNC_0(VAR_8));
 FUNC_32(0, FUNC_2(VAR_8));
 FUNC_35("file", FUNC_8(VAR_8));
 FUNC_32(VAR_1 | 0755, FUNC_4(VAR_8));
 FUNC_32(8, FUNC_12(VAR_8));
 FUNC_33(VAR_9, 8,
     FUNC_16(VAR_9, VAR_7, sizeof(VAR_7)));
 FUNC_34(VAR_7, "12345678", 8);





 FUNC_33(VAR_9, VAR_5, FUNC_19(VAR_9, &VAR_8));
 FUNC_32(1, FUNC_5(VAR_8));
 FUNC_32(0, FUNC_6(VAR_8));
 FUNC_32(0, FUNC_0(VAR_8));
 FUNC_32(0, FUNC_2(VAR_8));
 FUNC_35("file2", FUNC_8(VAR_8));
 FUNC_32(VAR_1 | 0755, FUNC_4(VAR_8));
 FUNC_32(4, FUNC_12(VAR_8));
 FUNC_33(VAR_9, 4,
     FUNC_16(VAR_9, VAR_7, sizeof(VAR_7)));
 FUNC_34(VAR_7, "1234", 4);




 FUNC_33(VAR_9, VAR_5, FUNC_19(VAR_9, &VAR_8));
 FUNC_32(11, FUNC_5(VAR_8));
 FUNC_32(300, FUNC_6(VAR_8));
 FUNC_32(0, FUNC_0(VAR_8));
 FUNC_32(0, FUNC_2(VAR_8));
 FUNC_35("dir/subdir/subdir/", FUNC_8(VAR_8));
 FUNC_32(VAR_0 | 0755, FUNC_4(VAR_8));
 FUNC_32(0, FUNC_12(VAR_8));
 FUNC_33(VAR_9, 0, FUNC_16(VAR_9, VAR_7, 10));




 FUNC_33(VAR_9, VAR_5, FUNC_19(VAR_9, &VAR_8));
 FUNC_32(11, FUNC_5(VAR_8));
 FUNC_32(200, FUNC_6(VAR_8));
 FUNC_32(0, FUNC_0(VAR_8));
 FUNC_32(0, FUNC_2(VAR_8));
 FUNC_35("dir/subdir/", FUNC_8(VAR_8));
 FUNC_32(VAR_0 | 0755, FUNC_4(VAR_8));
 FUNC_32(0, FUNC_12(VAR_8));
 FUNC_33(VAR_9, 0, FUNC_16(VAR_9, VAR_7, 10));




 FUNC_33(VAR_9, VAR_5, FUNC_19(VAR_9, &VAR_8));
 FUNC_32(11, FUNC_5(VAR_8));
 FUNC_32(100, FUNC_6(VAR_8));
 FUNC_32(0, FUNC_0(VAR_8));
 FUNC_32(0, FUNC_2(VAR_8));
 FUNC_35("dir/", FUNC_8(VAR_8));
 FUNC_32(VAR_0 | 0755, FUNC_4(VAR_8));
 FUNC_32(0, FUNC_12(VAR_8));
 FUNC_33(VAR_9, 0, FUNC_16(VAR_9, VAR_7, 10));


 FUNC_33(VAR_9, VAR_2, FUNC_19(VAR_9, &VAR_8));


 FUNC_33(VAR_9, VAR_3, FUNC_13(VAR_9, 0));
 FUNC_33(VAR_9, VAR_4, FUNC_14(VAR_9));

 FUNC_32(VAR_5, FUNC_15(VAR_9));
 FUNC_32(VAR_5, FUNC_17(VAR_9));

 FUNC_37(VAR_12);
}
