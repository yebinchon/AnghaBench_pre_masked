
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
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*,char*,int) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*,struct archive_entry**) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (struct archive*,int,int ) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (char*,int ) ;

__attribute__((used)) static void
FUNC_18(struct archive *VAR_5, int VAR_6, int VAR_7)
{
 char VAR_8[64];
 struct archive_entry *VAR_9;






 FUNC_15(VAR_5, VAR_4, FUNC_12(VAR_5, &VAR_9));
 FUNC_14(1, FUNC_3(VAR_9));

 FUNC_14(0, FUNC_4(VAR_9));
 FUNC_14(0, FUNC_0(VAR_9));
 FUNC_14(0, FUNC_1(VAR_9));
 FUNC_17("file", FUNC_5(VAR_9));
 if (VAR_6) {
  FUNC_14(VAR_2 | 0755, FUNC_2(VAR_9));
 }
 FUNC_13(FUNC_7(VAR_9));
 FUNC_14(8, FUNC_6(VAR_9));
 if (VAR_7) {
  FUNC_15(VAR_5, 8,
      FUNC_10(VAR_5, VAR_8, sizeof(VAR_8)));
  FUNC_16(VAR_8, "12345678", 8);
 }


 FUNC_15(VAR_5, VAR_4, FUNC_12(VAR_5, &VAR_9));
 FUNC_14(1, FUNC_3(VAR_9));
 FUNC_14(0, FUNC_4(VAR_9));
 FUNC_14(0, FUNC_0(VAR_9));
 FUNC_14(0, FUNC_1(VAR_9));
 FUNC_17("file2", FUNC_5(VAR_9));
 if (VAR_6) {
  FUNC_14(VAR_2 | 0755, FUNC_2(VAR_9));
 }
 FUNC_14(4, FUNC_6(VAR_9));
 FUNC_13(FUNC_7(VAR_9));
 if (VAR_7) {
  FUNC_15(VAR_5, 4,
      FUNC_10(VAR_5, VAR_8, sizeof(VAR_8)));
  FUNC_16(VAR_8, "1234", 4);
 }


 FUNC_15(VAR_5, VAR_4, FUNC_12(VAR_5, &VAR_9));
 FUNC_14(2, FUNC_3(VAR_9));
 FUNC_14(0, FUNC_4(VAR_9));
 FUNC_14(0, FUNC_0(VAR_9));
 FUNC_14(0, FUNC_1(VAR_9));
 FUNC_17("file3", FUNC_5(VAR_9));
 if (VAR_6) {
  FUNC_14(5, FUNC_6(VAR_9));
  FUNC_14(VAR_2 | 0621, FUNC_2(VAR_9));
 } else {
  FUNC_14(0, FUNC_7(VAR_9));
 }
 if (VAR_7) {
  FUNC_15(VAR_5, 5,
      FUNC_10(VAR_5, VAR_8, sizeof(VAR_8)));
  FUNC_16(VAR_8, "mnopq", 5);
 }


 FUNC_15(VAR_5, VAR_4, FUNC_12(VAR_5, &VAR_9));
 FUNC_14(1, FUNC_3(VAR_9));
 FUNC_14(0, FUNC_4(VAR_9));
 FUNC_14(0, FUNC_0(VAR_9));
 FUNC_14(0, FUNC_1(VAR_9));
 FUNC_17("symlink", FUNC_5(VAR_9));
 FUNC_14(VAR_1 | 0755, FUNC_2(VAR_9));
 FUNC_14(0, FUNC_6(VAR_9));
 FUNC_17("file1", FUNC_8(VAR_9));


 FUNC_15(VAR_5, VAR_4, FUNC_12(VAR_5, &VAR_9));
 FUNC_14(11, FUNC_3(VAR_9));
 FUNC_14(0, FUNC_4(VAR_9));
 FUNC_14(0, FUNC_0(VAR_9));
 FUNC_14(0, FUNC_1(VAR_9));
 FUNC_17("dir/", FUNC_5(VAR_9));
 if (VAR_6)
  FUNC_14(VAR_0 | 0755, FUNC_2(VAR_9));
 FUNC_14(0, FUNC_6(VAR_9));
 if (VAR_7) {
  FUNC_15(VAR_5, 0, FUNC_10(VAR_5, VAR_8, 10));
 }
 FUNC_15(VAR_5, VAR_4, FUNC_12(VAR_5, &VAR_9));
 FUNC_14(1, FUNC_3(VAR_9));

 FUNC_14(0, FUNC_4(VAR_9));
 FUNC_14(0, FUNC_0(VAR_9));
 FUNC_14(0, FUNC_1(VAR_9));
 FUNC_17("file_stored", FUNC_5(VAR_9));
 if (VAR_6)
  FUNC_14(VAR_2 | 0755, FUNC_2(VAR_9));
 FUNC_13(FUNC_7(VAR_9));
 FUNC_14(8, FUNC_6(VAR_9));
 if (VAR_7) {
  FUNC_15(VAR_5, 8,
      FUNC_10(VAR_5, VAR_8, sizeof(VAR_8)));
  FUNC_16(VAR_8, "12345678", 8);
 }



 FUNC_15(VAR_5, VAR_4, FUNC_12(VAR_5, &VAR_9));
 FUNC_14(1, FUNC_3(VAR_9));
 FUNC_14(0, FUNC_4(VAR_9));
 FUNC_14(0, FUNC_0(VAR_9));
 FUNC_14(0, FUNC_1(VAR_9));
 FUNC_17("file2_stored", FUNC_5(VAR_9));
 if (VAR_6)
  FUNC_14(VAR_2 | 0755, FUNC_2(VAR_9));
 FUNC_14(4, FUNC_6(VAR_9));
 FUNC_13(FUNC_7(VAR_9));
 if (VAR_7) {
  FUNC_15(VAR_5, 4,
      FUNC_10(VAR_5, VAR_8, sizeof(VAR_8)));
  FUNC_16(VAR_8, "ACEG", 4);
 }


 FUNC_15(VAR_5, VAR_4, FUNC_12(VAR_5, &VAR_9));
 FUNC_14(2, FUNC_3(VAR_9));
 FUNC_14(0, FUNC_4(VAR_9));
 FUNC_14(0, FUNC_0(VAR_9));
 FUNC_14(0, FUNC_1(VAR_9));
 FUNC_17("file3_stored", FUNC_5(VAR_9));
 if (VAR_6) {
  FUNC_14(5, FUNC_6(VAR_9));
  FUNC_14(VAR_2 | 0621, FUNC_2(VAR_9));
 } else {
  FUNC_14(0, FUNC_7(VAR_9));
 }
 if (VAR_7) {
  FUNC_15(VAR_5, 5,
      FUNC_10(VAR_5, VAR_8, sizeof(VAR_8)));
  FUNC_16(VAR_8, "ijklm", 4);
 }


 FUNC_15(VAR_5, VAR_4, FUNC_12(VAR_5, &VAR_9));
 FUNC_14(1, FUNC_3(VAR_9));
 FUNC_14(0, FUNC_4(VAR_9));
 FUNC_14(0, FUNC_0(VAR_9));
 FUNC_14(0, FUNC_1(VAR_9));
 FUNC_17("symlink_stored", FUNC_5(VAR_9));
 FUNC_14(VAR_1 | 0755, FUNC_2(VAR_9));
 FUNC_14(0, FUNC_6(VAR_9));
 FUNC_17("file1", FUNC_8(VAR_9));


 FUNC_15(VAR_5, VAR_4, FUNC_12(VAR_5, &VAR_9));
 FUNC_14(11, FUNC_3(VAR_9));
 FUNC_14(0, FUNC_4(VAR_9));
 FUNC_14(0, FUNC_0(VAR_9));
 FUNC_14(0, FUNC_1(VAR_9));
 FUNC_17("dir_stored/", FUNC_5(VAR_9));
 if (VAR_6)
  FUNC_14(VAR_0 | 0755, FUNC_2(VAR_9));
 FUNC_14(0, FUNC_6(VAR_9));
 if (VAR_7) {
  FUNC_15(VAR_5, 0, FUNC_10(VAR_5, VAR_8, 10));
 }


 FUNC_15(VAR_5, VAR_3, FUNC_12(VAR_5, &VAR_9));
 FUNC_14(VAR_4, FUNC_9(VAR_5));
 FUNC_14(VAR_4, FUNC_11(VAR_5));
}
