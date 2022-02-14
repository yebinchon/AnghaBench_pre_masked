
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
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 struct archive_entry* FUNC_6 () ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive_entry*,int) ;
 int FUNC_9 (struct archive_entry*,int,int) ;
 int FUNC_10 (struct archive_entry*,int) ;
 int FUNC_11 (struct archive_entry*) ;
 int FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (struct archive_entry*) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (struct archive*,char*,int) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*) ;
 int FUNC_18 (struct archive*,struct archive_entry*) ;
 int FUNC_19 (struct archive*) ;
 int FUNC_20 (struct archive*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int,int ) ;
 int FUNC_23 (struct archive*,int,int ) ;
 int FUNC_24 (char*,int ) ;
 int FUNC_25 (char*) ;

__attribute__((used)) static void
FUNC_26(struct archive *VAR_4)
{
 struct archive_entry *VAR_5;
 FUNC_21((VAR_5 = FUNC_6()) != ((void*)0));
 FUNC_9(VAR_5, 1, 10);
 FUNC_0(VAR_5, "file");
 FUNC_8(VAR_5, VAR_1 | 0755);
 FUNC_10(VAR_5, 8);
 FUNC_22(0, FUNC_18(VAR_4, VAR_5));
 FUNC_2(VAR_5);
 FUNC_22(8, FUNC_15(VAR_4, "12345678", 9));
 FUNC_22(0, FUNC_15(VAR_4, "1", 1));




 FUNC_21((VAR_5 = FUNC_6()) != ((void*)0));
 FUNC_9(VAR_5, 1, 10);
 FUNC_0(VAR_5, "file2");
 FUNC_8(VAR_5, VAR_1 | 0755);
 FUNC_10(VAR_5, 4);
 FUNC_22(VAR_2, FUNC_18(VAR_4, VAR_5));
 FUNC_2(VAR_5);
 FUNC_22(4, FUNC_15(VAR_4, "1234", 4));




 FUNC_21((VAR_5 = FUNC_6()) != ((void*)0));
 FUNC_9(VAR_5, 2, 15);
 FUNC_0(VAR_5, "file3");
 FUNC_8(VAR_5, VAR_1 | 0621);
 FUNC_13(VAR_5);
 FUNC_22(VAR_2, FUNC_18(VAR_4, VAR_5));
 FUNC_2(VAR_5);
 FUNC_22(5, FUNC_15(VAR_4, "mnopq", 5));




 FUNC_21((VAR_5 = FUNC_6()) != ((void*)0));
 FUNC_9(VAR_5, 1, 10);
 FUNC_22(1, FUNC_4(VAR_5));
 FUNC_22(10, FUNC_5(VAR_5));
 FUNC_0(VAR_5, "symlink");
 FUNC_24("symlink", FUNC_7(VAR_5));
 FUNC_1(VAR_5, "file1");
 FUNC_24("file1", FUNC_12(VAR_5));
 FUNC_8(VAR_5, VAR_0 | 0755);
 FUNC_22((VAR_0 | 0755), FUNC_3(VAR_5));
 FUNC_10(VAR_5, 4);

 FUNC_22(VAR_2, FUNC_18(VAR_4, VAR_5));
 FUNC_2(VAR_5);




 FUNC_21((VAR_5 = FUNC_6()) != ((void*)0));
 FUNC_9(VAR_5, 11, 110);
 FUNC_0(VAR_5, "dir");
 FUNC_8(VAR_5, VAR_3 | 0755);
 FUNC_10(VAR_5, 512);
 FUNC_23(VAR_4, VAR_2, FUNC_18(VAR_4, VAR_5));
 FUNC_25("size should be zero so that applications know not to write");
 FUNC_22(0, FUNC_11(VAR_5));
 FUNC_2(VAR_5);
 FUNC_23(VAR_4, 0, FUNC_15(VAR_4, "12345678", 9));
 FUNC_23(VAR_4, VAR_2, FUNC_20(VAR_4));




 FUNC_21((VAR_5 = FUNC_6()) != ((void*)0));
 FUNC_9(VAR_5, 1, 10);
 FUNC_0(VAR_5, "file_stored");
 FUNC_8(VAR_5, VAR_1 | 0755);
 FUNC_10(VAR_5, 8);
 FUNC_22(0, FUNC_18(VAR_4, VAR_5));
 FUNC_2(VAR_5);
 FUNC_22(8, FUNC_15(VAR_4, "12345678", 9));
 FUNC_22(0, FUNC_15(VAR_4, "1", 1));




 FUNC_21((VAR_5 = FUNC_6()) != ((void*)0));
 FUNC_9(VAR_5, 1, 10);
 FUNC_0(VAR_5, "file2_stored");
 FUNC_8(VAR_5, VAR_1 | 0755);
 FUNC_10(VAR_5, 4);
 FUNC_22(VAR_2, FUNC_18(VAR_4, VAR_5));
 FUNC_2(VAR_5);
 FUNC_22(4, FUNC_15(VAR_4, "ACEG", 4));




 FUNC_21((VAR_5 = FUNC_6()) != ((void*)0));
 FUNC_9(VAR_5, 2, 15);
 FUNC_0(VAR_5, "file3_stored");
 FUNC_8(VAR_5, VAR_1 | 0621);
 FUNC_13(VAR_5);
 FUNC_22(VAR_2, FUNC_18(VAR_4, VAR_5));
 FUNC_2(VAR_5);
 FUNC_22(5, FUNC_15(VAR_4, "ijklm", 5));




 FUNC_21((VAR_5 = FUNC_6()) != ((void*)0));
 FUNC_9(VAR_5, 1, 10);
 FUNC_0(VAR_5, "symlink_stored");
 FUNC_1(VAR_5, "file1");
 FUNC_8(VAR_5, VAR_0 | 0755);
 FUNC_10(VAR_5, 4);
 FUNC_22(VAR_2, FUNC_18(VAR_4, VAR_5));
 FUNC_2(VAR_5);




 FUNC_21((VAR_5 = FUNC_6()) != ((void*)0));
 FUNC_9(VAR_5, 11, 110);
 FUNC_0(VAR_5, "dir_stored");
 FUNC_8(VAR_5, VAR_3 | 0755);
 FUNC_10(VAR_5, 512);
 FUNC_23(VAR_4, VAR_2, FUNC_18(VAR_4, VAR_5));
 FUNC_25("size should be zero so that applications know not to write");
 FUNC_22(0, FUNC_11(VAR_5));
 FUNC_2(VAR_5);
 FUNC_23(VAR_4, 0, FUNC_15(VAR_4, "12345678", 9));



 FUNC_22(VAR_2, FUNC_14(VAR_4));
 FUNC_22(VAR_2, FUNC_17(VAR_4));
}
