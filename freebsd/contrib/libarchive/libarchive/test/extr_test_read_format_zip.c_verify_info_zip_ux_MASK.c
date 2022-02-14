
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
 int FUNC_3 (struct archive_entry*) ;
 char* FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 scalar_t__ FUNC_7 (struct archive*) ;
 char* FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*,int ) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*) ;
 int FUNC_13 (struct archive*,char**,int) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*,struct archive_entry**) ;
 int * FUNC_17 () ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (struct archive*,int,int ) ;
 int FUNC_21 (char**,char*,int) ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static void
FUNC_24(struct archive *VAR_6, int VAR_7)
{
 struct archive_entry *VAR_8;
 char *VAR_9[128];

 FUNC_20(VAR_6, VAR_5, FUNC_16(VAR_6, &VAR_8));
 FUNC_22("file1", FUNC_4(VAR_8));
 FUNC_19(1300668680, FUNC_3(VAR_8));
 FUNC_19(18, FUNC_5(VAR_8));
 FUNC_19(FUNC_1(VAR_8), 0);
 FUNC_20(VAR_6, FUNC_15(VAR_6), 0);
 if (VAR_7)
  FUNC_19(VAR_0 | 0644, FUNC_2(VAR_8));
 FUNC_23("zip reader should read Info-ZIP New Unix Extra Field");
 FUNC_19(1001, FUNC_6(VAR_8));
 FUNC_19(1001, FUNC_0(VAR_8));
 if (FUNC_17() != ((void*)0)) {
  FUNC_23("archive_read_data() returns number of bytes read");
  FUNC_19(18, FUNC_13(VAR_6, VAR_9, 19));
  FUNC_21(VAR_9, "hello\nhello\nhello\n", 18);
 } else {
  FUNC_19(VAR_2, FUNC_13(VAR_6, VAR_9, 19));
  FUNC_22(FUNC_8(VAR_6),
      "Unsupported ZIP compression method (8: deflation)");
  FUNC_18(FUNC_7(VAR_6) != 0);
 }
 FUNC_20(VAR_6, VAR_1, FUNC_16(VAR_6, &VAR_8));


 FUNC_23("the archive file has just one file");
 FUNC_19(1, FUNC_9(VAR_6));

 FUNC_20(VAR_6, VAR_3, FUNC_10(VAR_6, 0));
 FUNC_20(VAR_6, VAR_4, FUNC_11(VAR_6));
 FUNC_20(VAR_6, VAR_5, FUNC_12(VAR_6));
 FUNC_19(VAR_5, FUNC_14(VAR_6));
}
