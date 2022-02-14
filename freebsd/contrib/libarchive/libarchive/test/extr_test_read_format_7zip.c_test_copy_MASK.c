
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*,int ) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*,char*,int) ;
 int FUNC_10 (struct archive*) ;
 scalar_t__ FUNC_11 (struct archive*) ;
 struct archive* FUNC_12 () ;
 int FUNC_13 (struct archive*,struct archive_entry**) ;
 int FUNC_14 (struct archive*,int,int) ;
 int FUNC_15 (struct archive*,char const*,int) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (struct archive*,int,int ) ;
 int FUNC_21 (char*,char*,int) ;
 int FUNC_22 (char*,int ) ;
 int FUNC_23 (int) ;
 int FUNC_24 (char const*) ;
 int FUNC_25 (char const*,int) ;

__attribute__((used)) static void
FUNC_26(int VAR_8)
{
 const char *VAR_9 = "test_read_format_7zip_copy.7z";
 struct archive_entry *VAR_10;
 struct archive *VAR_11;
 char VAR_12[128];
 int VAR_13 = -1;

 FUNC_24(VAR_9);
 FUNC_18((VAR_11 = FUNC_12()) != ((void*)0));
 FUNC_20(VAR_11, VAR_4, FUNC_16(VAR_11));
 FUNC_20(VAR_11, VAR_4, FUNC_17(VAR_11));
 if (VAR_8) {
  VAR_13 = FUNC_25(VAR_9, VAR_7 | VAR_6);
  FUNC_20(VAR_11, VAR_4,
      FUNC_14(VAR_11, VAR_13, 10240));
 } else {
  FUNC_20(VAR_11, VAR_4,
      FUNC_15(VAR_11, VAR_9, 10240));
 }


 FUNC_20(VAR_11, VAR_4, FUNC_13(VAR_11, &VAR_10));
 FUNC_19((VAR_0 | 0666), FUNC_1(VAR_10));
 FUNC_22("file1", FUNC_3(VAR_10));
 FUNC_19(86401, FUNC_2(VAR_10));
 FUNC_19(60, FUNC_4(VAR_10));
 FUNC_19(FUNC_0(VAR_10), 0);
 FUNC_18(FUNC_11(VAR_11) > VAR_5);
 FUNC_19(60, FUNC_9(VAR_11, VAR_12, sizeof(VAR_12)));
 FUNC_21(VAR_12, "    ", 4);

 FUNC_19(1, FUNC_5(VAR_11));


 FUNC_20(VAR_11, VAR_1, FUNC_13(VAR_11, &VAR_10));


 FUNC_20(VAR_11, VAR_2, FUNC_6(VAR_11, 0));
 FUNC_20(VAR_11, VAR_3, FUNC_7(VAR_11));


 FUNC_19(VAR_4, FUNC_8(VAR_11));
 FUNC_19(VAR_4, FUNC_10(VAR_11));
 if (VAR_13 != -1)
  FUNC_23(VAR_13);
}
