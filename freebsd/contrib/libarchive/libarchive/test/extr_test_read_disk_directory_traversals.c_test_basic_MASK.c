
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 struct archive_entry* FUNC_3 () ;
 char* FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*,void const**,size_t*,scalar_t__*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 struct archive* FUNC_11 () ;
 int FUNC_12 (struct archive*,char*) ;
 int FUNC_13 (struct archive*,char*) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (struct archive*,struct archive_entry*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (struct archive*,int,int) ;
 int FUNC_19 (void const*,char*,int) ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (char*,int) ;
 int FUNC_23 (char*,int,char*) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*) ;
 char* FUNC_26 (int *,int ) ;
 char* FUNC_27 (int) ;
 scalar_t__ FUNC_28 (char*,char*) ;
 int FUNC_29 (char*,char*) ;
 char* FUNC_30 (char*,int) ;
 scalar_t__ FUNC_31 (int ,char*) ;
 int FUNC_32 (char*,char*) ;
 int FUNC_33 (char*) ;
 char* FUNC_34 (char*,int) ;

__attribute__((used)) static void
FUNC_35(void)
{
 struct archive *VAR_5;
 struct archive_entry *VAR_6;
 const void *VAR_7;
 char *VAR_8, *VAR_9;
 size_t VAR_10;
 int64_t VAR_11;
 int VAR_12;




 FUNC_22("dir1", 0755);
 FUNC_23("dir1/file1", 0644, "0123456789");
 FUNC_23("dir1/file2", 0644, "hello world");
 FUNC_22("dir1/sub1", 0755);
 FUNC_23("dir1/sub1/file1", 0644, "0123456789");
 FUNC_22("dir1/sub2", 0755);
 FUNC_23("dir1/sub2/file1", 0644, "0123456789");
 FUNC_23("dir1/sub2/file2", 0644, "0123456789");
 FUNC_22("dir1/sub2/sub1", 0755);
 FUNC_22("dir1/sub2/sub2", 0755);
 FUNC_22("dir1/sub2/sub3", 0755);
 FUNC_23("dir1/sub2/sub3/file", 0644, "xyz");
 VAR_12 = 12;

 FUNC_16((VAR_6 = FUNC_3()) != ((void*)0));
 FUNC_16((VAR_5 = FUNC_11()) != ((void*)0));
 FUNC_18(VAR_5, VAR_3, FUNC_12(VAR_5, "dir1"));

 while (VAR_12--) {
  FUNC_18(VAR_5, VAR_3, FUNC_15(VAR_5, VAR_6));
  if (FUNC_28(FUNC_4(VAR_6), "dir1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_28(FUNC_4(VAR_6),
      "dir1/file1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 10);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 10);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "0123456789", 10);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 10);
   FUNC_17(0, FUNC_9(VAR_5));
  } else if (FUNC_28(FUNC_4(VAR_6),
      "dir1/file2") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 11);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 11);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "hello world", 11);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 11);
   FUNC_17(0, FUNC_9(VAR_5));
  } else if (FUNC_28(FUNC_4(VAR_6),
      "dir1/sub1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_28(FUNC_4(VAR_6),
      "dir1/sub1/file1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 10);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 10);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "0123456789", 10);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 10);
   FUNC_17(0, FUNC_9(VAR_5));
  } else if (FUNC_28(FUNC_4(VAR_6),
      "dir1/sub2") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_28(FUNC_4(VAR_6),
      "dir1/sub2/file1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 10);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 10);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "0123456789", 10);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 10);
   FUNC_17(0, FUNC_9(VAR_5));
  } else if (FUNC_28(FUNC_4(VAR_6),
      "dir1/sub2/file2") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 10);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 10);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "0123456789", 10);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 10);
   FUNC_17(0, FUNC_9(VAR_5));
  } else if (FUNC_28(FUNC_4(VAR_6),
      "dir1/sub2/sub1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_28(FUNC_4(VAR_6),
      "dir1/sub2/sub2") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_28(FUNC_4(VAR_6),
      "dir1/sub2/sub3") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_28(FUNC_4(VAR_6),
      "dir1/sub2/sub3/file") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 3);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 3);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "xyz", 3);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 3);
   FUNC_17(0, FUNC_9(VAR_5));
  }
  if (FUNC_1(VAR_6) == VAR_0) {

   FUNC_18(VAR_5, VAR_3,
       FUNC_10(VAR_5));
  }
 }

 FUNC_18(VAR_5, VAR_2, FUNC_15(VAR_5, VAR_6));


 FUNC_17(VAR_3, FUNC_7(VAR_5));




 FUNC_18(VAR_5, VAR_3, FUNC_13(VAR_5, L"dir1"));

 VAR_12 = 12;
 while (VAR_12--) {
  FUNC_18(VAR_5, VAR_3, FUNC_15(VAR_5, VAR_6));
  if (FUNC_31(FUNC_5(VAR_6), L"dir1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_31(FUNC_5(VAR_6),
      L"dir1/file1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 10);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 10);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "0123456789", 10);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 10);
   FUNC_17(0, FUNC_9(VAR_5));
  } else if (FUNC_31(FUNC_5(VAR_6),
      L"dir1/file2") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 11);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 11);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "hello world", 11);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 11);
   FUNC_17(0, FUNC_9(VAR_5));
  } else if (FUNC_31(FUNC_5(VAR_6),
      L"dir1/sub1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_31(FUNC_5(VAR_6),
      L"dir1/sub1/file1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 10);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 10);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "0123456789", 10);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 10);
   FUNC_17(0, FUNC_9(VAR_5));
  } else if (FUNC_31(FUNC_5(VAR_6),
      L"dir1/sub2") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_31(FUNC_5(VAR_6),
      L"dir1/sub2/file1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 10);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 10);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "0123456789", 10);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 10);
   FUNC_17(0, FUNC_9(VAR_5));
  } else if (FUNC_31(FUNC_5(VAR_6),
      L"dir1/sub2/file2") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 10);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 10);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "0123456789", 10);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 10);
   FUNC_17(0, FUNC_9(VAR_5));
  } else if (FUNC_31(FUNC_5(VAR_6),
      L"dir1/sub2/sub1") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_31(FUNC_5(VAR_6),
      L"dir1/sub2/sub2") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_31(FUNC_5(VAR_6),
      L"dir1/sub2/sub3") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_0);
   FUNC_17(1, FUNC_9(VAR_5));
  } else if (FUNC_31(FUNC_5(VAR_6),
      L"dir1/sub2/sub3/file") == 0) {
   FUNC_17(FUNC_1(VAR_6), VAR_1);
   FUNC_17(FUNC_6(VAR_6), 3);
   FUNC_18(VAR_5, VAR_3,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 3);
   FUNC_17((int)VAR_11, 0);
   FUNC_19(VAR_7, "xyz", 3);
   FUNC_17(VAR_2,
       FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
   FUNC_17((int)VAR_10, 0);
   FUNC_17((int)VAR_11, 3);
   FUNC_17(0, FUNC_9(VAR_5));
  }
  if (FUNC_1(VAR_6) == VAR_0) {

   FUNC_18(VAR_5, VAR_3,
       FUNC_10(VAR_5));
  }
 }

 FUNC_18(VAR_5, VAR_2, FUNC_15(VAR_5, VAR_6));


 FUNC_17(VAR_3, FUNC_7(VAR_5));




 FUNC_18(VAR_5, VAR_3, FUNC_12(VAR_5, "dir1/file1"));


 FUNC_18(VAR_5, VAR_3, FUNC_15(VAR_5, VAR_6));
 FUNC_17(0, FUNC_9(VAR_5));
 FUNC_20(FUNC_4(VAR_6), "dir1/file1");
 FUNC_17(FUNC_1(VAR_6), VAR_1);
 FUNC_17(FUNC_6(VAR_6), 10);
 FUNC_18(VAR_5, VAR_3,
     FUNC_8(VAR_5, &VAR_7, &VAR_10, &VAR_11));
 FUNC_17((int)VAR_10, 10);
 FUNC_17((int)VAR_11, 0);
 FUNC_19(VAR_7, "0123456789", 10);


 FUNC_18(VAR_5, VAR_2, FUNC_15(VAR_5, VAR_6));


 FUNC_17(VAR_3, FUNC_7(VAR_5));
 VAR_8 = FUNC_26(((void*)0), 0);


 FUNC_18(VAR_5, VAR_3, FUNC_12(VAR_5, "dir1"));


 VAR_12 = 12;
 while (VAR_12--) {
  FUNC_18(VAR_5, VAR_3,
      FUNC_15(VAR_5, VAR_6));
  if (FUNC_28(FUNC_4(VAR_6),
      "dir1/sub1/file1") == 0)



   break;
  if (FUNC_1(VAR_6) == VAR_0) {

   FUNC_18(VAR_5, VAR_3,
       FUNC_10(VAR_5));
  }
 }

 FUNC_17(VAR_3, FUNC_14(VAR_5));


 FUNC_24(
     "Current working directory does not return to the initial"
     "directory");



 VAR_9 = FUNC_26(((void*)0), 0);

 FUNC_20(VAR_8, VAR_9);
 FUNC_25(VAR_8);
 FUNC_25(VAR_9);

 FUNC_2(VAR_6);
}
