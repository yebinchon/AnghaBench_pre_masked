
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
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive*,int ) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 struct archive* FUNC_12 () ;
 int FUNC_13 (struct archive*,struct archive_entry**) ;
 int FUNC_14 (struct archive*,char*,int) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (struct archive*,int,int) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (char*) ;

__attribute__((used)) static void
FUNC_22(void)
{
 char VAR_4[] = "test_compat_gtar_1.tar";
 struct archive_entry *VAR_5;
 struct archive *VAR_6;
 int VAR_7;

 FUNC_17((VAR_6 = FUNC_12()) != ((void*)0));
 FUNC_19(VAR_6, VAR_3, FUNC_15(VAR_6));
 FUNC_19(VAR_6, VAR_3, FUNC_16(VAR_6));
 FUNC_21(VAR_4);
 FUNC_19(VAR_6, VAR_3, FUNC_14(VAR_6, VAR_4, 10240));


 FUNC_19(VAR_6, VAR_3, VAR_7 = FUNC_13(VAR_6, &VAR_5));
 if (VAR_7 != VAR_3) {
  FUNC_11(VAR_6);
  return;
 }
 FUNC_20(
  "12345678901234567890123456789012345678901234567890"
  "12345678901234567890123456789012345678901234567890"
  "12345678901234567890123456789012345678901234567890"
  "12345678901234567890123456789012345678901234567890",
  FUNC_4(VAR_5));
 FUNC_18(1197179003, FUNC_3(VAR_5));
 FUNC_18(1000, FUNC_6(VAR_5));
 FUNC_20("tim", FUNC_7(VAR_5));
 FUNC_18(1000, FUNC_0(VAR_5));
 FUNC_20("tim", FUNC_1(VAR_5));
 FUNC_18(0100644, FUNC_2(VAR_5));


 FUNC_19(VAR_6, VAR_3, VAR_7 = FUNC_13(VAR_6, &VAR_5));
 if (VAR_7 != VAR_3) {
  FUNC_11(VAR_6);
  return;
 }
 FUNC_20(
  "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij"
  "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij"
  "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij"
  "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij",
  FUNC_4(VAR_5));
 FUNC_20(
  "12345678901234567890123456789012345678901234567890"
  "12345678901234567890123456789012345678901234567890"
  "12345678901234567890123456789012345678901234567890"
  "12345678901234567890123456789012345678901234567890",
  FUNC_5(VAR_5));
 FUNC_18(1197179043, FUNC_3(VAR_5));
 FUNC_18(1000, FUNC_6(VAR_5));
 FUNC_20("tim", FUNC_7(VAR_5));
 FUNC_18(1000, FUNC_0(VAR_5));
 FUNC_20("tim", FUNC_1(VAR_5));
 FUNC_18(0120755, FUNC_2(VAR_5));


 FUNC_19(VAR_6, VAR_0, FUNC_13(VAR_6, &VAR_5));


 FUNC_18(FUNC_8(VAR_6, 0), VAR_1);
 FUNC_18(FUNC_9(VAR_6), VAR_2);

 FUNC_18(VAR_3, FUNC_10(VAR_6));
 FUNC_18(VAR_3, FUNC_11(VAR_6));
}
