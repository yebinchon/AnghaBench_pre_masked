
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 char* FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 scalar_t__ FUNC_6 (struct archive*) ;
 char* FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*,int ) ;
 int FUNC_10 (struct archive*) ;
 char* FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*) ;
 int FUNC_13 (struct archive*,char**,int) ;
 int FUNC_14 (struct archive*,void const**,size_t*,int *) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*,struct archive_entry**) ;
 int * FUNC_18 () ;
 int FUNC_19 (int) ;
 int FUNC_20 (int,int ) ;
 int FUNC_21 (struct archive*,int,int ) ;
 int FUNC_22 (char**,char*,int) ;
 int FUNC_23 (char*,char*) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char**,char,int) ;

__attribute__((used)) static void
FUNC_26(struct archive *VAR_8, int VAR_9)
{
 struct archive_entry *VAR_10;
 char *VAR_11[128];
 const void *VAR_12;
 size_t VAR_13;
 int64_t VAR_14;

 FUNC_21(VAR_8, VAR_6, FUNC_17(VAR_8, &VAR_10));
 FUNC_23("ZIP 1.0 (uncompressed)", FUNC_11(VAR_8));
 FUNC_23("dir/", FUNC_3(VAR_10));
 FUNC_20(1179604249, FUNC_2(VAR_10));
 FUNC_20(0, FUNC_4(VAR_10));
 if (VAR_9)
  FUNC_20(VAR_0 | 0755, FUNC_1(VAR_10));
 FUNC_20(FUNC_0(VAR_10), 0);
 FUNC_21(VAR_8, FUNC_16(VAR_8), 0);
 FUNC_21(VAR_8, VAR_2,
     FUNC_14(VAR_8, &VAR_12, &VAR_13, &VAR_14));
 FUNC_20((int)VAR_13, 0);

 FUNC_21(VAR_8, VAR_6, FUNC_17(VAR_8, &VAR_10));
 FUNC_23("ZIP 2.0 (deflation)", FUNC_11(VAR_8));
 FUNC_23("file1", FUNC_3(VAR_10));
 FUNC_20(1179604289, FUNC_2(VAR_10));
 if (VAR_9)
  FUNC_20(VAR_1 | 0755, FUNC_1(VAR_10));
 FUNC_20(18, FUNC_4(VAR_10));
 FUNC_20(FUNC_0(VAR_10), 0);
 FUNC_21(VAR_8, FUNC_16(VAR_8), 0);
 FUNC_24("archive_read_data() returns number of bytes read");
 if (FUNC_18() != ((void*)0)) {
  FUNC_20(18, FUNC_13(VAR_8, VAR_11, 19));
  FUNC_22(VAR_11, "hello\nhello\nhello\n", 18);
 } else {
  FUNC_20(VAR_3, FUNC_13(VAR_8, VAR_11, 19));
  FUNC_23(FUNC_7(VAR_8),
      "Unsupported ZIP compression method (8: deflation)");
  FUNC_19(FUNC_6(VAR_8) != 0);
 }

 FUNC_21(VAR_8, VAR_6, FUNC_17(VAR_8, &VAR_10));
 FUNC_23("ZIP 2.0 (deflation)", FUNC_11(VAR_8));
 FUNC_23("file2", FUNC_3(VAR_10));
 FUNC_20(1179605932, FUNC_2(VAR_10));
 FUNC_20(FUNC_0(VAR_10), 0);
 FUNC_21(VAR_8, FUNC_16(VAR_8), 0);
 if (VAR_9) {
  FUNC_20(VAR_1 | 0755, FUNC_1(VAR_10));
 }
 FUNC_19(FUNC_5(VAR_10));
 FUNC_20(18, FUNC_4(VAR_10));
 if (FUNC_18() != ((void*)0)) {
  FUNC_24("file2 has a bad CRC, so read should fail and not change buff");
  FUNC_25(VAR_11, 'a', 19);
  FUNC_20(VAR_7, FUNC_13(VAR_8, VAR_11, 19));
  FUNC_22(VAR_11, "aaaaaaaaaaaaaaaaaaa", 19);
 } else {
  FUNC_20(VAR_3, FUNC_13(VAR_8, VAR_11, 19));
  FUNC_23(FUNC_7(VAR_8),
      "Unsupported ZIP compression method (8: deflation)");
  FUNC_19(FUNC_6(VAR_8) != 0);
 }
 FUNC_20(VAR_2, FUNC_17(VAR_8, &VAR_10));
 FUNC_23("ZIP 2.0 (deflation)", FUNC_11(VAR_8));

 FUNC_24("the archive file has three files");
 FUNC_20(3, FUNC_8(VAR_8));
 FUNC_21(VAR_8, VAR_4, FUNC_9(VAR_8, 0));
 FUNC_21(VAR_8, VAR_5, FUNC_10(VAR_8));
 FUNC_21(VAR_8, VAR_6, FUNC_12(VAR_8));
 FUNC_20(VAR_6, FUNC_15(VAR_8));
}
