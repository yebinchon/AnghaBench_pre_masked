
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
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*,char*) ;
 int FUNC_4 (struct archive_entry*,char*) ;
 int FUNC_5 (struct archive_entry*,char*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*) ;
 char const* FUNC_10 (struct archive_entry*) ;
 int FUNC_11 (struct archive_entry*) ;
 int FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (struct archive_entry*) ;
 int FUNC_14 (struct archive_entry*) ;
 struct archive_entry* FUNC_15 () ;
 int FUNC_16 (struct archive_entry*) ;
 char const* FUNC_17 (struct archive_entry*) ;
 int FUNC_18 (struct archive_entry*,int,int) ;
 int FUNC_19 (struct archive_entry*,int,int) ;
 int FUNC_20 (struct archive_entry*,int) ;
 int FUNC_21 (struct archive_entry*,int,int) ;
 int FUNC_22 (struct archive_entry*,int) ;
 int FUNC_23 (struct archive_entry*,int) ;
 int FUNC_24 (struct archive_entry*) ;
 char const* FUNC_25 (struct archive_entry*) ;
 int FUNC_26 (struct archive_entry*) ;
 int FUNC_27 (struct archive_entry*,char*,char*,int) ;
 int FUNC_28 (struct archive_entry*,char const**,void const**,size_t*) ;
 int FUNC_29 (struct archive_entry*) ;
 int FUNC_30 (struct archive*) ;
 int FUNC_31 (struct archive*,char*,int) ;
 int FUNC_32 (struct archive*) ;
 struct archive* FUNC_33 () ;
 int FUNC_34 (struct archive*,struct archive_entry**) ;
 int FUNC_35 (struct archive*,char*,size_t) ;
 int FUNC_36 (struct archive*) ;
 int FUNC_37 (struct archive*) ;
 scalar_t__ FUNC_38 (struct archive*) ;
 int FUNC_39 (struct archive*) ;
 int FUNC_40 (struct archive*,char*,int) ;
 int FUNC_41 (struct archive*) ;
 int FUNC_42 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_43 () ;
 scalar_t__ FUNC_44 (struct archive*,char*,size_t,size_t*) ;
 int FUNC_45 (struct archive*) ;
 int FUNC_46 (struct archive*,char const*) ;
 int FUNC_47 (int) ;
 int FUNC_48 (int) ;
 int FUNC_49 (int,int ) ;
 int FUNC_50 (struct archive*,int,int ) ;
 int FUNC_51 (char*,char*,int) ;
 int FUNC_52 (char*,char const*) ;
 int FUNC_53 (char*) ;
 char* FUNC_54 (size_t) ;
 int FUNC_55 (char*,...) ;

__attribute__((used)) static void
FUNC_56(const char *VAR_6)
{
 char VAR_7[64];
 size_t VAR_8 = 1500;
 char *VAR_9;
 struct archive_entry *VAR_10;
 struct archive *VAR_11;
 size_t VAR_12;
 const char *VAR_13;
 const void *VAR_14;
 size_t VAR_15;


 FUNC_47((VAR_11 = FUNC_43()) != ((void*)0));
 if (FUNC_45(VAR_11) != VAR_5) {
  FUNC_55("xar is not supported on this platform");
  FUNC_50(VAR_11, VAR_5, FUNC_41(VAR_11));
  return;
 }
 FUNC_48(0 == FUNC_38(VAR_11));
 if (VAR_6 != ((void*)0) &&
     FUNC_46(VAR_11, VAR_6) != VAR_5) {
  FUNC_55("option `%s` is not supported on this platform", VAR_6);
  FUNC_50(VAR_11, VAR_5, FUNC_41(VAR_11));
  return;
 }

 VAR_9 = FUNC_54(VAR_8);
 FUNC_47(VAR_9 != ((void*)0));

 FUNC_48(0 == FUNC_44(VAR_11, VAR_9, VAR_8, &VAR_12));





 FUNC_47((VAR_10 = FUNC_15()) != ((void*)0));
 FUNC_18(VAR_10, 2, 20);
 FUNC_19(VAR_10, 4, 40);
 FUNC_21(VAR_10, 5, 50);
 FUNC_4(VAR_10, "file");
 FUNC_20(VAR_10, VAR_2 | 0755);
 FUNC_22(VAR_10, 2);
 FUNC_23(VAR_10, 8);
 FUNC_27(VAR_10, "user.data1", "ABCDEFG", 7);
 FUNC_27(VAR_10, "user.data2", "XYZ", 3);
 FUNC_50(VAR_11, VAR_5, FUNC_42(VAR_11, VAR_10));
 FUNC_9(VAR_10);
 FUNC_50(VAR_11, 8, FUNC_40(VAR_11, "12345678", 9));




 FUNC_47((VAR_10 = FUNC_15()) != ((void*)0));
 FUNC_18(VAR_10, 2, 20);
 FUNC_19(VAR_10, 4, 40);
 FUNC_21(VAR_10, 5, 50);
 FUNC_4(VAR_10, "file2");
 FUNC_5(VAR_10, "file");
 FUNC_20(VAR_10, VAR_1 | 0755);
 FUNC_23(VAR_10, 0);
 FUNC_50(VAR_11, VAR_5, FUNC_42(VAR_11, VAR_10));
 FUNC_9(VAR_10);




 FUNC_47((VAR_10 = FUNC_15()) != ((void*)0));
 FUNC_18(VAR_10, 2, 20);
 FUNC_19(VAR_10, 4, 40);
 FUNC_21(VAR_10, 5, 50);
 FUNC_4(VAR_10, "dir/file");
 FUNC_20(VAR_10, VAR_2 | 0755);
 FUNC_23(VAR_10, 8);
 FUNC_50(VAR_11, VAR_5, FUNC_42(VAR_11, VAR_10));
 FUNC_9(VAR_10);
 FUNC_50(VAR_11, 8, FUNC_40(VAR_11, "abcdefgh", 9));




 FUNC_47((VAR_10 = FUNC_15()) != ((void*)0));
 FUNC_18(VAR_10, 2, 20);
 FUNC_19(VAR_10, 4, 40);
 FUNC_21(VAR_10, 5, 50);
 FUNC_4(VAR_10, "dir/dir2/file4");
 FUNC_3(VAR_10, "file");
 FUNC_20(VAR_10, VAR_2 | 0755);
 FUNC_22(VAR_10, 2);
 FUNC_23(VAR_10, 0);
 FUNC_50(VAR_11, VAR_5, FUNC_42(VAR_11, VAR_10));
 FUNC_9(VAR_10);




 FUNC_47((VAR_10 = FUNC_15()) != ((void*)0));
 FUNC_18(VAR_10, 2, 20);
 FUNC_19(VAR_10, 4, 40);
 FUNC_21(VAR_10, 5, 50);
 FUNC_4(VAR_10, "dir/dir3");
 FUNC_20(VAR_10, VAR_0 | 0755);
 FUNC_26(VAR_10);
 FUNC_50(VAR_11, VAR_5, FUNC_42(VAR_11, VAR_10));
 FUNC_9(VAR_10);




 FUNC_47((VAR_10 = FUNC_15()) != ((void*)0));
 FUNC_18(VAR_10, 2, 20);
 FUNC_19(VAR_10, 4, 40);
 FUNC_21(VAR_10, 5, 50);
 FUNC_4(VAR_10, "dir/dir2/file4/wrong");
 FUNC_20(VAR_10, VAR_2 | 0755);
 FUNC_22(VAR_10, 1);
 FUNC_23(VAR_10, 0);
 FUNC_50(VAR_11, VAR_4, FUNC_42(VAR_11, VAR_10));
 FUNC_9(VAR_10);
 FUNC_50(VAR_11, VAR_5, FUNC_39(VAR_11));
 FUNC_50(VAR_11, VAR_5, FUNC_41(VAR_11));






 FUNC_47((VAR_11 = FUNC_33()) != ((void*)0));
 FUNC_50(VAR_11, 0, FUNC_37(VAR_11));
 FUNC_50(VAR_11, 0, FUNC_36(VAR_11));
 FUNC_50(VAR_11, 0, FUNC_35(VAR_11, VAR_9, VAR_12));




 FUNC_50(VAR_11, 0, FUNC_34(VAR_11, &VAR_10));
 FUNC_49(2, FUNC_0(VAR_10));
 FUNC_49(0, FUNC_2(VAR_10));
 FUNC_49(4, FUNC_6(VAR_10));
 FUNC_49(0, FUNC_8(VAR_10));
 FUNC_49(5, FUNC_12(VAR_10));
 FUNC_49(0, FUNC_14(VAR_10));
 FUNC_52("file", FUNC_17(VAR_10));
 FUNC_47((VAR_2 | 0755) == FUNC_11(VAR_10));
 FUNC_49(2, FUNC_16(VAR_10));
 FUNC_49(8, FUNC_24(VAR_10));
 FUNC_49(2, FUNC_29(VAR_10));
 FUNC_49(VAR_5,
     FUNC_28(VAR_10, &VAR_13, &VAR_14, &VAR_15));
 FUNC_52("user.data2", VAR_13);
 FUNC_51(VAR_14, "XYZ", 3);
 FUNC_49(VAR_5,
     FUNC_28(VAR_10, &VAR_13, &VAR_14, &VAR_15));
 FUNC_52("user.data1", VAR_13);
 FUNC_51(VAR_14, "ABCDEFG", 7);
 FUNC_50(VAR_11, 8, FUNC_31(VAR_11, VAR_7, 10));
 FUNC_51(VAR_7, "12345678", 8);




 FUNC_50(VAR_11, 0, FUNC_34(VAR_11, &VAR_10));
 FUNC_47(FUNC_1(VAR_10));
 FUNC_49(2, FUNC_0(VAR_10));
 FUNC_49(0, FUNC_2(VAR_10));
 FUNC_47(FUNC_7(VAR_10));
 FUNC_49(4, FUNC_6(VAR_10));
 FUNC_49(0, FUNC_8(VAR_10));
 FUNC_47(FUNC_13(VAR_10));
 FUNC_49(5, FUNC_12(VAR_10));
 FUNC_49(0, FUNC_14(VAR_10));
 FUNC_52("file2", FUNC_17(VAR_10));
 FUNC_52("file", FUNC_25(VAR_10));
 FUNC_47((VAR_1 | 0755) == FUNC_11(VAR_10));
 FUNC_49(0, FUNC_24(VAR_10));




 FUNC_50(VAR_11, 0, FUNC_34(VAR_11, &VAR_10));
 FUNC_49(2, FUNC_0(VAR_10));
 FUNC_49(0, FUNC_2(VAR_10));
 FUNC_49(4, FUNC_6(VAR_10));
 FUNC_49(0, FUNC_8(VAR_10));
 FUNC_49(5, FUNC_12(VAR_10));
 FUNC_49(0, FUNC_14(VAR_10));
 FUNC_52("dir/file", FUNC_17(VAR_10));
 FUNC_47((VAR_2 | 0755) == FUNC_11(VAR_10));
 FUNC_49(8, FUNC_24(VAR_10));
 FUNC_50(VAR_11, 8, FUNC_31(VAR_11, VAR_7, 10));
 FUNC_51(VAR_7, "abcdefgh", 8);




 FUNC_50(VAR_11, 0, FUNC_34(VAR_11, &VAR_10));
 FUNC_47(FUNC_1(VAR_10));
 FUNC_49(2, FUNC_0(VAR_10));
 FUNC_49(0, FUNC_2(VAR_10));
 FUNC_47(FUNC_7(VAR_10));
 FUNC_49(4, FUNC_6(VAR_10));
 FUNC_49(0, FUNC_8(VAR_10));
 FUNC_47(FUNC_13(VAR_10));
 FUNC_49(5, FUNC_12(VAR_10));
 FUNC_49(0, FUNC_14(VAR_10));
 FUNC_52("dir/dir2/file4", FUNC_17(VAR_10));
 FUNC_52("file", FUNC_10(VAR_10));
 FUNC_47((VAR_2 | 0755) == FUNC_11(VAR_10));
 FUNC_49(2, FUNC_16(VAR_10));
 FUNC_49(0, FUNC_24(VAR_10));




 FUNC_50(VAR_11, 0, FUNC_34(VAR_11, &VAR_10));
 FUNC_47(FUNC_1(VAR_10));
 FUNC_49(2, FUNC_0(VAR_10));
 FUNC_49(0, FUNC_2(VAR_10));
 FUNC_47(FUNC_7(VAR_10));
 FUNC_49(4, FUNC_6(VAR_10));
 FUNC_49(0, FUNC_8(VAR_10));
 FUNC_47(FUNC_13(VAR_10));
 FUNC_49(5, FUNC_12(VAR_10));
 FUNC_49(0, FUNC_14(VAR_10));
 FUNC_52("dir/dir3", FUNC_17(VAR_10));
 FUNC_47((VAR_0 | 0755) == FUNC_11(VAR_10));




 FUNC_50(VAR_11, VAR_3, FUNC_34(VAR_11, &VAR_10));
 FUNC_50(VAR_11, VAR_5, FUNC_30(VAR_11));
 FUNC_50(VAR_11, VAR_5, FUNC_32(VAR_11));

 FUNC_53(VAR_9);
}
